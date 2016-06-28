//Randall Phillips
//COP4531
//Assignment 3
//0-1 knapsack problem

#include <iostream>
#include <math.h>
#include <vector>
#include <fstream>

using namespace std;
 
int knapsack(int value[], int weight[], int W, int n);
vector<int>items;

int main()
{
	int weight[100];
	int value[100];


	for(int i = 0; i < 100; i++)
	{
		weight[i] = int((1000 * (pow(i , .5))) + .5);
		//cout << "weight[" << i << "]: " << weight[i] <<endl;
		value[i] = 1;
	}


	

	cout << knapsack(value, weight, 335732, 100) << endl; 
	return 0;
}
  
int knapsack(int value[], int weight[], int W, int n)
{
	//int table[100][355732];
	//bool taken[100][355732];
		
	int** table = new int*[100];
	for(int i = 0; i < 100; i++)
	{
		table[i] = new int[335732];
	}
	bool** taken= new bool*[100];
	for(int i = 0; i < 100; i++)
	{
		taken[i] = new bool[335732];
	}
	

	ofstream outfile;
	outfile.open("knapsack.txt");
	

	for(int i = 0; i < W; i++)
	{
		table[0][i] = 0;
	}

	for(int i = 1; i < n; i++)
	{
		for(int j = 0; j < W; j++)
		{
			if(weight[i] <= j)
			{
				if(value[i] + table[i - 1][j - weight[i]] > table[i - 1][j])
				{
					table[i][j] = value[i] + table[i - 1][j - weight[i]];
					taken[i][j] = true;
				}
				else
				{
					table[i][j] = table[i - 1][j];
					taken[i][j] = false;	
				}
			}
			else
			{
				table[i][j] = table[i - 1][j];
				taken[i][j] = true;
			}
		}
	}


	int w = 335732;
	for(int i = n; i > 0; i--)
	{
		if(taken[i][w])
		{
			items.push_back(i);
			w = w - weight[i];
		}
	
	}
	outfile << "Randall Phillips" << endl;
	outfile << "COP4531" << endl;
	outfile << "Assignment 2" << endl;
	outfile << "ID      Weight" << endl;
	int total = 0;
	for(int i = 0; i < items.size(); i++)
	{
		outfile << items[i] << "      ";
		outfile << weight[items[i]] << endl;
		total += weight[items[i]];
	}
	
	outfile << "-----------------------------" << endl;
	outfile << table[n - 1][W - 1];
	outfile << "      " << total << endl;

	int numberOfItems = table[n - 1][W - 1];
	delete[] table;
	delete[] taken;
	outfile.close();
	return numberOfItems;
}





