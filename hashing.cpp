#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<vector>

using namespace std;

int linear(int num);
int quadratic(int num);
int doubleHash(int num);
int customHash(int num);
unsigned int* hashTable;

vector<int> linearVec;
vector<int> quadraticVec;
vector<int> doubleVec;
vector<int> customVec;

int main()
{

//-----------------------------------------------------------------
//Linear	
	int operations;
	hashTable = new unsigned int[1000001];
	
	for(int i = 0; i < 1000000; i++)
	{
		hashTable[i] = 0;
	}
	

	for(int i = 0; i < 1000000; i++)
	{
		int r = rand() % 1000000;
		operations = linear(r);
		if(i > 500000)
		{
			linearVec.push_back(operations);
		}		

	}

	int sum = 0;
	for(int i = 0; i < linearVec.size(); i++)
	{
		sum += linearVec[i];
	}

	int average = sum / linearVec.size();
	

	
	delete [] hashTable;

	cout << "operations for linear: " << sum  << endl;
	cout << "average for linear hashing over load factor of .5: " << average << endl;

//-----------------------------------------------------------------
//Quadratic
	
	operations = 0;
	hashTable = new unsigned int[1000000];

	for(int i = 0; i < 1000000; i++)
	{
		hashTable[i] = 0;
	}	

	for(int i = 0; i < 1000000; i++)
	{
		int r = rand() % 1000000;
		operations = quadratic(r);
		if(i > 500000)
		{
			quadraticVec.push_back(operations);
		}
	}
	
	sum = 0;
	for(int i = 0; i < quadraticVec.size(); i++)
	{
		sum += quadraticVec[i];
	}

	average = sum / quadraticVec.size();


	delete [] hashTable;	
	cout << "operations for quadratic: " << sum  << endl;
	cout << "average for quadratic hashing over load factor of .5: " << average << endl ;


//----------------------------------------------------------------------------
//Double Hashing

	operations = 0;
	hashTable = new unsigned int[1000000];

	for(int i = 0; i < 1000000; i++)
	{
		hashTable[i] = 0;
	}	

	for(int i = 0; i < 1000000; i++)
	{
		int r = rand() % 1000000;
		operations = doubleHash(r);
		if(i > 500000)
		{
			doubleVec.push_back(operations);
		}
	}

	sum = 0;
	for(int i = 0; i < doubleVec.size(); i++)
	{
		sum += doubleVec[i];
	}

	average = sum / doubleVec.size();

	
	delete [] hashTable;	
	cout << "operations for double hashing: " << sum << endl;
	cout << "average for double hashing over load factor of .5: " << average << endl;


//----------------------------------------------------------------------------
//Custom Hashing

	operations = 0;
	hashTable = new unsigned int[1000000];

	for(int i = 0; i < 1000000; i++)
	{
		hashTable[i] = 0;
	}	

	for(int i = 0; i < 1000000; i++)
	{
		int r = rand() % 1000000;
		operations = customHash(r);
		if(i > 500000)
		{
			customVec.push_back(operations);
		}
	}
	
	sum = 0;
	for(int i = 0; i < customVec.size(); i++)
	{
		sum += customVec[i];
	}

	average = sum / customVec.size();


	delete [] hashTable;	
	cout << "operations for custom hashing: " << sum << endl;
	cout << "average for custom hashing over load factor of .5: " << average << endl;
	return 0;
}

int linear(int num)
{
	int collision = 1;	

	for(int i = 0; i < 1000000; i++)
	{
		if(hashTable[num] == 0)
		{
			hashTable[num] = num;
			break;
		}
		else
		{
			if(hashTable[(num + i) % 1000000] == 0)
			{
				hashTable[(num + i) % 1000000] = num;
				break;
			}
		}

		collision++;
	}

	return collision;
}


int quadratic(int num)
{

	int collisions = 1;
	unsigned int key = num % 1000000;
	int squared;
	

	for(int i = 0; i < 1000000; i++)
	{
		if(hashTable[key] == 0)
		{
			hashTable[key] = num;
			break;
		}

		squared = i * i;
		key = ((key + squared) % 1000000);
		
		collisions++;
	}

	return collisions;

}


int doubleHash(int num)
{
	int collisions = 1;
	unsigned int key = num;	

	for(int i = 0; i < 1000000; i++)
	{
		if(hashTable[key] == 0)
		{
			hashTable[num] = num;
			break;
		}
		else
		{
			collisions++;
			key = key + 1;
			if(hashTable[key] == 0)
			{
				hashTable[key] = num;
				break;
			}
			else
			{
				collisions++;
				key = (key + (i * i)) % 1000000;
				if(hashTable[key] == 0)
				{
					hashTable[key] = num;
					break;
				}
			}
		
		}
	}
	
	return collisions;
}


int customHash(int num)
{
	unsigned int collisions = 0;
	unsigned int key = num;

	for(int i = 0; i < 1000000; i++)
	{
		if(hashTable[key] == 0)
		{
			hashTable[key] = num;
			break;
		}
		else
		{
			collisions++;
			key = (key + (i * i * i)) % 1000000;
			if(hashTable[key] == 0)
			{
				hashTable[key] = num;
				break;
			}
			else
			{
				collisions++;
				key = abs(1000000 - key) % 1000000;
				if(hashTable[key] == 0)
				{
					hashTable[key] = num;
					break;
				}
			}
		}
	}

	return collisions;
}


