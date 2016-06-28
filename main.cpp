//COP4531 Assignment 1
//Randall Phillips

#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<cmath>
#include<cstring>

//prototypes
void insertionSort(int[], int, int);
void mergeSort(int[], int, int);
void merge(int[], int, int);
int  leftChild(int);
void percDown(int [], int, int);
void heapSort(int[], int);
const int & median3(int [], int, int);
void quickSort(int[], int, int);
void countingSort(int[], int, int);
void radix(int byte, int size, int [], int []);
void radixSort(int[], int);
void bucketSort(int[], int); 


using namespace std;

int main()
{

	time_t mergeStart, mergeEnd;
	double mergeDiff;
	clock_t begin, end, millis;


	//array for running the sorts
	int* ten;
	int* fifty;
	int* oneHundred;
	int* fiveHundred;
	int* oneThousand;
	int* fiveThousand;
	int* tenThousand;
	int* fiftyThousand;
	int* oneHundredThousand;
	int* fiveHundredThousand;
	int* oneMillion;
	

	//ten
	//--------------------------------------------------------------------------
	//insertion
	ten = new int[10];
	for(int i = 0; i < 10; i++)
	{
		ten[i] = rand() % 10;
	}
	begin = clock();
	insertionSort(ten, 0, 10);
	end = clock();
	millis = end - begin;
	cout << "\nInserstion Sort on 10: " << millis << " milliseconds" << endl;


	delete [] ten;
	

	//merge
	ten = new int[10];
	for(int i = 0; i < 10; i++)
	{
		ten[i] = rand() % 10;
	}
	begin = clock();
	mergeSort(ten, 0, 9);
	end  = clock();
	millis = end - begin;
	cout << "\nMergeSort on 10: " << millis << " milliseconds" << endl;
	delete [] ten;

	//heap
	ten = new int[10];
	for(int i = 0; i < 10; i++)
	{
		ten[i] = rand() % 10;
	}
	begin = clock();
	heapSort(ten, 10);
	end  = clock();
	millis = end - begin;
	cout << "\nHeap Sort on 10: " << millis << "milliseconds" << endl;
	delete[] ten;
	
	//quick
	ten = new int[10];
	for(int i = 0; i < 10; i++)
	{
		ten[i] = rand() % 10;
	}
	begin = clock();
	quickSort(ten, 0, 9);
	end  = clock();
	millis = end - begin;
	cout << "\nQuick Sort on 10: " << millis  << " milliseconds" << endl;
	delete[] ten;


	//counting
	ten = new int[10];
	for(int i = 0; i < 10; i++)
	{
		ten[i] = rand() % 10;
	}
	begin = clock();
	countingSort(ten, 10, 10);
	end  = clock();
	millis = end - begin;
	cout << "\nCounting Sort on 10: " << millis << " milliseconds" << endl;
	delete[] ten;


	//radix
	ten = new int[10];
	for(int i = 0; i < 10; i++)
	{
		ten[i] = rand() % 10;
	}
	begin = clock();
	radixSort(ten, 10);
	end  = clock();
	millis = end - begin;
	cout << "\nRadix Sort on 10: " << millis << " milliseconds" << endl;
	delete[] ten;


	//bucket
	ten = new int[10];
	for(int i = 0; i < 10; i++)
	{
		ten[i] = rand() % 10;
	}
	begin = clock();
	bucketSort(ten, 10);
	end  = clock();
	millis = end - begin;
	cout << "\nBucket Sort on 10: " << millis << " milliseconds" << endl;
	delete[] ten;


	//fifty
	//-------------------------------------------------------------------------
	//-------------------------------------------------------------------------
	//insertion
	fifty = new int[50];
	for(int i = 0; i < 50; i++)
	{
		fifty[i] = rand() % 50;
	}
	begin = clock();
	insertionSort(fifty, 0, 50);
	end  = clock();
	millis = end - begin;
	cout << "\nInserstion Sort on 50: " << millis << " milliseconds" << endl;
	delete[] fifty;
	

	//merge
	fifty = new int[50];
	for(int i = 0; i < 50; i++)
	{
		fifty[i] = rand() % 50;
	}
	begin = clock();
	mergeSort(fifty, 0, 49);
	end  = clock();
	millis = end - begin;
	cout << "\nMergeSort on 50: " << millis << " milliseconds" << endl;
	delete[] fifty;

	//heap
	fifty = new int[50];
	for(int i = 0; i < 50; i++)
	{
		fifty[i] = rand() % 50;
	}
	begin = clock();
	heapSort(fifty, 10);
	end  = clock();
	millis = end - begin;
	cout << "\nHeap Sort on 50: " << millis << "milliseconds" << endl;
	delete[] fifty;

	//quick
	fifty = new int[50];
	for(int i = 0; i < 50; i++)
	{
		fifty[i] = rand() % 50;
	}
	begin = clock();
	quickSort(fifty, 0, 49);
	end  = clock();
	millis = end - begin;
	cout << "\nQuick Sort on 50: " << millis  << " milliseconds" << endl;
	delete[] fifty;


	//counting
	fifty = new int[50];
	for(int i = 0; i < 50; i++)
	{
		fifty[i] = rand() % 50;
	}
	begin = clock();
	countingSort(fifty, 50, 50);
	end  = clock();
	millis = end - begin;
	cout << "\nCounting Sort on 50: " << millis << " milliseconds" << endl;
	delete[] fifty;

	//radix
	fifty = new int[50];
	for(int i = 0; i < 50; i++)
	{
		fifty[i] = rand() % 50;
	}
	begin = clock();
	radixSort(fifty, 50);
	end  = clock();
	millis = end - begin;
	cout << "\nRadix Sort on 50: " << millis << " milliseconds" << endl;
	delete[] fifty;

	//bucket
	fifty = new int[50];
	for(int i = 0; i < 50; i++)
	{
		fifty[i] = rand() % 50;
	}
	begin = clock();
	bucketSort(fifty, 50);
	end  = clock();
	millis = end - begin;
	cout << "\nBucket Sort on 50: " << millis << " milliseconds" << endl;
	delete[] fifty;



	//one hundred
	//-------------------------------------------------------------------------
	//-------------------------------------------------------------------------
	//insertion
	oneHundred = new int[100];
	for(int i = 0; i < 100; i++)
	{
		oneHundred[i] = rand() % 100;
	}
	begin = clock();
	insertionSort(oneHundred, 0, 100);
	end  = clock();
	millis = end - begin;
	cout << "\nInserstion Sort on 100: " << millis << " milliseconds" << endl;
	delete[] oneHundred;
	

	//merge
	oneHundred = new int[100];
	for(int i = 0; i < 100; i++)
	{
		oneHundred[i] = rand() % 100;
	}
	begin = clock();
	mergeSort(oneHundred, 0, 99);
	end  = clock();
	millis = end - begin;
	cout << "\nMergeSort on 100: " << millis << " milliseconds" << endl;
	delete[] oneHundred;


	//heap
	oneHundred = new int[100];
	for(int i = 0; i < 100; i++)
	{
		oneHundred[i] = rand() % 100;
	}
	begin = clock();
	heapSort(oneHundred, 100);
	end  = clock();
	millis = end - begin;
	cout << "\nHeap Sort on 100: " << millis << "milliseconds" << endl;
	delete[] oneHundred;

	//quick
	oneHundred = new int[100];
	for(int i = 0; i < 100; i++)
	{
		oneHundred[i] = rand() % 100;
	}
	begin = clock();
	quickSort(oneHundred, 0, 99);
	end  = clock();
	millis = end - begin;
	cout << "\nQuick Sort on 100: " << millis  << " milliseconds" << endl;
	delete[] oneHundred;


	//counting
	oneHundred = new int[100];
	for(int i = 0; i < 100; i++)
	{
		oneHundred[i] = rand() % 100;
	}
	begin = clock();
	countingSort(oneHundred, 100, 100);
	end  = clock();
	millis = end - begin;
	cout << "\nCounting Sort on 100: " << millis << " milliseconds" << endl;
	delete[] oneHundred;


	//radix
	oneHundred = new int[100];
	for(int i = 0; i < 100; i++)
	{
		oneHundred[i] = rand() % 100;
	}
	begin = clock();
	radixSort(oneHundred, 100);
	end  = clock();
	millis = end - begin;
	cout << "\nRadix Sort on 100: " << millis << " milliseconds" << endl;
	delete[] oneHundred;

	//bucket
	oneHundred = new int[100];
	for(int i = 0; i < 100; i++)
	{
		oneHundred[i] = rand() % 100;
	}
	begin = clock();
	bucketSort(oneHundred, 100);
	end  = clock();
	millis = end - begin;
	cout << "\nBucket Sort on 100: " << millis << " milliseconds" << endl;
	delete[] oneHundred;


	//five hundred
	//--------------------------------------------------------------------------
	//--------------------------------------------------------------------------
	//insertion
	
	fiveHundred = new int[500];
	for(int i = 0; i < 500; i++)
	{
		fiveHundred[i] = rand() % 500;
	}
	begin = clock();
	insertionSort(fiveHundred, 0, 500);
	end  = clock();
	millis = end - begin;
	cout << "\nInserstion Sort on 500: " << millis << " milliseconds" << endl;
	delete[] fiveHundred;
	
	//merge
	fiveHundred = new int[500];
	for(int i = 0; i < 500; i++)
	{
		fiveHundred[i] = rand() % 500;
	}
	begin = clock();
	mergeSort(fiveHundred, 0, 499);
	end  = clock();
	millis = end - begin;
	cout << "\nMergeSort on 500: " << millis << " milliseconds" << endl;
	delete[] fiveHundred;


	//heap
	fiveHundred = new int[500];
	for(int i = 0; i < 500; i++)
	{
		fiveHundred[i] = rand() % 500;
	}
	begin = clock();
	heapSort(fiveHundred, 500);
	end  = clock();
	millis = end - begin;
	cout << "\nHeap Sort on 500: " << millis << "milliseconds" << endl;
	delete[] fiveHundred;

	//quick
	fiveHundred = new int[500];
	for(int i = 0; i < 500; i++)
	{
		fiveHundred[i] = rand() % 500;
	}
	begin = clock();
	quickSort(fiveHundred, 0, 499);
	end  = clock();
	millis = end - begin;
	cout << "\nQuick Sort on 500: " << millis  << " milliseconds" << endl;
	delete[] fiveHundred;

	//counting
	fiveHundred = new int[500];
	for(int i = 0; i < 500; i++)
	{
		fiveHundred[i] = rand() % 500;
	}
	begin = clock();
	countingSort(fiveHundred, 500, 500);
	end  = clock();
	millis = end - begin;
	cout << "\nCounting Sort on 500: " << millis << " milliseconds" << endl;
	delete[] fiveHundred;

	//radix
	fiveHundred = new int[500];
	for(int i = 0; i < 500; i++)
	{
		fiveHundred[i] = rand() % 500;
	}
	begin = clock();
	radixSort(fiveHundred, 500);
	end  = clock();
	millis = end - begin;
	cout << "\nRadix Sort on 500: " << millis << " milliseconds" << endl;
	delete[] fiveHundred;

	//bucket
	fiveHundred = new int[500];
	for(int i = 0; i < 500; i++)
	{
		fiveHundred[i] = rand() % 500;
	}
	begin = clock();
	bucketSort(fiveHundred, 500);
	end  = clock();
	millis = end - begin;
	cout << "\nBucket Sort on 500: " << millis << " milliseconds" << endl;
	delete[] fiveHundred;



	//oneThousand
	//--------------------------------------------------------------------------
	//--------------------------------------------------------------------------
	//insertion
	oneThousand = new int[1000];
	for(int i = 0; i < 1000; i++)
	{
		oneThousand[i] = rand() % 1000;
	}
	begin = clock();
	insertionSort(oneThousand, 0, 1000);
	end  = clock();
	millis = end - begin;
	cout << "\nInserstion Sort on 1000: " << millis << " milliseconds" << endl;
	delete[] oneThousand;

	
	//merge
	oneThousand = new int[1000];
	for(int i = 0; i < 1000; i++)
	{
		oneThousand[i] = rand() % 1000;
	}
	begin = clock();
	mergeSort(oneThousand, 0, 999);
	end  = clock();
	millis = end - begin;
	cout << "\nMergeSort on 1000: " << millis << " milliseconds" << endl;
	delete[] oneThousand;


	//heap
	oneThousand = new int[1000];
	for(int i = 0; i < 1000; i++)
	{
		oneThousand[i] = rand() % 1000;
	}
	begin = clock();
	heapSort(oneThousand, 1000);
	end  = clock();
	millis = end - begin;
	cout << "\nHeap Sort on 1000: " << millis << "milliseconds" << endl;
	delete[] oneThousand;

	//quick
	oneThousand = new int[1000];
	for(int i = 0; i < 1000; i++)
	{
		oneThousand[i] = rand() % 1000;
	}
	begin = clock();
	quickSort(oneThousand, 0, 999);
	end  = clock();
	millis = end - begin;
	cout << "\nQuick Sort on 1000: " << millis  << " milliseconds" << endl;
	delete[] oneThousand;


	//counting
	oneThousand = new int[1000];
	for(int i = 0; i < 1000; i++)
	{
		oneThousand[i] = rand() % 1000;
	}
	begin = clock();
	countingSort(oneThousand, 1000, 1000);
	end  = clock();
	millis = end - begin;
	cout << "\nCounting Sort on 1000: " << millis << " milliseconds" << endl;
	delete[] oneThousand;

	//radix
	oneThousand = new int[1000];
	for(int i = 0; i < 1000; i++)
	{
		oneThousand[i] = rand() % 1000;
	}
	begin = clock();
	radixSort(oneThousand, 1000);
	end  = clock();
	millis = end - begin;
	cout << "\nRadix Sort on 1000: " << millis << " milliseconds" << endl;
	delete[] oneThousand;

	//bucket
	oneThousand = new int[1000];
	for(int i = 0; i < 1000; i++)
	{
		oneThousand[i] = rand() % 1000;
	}
	begin = clock();
	bucketSort(oneThousand, 1000);
	end  = clock();
	millis = end - begin;
	cout << "\nBucket Sort on 1000: " << millis << " milliseconds" << endl;
	delete[] oneThousand;

	//five thousand
	//-------------------------------------------------------------------------
	//insertion
	fiveThousand = new int[5000];
	for(int i = 0; i < 5000; i++)
	{
		fiveThousand[i] = rand() % 5000;
	}
	begin = clock();
	insertionSort(fiveThousand, 0, 5000);
	end  = clock();
	millis = end - begin;
	cout << "\nInserstion Sort on 5000: " << millis << " milliseconds" << endl;
	delete[] fiveThousand;


	//merge
	fiveThousand = new int[5000];
	for(int i = 0; i < 5000; i++)
	{
		fiveThousand[i] = rand() % 5000;
	}
	begin = clock();
	mergeSort(fiveThousand, 0, 4999);
	end  = clock();
	millis = end - begin;
	cout << "\nMergeSort on 5000: " << millis << " milliseconds" << endl;
	delete[] fiveThousand;


	//heap
	fiveThousand = new int[5000];
	for(int i = 0; i < 5000; i++)
	{
		fiveThousand[i] = rand() % 5000;
	}
	begin = clock();
	heapSort(fiveThousand, 5000);
	end  = clock();
	millis = end - begin;
	cout << "\nHeap Sort on 5000: " << millis << "milliseconds" << endl;
	delete[] fiveThousand;

	//quick
	fiveThousand = new int[5000];
	for(int i = 0; i < 5000; i++)
	{
		fiveThousand[i] = rand() % 5000;
	}
	begin = clock();
	quickSort(fiveThousand, 0, 4999);
	end  = clock();
	millis = end - begin;
	cout << "\nQuick Sort on 5000: " << millis  << " milliseconds" << endl;
	delete[] fiveThousand;


	//counting
	fiveThousand = new int[5000];
	for(int i = 0; i < 5000; i++)
	{
		fiveThousand[i] = rand() % 5000;
	}
	begin = clock();
	countingSort(fiveThousand, 5000, 5000);
	end  = clock();
	millis = end - begin;
	cout << "\nCounting Sort on 5000: " << millis  << " milliseconds" << endl;
	delete[] fiveThousand;

	//radix
	fiveThousand = new int[5000];
	for(int i = 0; i < 5000; i++)
	{
		fiveThousand[i] = rand() % 5000;
	}
	begin = clock();
	radixSort(fiveThousand, 5000);
	end  = clock();
	millis = end - begin;
	cout << "\nRadix Sort on 5000: " << millis << " milliseconds" << endl;
	delete[] fiveThousand;

	//bucket
	fiveThousand = new int[5000];
	for(int i = 0; i < 5000; i++)
	{
		fiveThousand[i] = rand() % 5000;
	}
	begin = clock();
	bucketSort(fiveThousand, 5000);
	end  = clock();
	millis = end - begin;
	cout << "\nBucket Sort on 5000: " << millis << " milliseconds" << endl;
	delete[] fiveThousand;


	//tenThousand
	//-------------------------------------------------------------------------
	//insertion
	tenThousand = new int[10000];
	for(int i = 0; i < 10000; i++)
	{
		tenThousand[i] = rand() % 10000;
	}
	begin = clock();
	insertionSort(tenThousand, 0, 10000);
	end  = clock();
	millis = end - begin;
	cout << "\nInserstion Sort on 10000: " << millis << " milliseconds" << endl;
	delete[] tenThousand;

	//merge
	tenThousand = new int[10000];
	for(int i = 0; i < 10000; i++)
	{
		tenThousand[i] = rand() % 10000;
	}
	begin = clock();
	mergeSort(tenThousand, 0, 9999);
	end  = clock();
	millis = end - begin;
	cout << "\nMergeSort on 10000: " << millis << " milliseconds" << endl;
	delete[] tenThousand;


	//heap
	tenThousand = new int[10000];
	for(int i = 0; i < 10000; i++)
	{
		tenThousand[i] = rand() % 10000;
	}
	begin = clock();
	heapSort(tenThousand, 10000);
	end  = clock();
	millis = end - begin;
	cout << "\nHeap Sort on 10000: " << millis << "milliseconds" << endl;
	delete[] tenThousand;

	//quick
	tenThousand = new int[10000];
	for(int i = 0; i < 10000; i++)
	{
		tenThousand[i] = rand() % 10000;
	}
	begin = clock();
	quickSort(tenThousand, 0, 9999);
	end  = clock();
	millis = end - begin;
	cout << "\nQuick Sort on 10000: " << millis  << " milliseconds" << endl;
	delete[] tenThousand;


	//counting
	tenThousand = new int[10000];
	for(int i = 0; i < 10000; i++)
	{
		tenThousand[i] = rand() % 10000;
	}
	begin = clock();
	countingSort(tenThousand, 10000, 10000);
	end  = clock();
	millis = end - begin;
	cout << "\nCounting Sort on 10000: " << millis << " milliseconds" << endl;
	delete[] tenThousand;

	//radix
	tenThousand = new int[10000];
	for(int i = 0; i < 10000; i++)
	{
		tenThousand[i] = rand() % 10000;
	}
	begin = clock();
	radixSort(tenThousand, 10000);
	end  = clock();
	millis = end - begin;
	cout << "\nRadix Sort on 10000: " << millis << " milliseconds" << endl;
	delete[] tenThousand;

	//bucket
	tenThousand = new int[10000];
	for(int i = 0; i < 10000; i++)
	{
		tenThousand[i] = rand() % 10000;
	}
	begin = clock();
	bucketSort(tenThousand, 10000);
	end  = clock();
	millis = end - begin;
	cout << "\nBucket Sort on 10000: " << millis << " milliseconds" << endl;
	delete[] tenThousand;


	//fiftyThousand
	//------------------------------------------------------------------------
	//insertion
	fiftyThousand = new int[50000];
	for(int i = 0; i < 50000; i++)
	{
		fiftyThousand[i] = rand() % 50000;
	}
	begin = clock();
	insertionSort(fiftyThousand, 0, 50000);
	end = clock();
	millis = end - begin;
	cout << "\nInserstion Sort on 50000: " << millis << " milliseconds" << endl;
	delete[] fiftyThousand;

	//merge
	fiftyThousand = new int[50000];
	for(int i = 0; i < 50000; i++)
	{
		fiftyThousand[i] = rand() % 50000;
	}
	begin = clock();
	mergeSort(fiftyThousand, 0, 49999);
	end  = clock();
	millis = end - begin;
	cout << "\nMergeSort on 50000: " << millis << " milliseconds" << endl;
	delete[] fiftyThousand;



	//heap
	fiftyThousand = new int[50000];
	for(int i = 0; i < 50000; i++)
	{
		fiftyThousand[i] = rand() % 50000;
	}
	begin = clock();
	heapSort(fiftyThousand, 50000);
	end  = clock();
	millis = end - begin;
	cout << "\nHeap Sort on 50000: " << millis << "milliseconds" << endl;
	delete[] fiftyThousand;

	//quick
	fiftyThousand = new int[50000];
	for(int i = 0; i < 50000; i++)
	{
		fiftyThousand[i] = rand() % 50000;
	}
	begin = clock();
	quickSort(fiftyThousand, 0, 49999);
	end  = clock();
	millis = end - begin;
	cout << "\nQuick Sort on 50000: " << millis  << " milliseconds" << endl;
	delete[] fiftyThousand;


	//counting
	fiftyThousand = new int[50000];
	for(int i = 0; i < 50000; i++)
	{
		fiftyThousand[i] = rand() % 50000;
	}
	begin = clock();
	countingSort(fiftyThousand, 50000, 50000);
	end  = clock();
	millis = end - begin;
	cout << "\nCounting Sort on 50000: " << millis << " milliseconds" << endl;
	delete[] fiftyThousand;

	//radix
	fiftyThousand = new int[50000];
	for(int i = 0; i < 50000; i++)
	{
		fiftyThousand[i] = rand() % 50000;
	}
	begin = clock();
	radixSort(fiftyThousand, 50000);
	end  = clock();
	millis = end - begin;
	cout << "\nRadix Sort on 50000: " << millis << " milliseconds" << endl;
	delete[] fiftyThousand;

	//bucket
	fiftyThousand = new int[50000];
	for(int i = 0; i < 50000; i++)
	{
		fiftyThousand[i] = rand() % 50000;
	}
	begin = clock();
	bucketSort(fiftyThousand, 50000);
	end  = clock();
	millis = end - begin;
	cout << "\nBucket Sort on 50000: " << millis << " milliseconds" << endl;
	delete[] fiftyThousand;


	//oneHundredThousand
	//---------------------------------------------------------------------------
	//insertion
	oneHundredThousand = new int[100000];
	for(int i = 0; i < 100000; i++)
	{
		oneHundredThousand[i] = rand() % 100000;
	}
	begin = clock();
	insertionSort(oneHundredThousand, 0, 100000);
	end  = clock();
	millis = end - begin;
	cout << "\nInserstion Sort on 100000: " << millis << " milliseconds" << endl;
	delete[] oneHundredThousand;
	

	//merge
	oneHundredThousand = new int[100000];
	for(int i = 0; i < 100000; i++)
	{
		oneHundredThousand[i] = rand() % 100000;
	}
	begin = clock();
	mergeSort(oneHundredThousand, 0, 99999);
	end  = clock();
	millis = end - begin;
	cout << "\nMergeSort on 100000: " << millis << " milliseconds" << endl;
	delete[] oneHundredThousand;



	//heap
	oneHundredThousand = new int[100000];
	for(int i = 0; i < 100000; i++)
	{
		oneHundredThousand[i] = rand() % 100000;
	}
	begin = clock();
	heapSort(oneHundredThousand, 100000);
	end  = clock();
	millis = end - begin;
	cout << "\nHeap Sort on 100000: " << millis << "milliseconds" << endl;
	delete[] oneHundredThousand;

	//quick
	oneHundredThousand = new int[100000];
	for(int i = 0; i < 100000; i++)
	{
		oneHundredThousand[i] = rand() % 100000;
	}
	begin = clock();
	quickSort(oneHundredThousand, 0, 99999);
	end  = clock();
	millis = end - begin;
	cout << "\nQuick Sort on 100000: " << millis  << " milliseconds" << endl;
	delete[] oneHundredThousand;


	//counting
	oneHundredThousand = new int[100000];
	for(int i = 0; i < 100000; i++)
	{
		oneHundredThousand[i] = rand() % 100000;
	}
	begin = clock();
	countingSort(oneHundredThousand, 100000, 100000);
	end  = clock();
	millis = end - begin;
	cout << "\nCounting Sort on 100000: " << millis << " milliseconds" << endl;
	delete[] oneHundredThousand;

	//radix
	oneHundredThousand = new int[100000];
	for(int i = 0; i < 100000; i++)
	{
		oneHundredThousand[i] = rand() % 100000;
	}
	begin = clock();
	radixSort(oneHundredThousand, 100000);
	end  = clock();
	millis = end - begin;
	cout << "\nRadix Sort on 100000: " << millis << " milliseconds" << endl;
	delete[] oneHundredThousand;

	//bucket
	oneHundredThousand = new int[100000];
	for(int i = 0; i < 100000; i++)
	{
		oneHundredThousand[i] = rand() % 100000;
	}
	begin = clock();
	bucketSort(oneHundredThousand, 100000);
	end  = clock();
	millis = end - begin;
	cout << "\nBucket Sort on 100000: " << millis << " milliseconds" << endl;
	delete[] oneHundredThousand;

	//fiveHundredThousand
	//--------------------------------------------------------------------------
	//insertion
	fiveHundredThousand = new int[500000];
	for(int i = 0; i < 500000; i++)
	{
		fiveHundredThousand[i] = rand() % 500000;
	}
	begin = clock();
	insertionSort(fiveHundredThousand, 0, 500000);
	end  = clock();
	millis = end - begin;
	cout << "\nInserstion Sort on 500000: " << millis << " milliseconds" << endl;
	delete[] fiveHundredThousand;


	//merge
	fiveHundredThousand = new int[500000];
	for(int i = 0; i < 500000; i++)
	{
		fiveHundredThousand[i] = rand() % 500000;
	}
	begin = clock();
	mergeSort(fiveHundredThousand, 0, 499999);
	end  = clock();
	millis = end - begin;
	cout << "\nMergeSort on 500000: " << millis << " milliseconds" << endl;
	delete[] fiveHundredThousand;
	


	//heap
	fiveHundredThousand = new int[500000];
	for(int i = 0; i < 500000; i++)
	{
		fiveHundredThousand[i] = rand() % 500000;
	}
	begin = clock();
	heapSort(fiveHundredThousand, 500000);
	end  = clock();
	millis = end - begin;
	cout << "\nHeap Sort on 500000: " << millis << "milliseconds" << endl;
	delete[] fiveHundredThousand;

	//quick
	fiveHundredThousand = new int[500000];
	for(int i = 0; i < 500000; i++)
	{
		fiveHundredThousand[i] = rand() % 500000;
	}
	begin = clock();
	quickSort(fiveHundredThousand, 0, 499999);
	end  = clock();
	millis = end - begin;
	cout << "\nQuick Sort on 500000: " << millis  << " milliseconds" << endl;
	delete[] fiveHundredThousand;


	//counting
	fiveHundredThousand = new int[500000];
	for(int i = 0; i < 500000; i++)
	{
		fiveHundredThousand[i] = rand() % 500000;
	}
	begin = clock();
	countingSort(fiveHundredThousand, 500000, 499999);
	end  = clock();
	millis = end - begin;
	cout << "\nCounting Sort on 500000: " << millis << " milliseconds" << endl;
	delete[] fiveHundredThousand;

	//radix
	fiveHundredThousand = new int[500000];
	for(int i = 0; i < 500000; i++)
	{
		fiveHundredThousand[i] = rand() % 500000;
	}
	begin = clock();
	radixSort(fiveHundredThousand, 500000);
	end  = clock();
	millis = end - begin;
	cout << "\nRadix Sort on 500000: " << millis << " milliseconds" << endl;
	delete[] fiveHundredThousand;

	//bucket
	fiveHundredThousand = new int[500000];
	for(int i = 0; i < 500000; i++)
	{
		fiveHundredThousand[i] = rand() % 500000;
	}
	begin = clock();
	bucketSort(fiveHundredThousand, 500000);
	end  = clock();
	millis = end - begin;
	cout << "\nBucket Sort on 500000: " << millis << " milliseconds" << endl;
	delete[] fiveHundredThousand;



	//oneMillion
	//----------------------------------------------------------------------------
	//insertion
	oneMillion = new int[1000000];
	for(int i = 0; i < 1000000; i++)
	{
		oneMillion[i] = rand() % 1000000;
	}
	begin = clock();
	insertionSort(oneMillion, 0, 1000000);
	end  = clock();
	millis = end - begin;
	cout << "\nInserstion Sort on 1000000: " << millis << " milliseconds" << endl;
	delete[] oneMillion;
	

	//merge
	oneMillion = new int[1000000];
	for(int i = 0; i < 1000000; i++)
	{
		oneMillion[i] = rand() % 1000000;
	}
	begin = clock();
	mergeSort(oneMillion, 0, 999999);
	end  = clock();
	millis = end - begin;
	cout << "\nMergeSort on 1000000: " << millis << " milliseconds" << endl;
	delete[] oneMillion;
	


	//heap
	oneMillion = new int[1000000];
	for(int i = 0; i < 1000000; i++)
	{
		oneMillion[i] = rand() % 1000000;
	}
	begin = clock();
	heapSort(oneMillion, 1000000);
	end  = clock();
	millis = end - begin;
	cout << "\nHeap Sort on 1000000: " << millis << "milliseconds" << endl;
	delete[] oneMillion;


	//quick
	oneMillion = new int[1000000];
	for(int i = 0; i < 1000000; i++)
	{
		oneMillion[i] = rand() % 1000000;
	}
	begin = clock();
	quickSort(oneMillion, 0, 999999);
	end  = clock();
	millis = end - begin;
	cout << "\nQuick Sort on 1000000: " << millis  << " milliseconds" << endl;
	delete[] oneMillion;


	//counting
	oneMillion = new int[1000000];
	for(int i = 0; i < 1000000; i++)
	{
		oneMillion[i] = rand() % 1000000;
	}
	begin = clock();
	countingSort(oneMillion, 1000000, 1000000);
	end  = clock();
	millis = end - begin;
	cout << "\nCounting Sort on 1000000: " << millis << " milliseconds" << endl;
	delete[] oneMillion;

	//radix
	oneMillion = new int[1000000];
	for(int i = 0; i < 1000000; i++)
	{
		oneMillion[i] = rand() % 1000000;
	}
	begin = clock();
	radixSort(oneMillion, 1000000);
	end  = clock();
	millis = end - begin;
	cout << "\nRadix Sort on 1000000: " << millis << " milliseconds" << endl;
	delete[] oneMillion;

	//bucket
	oneMillion = new int[1000000];
	for(int i = 0; i < 1000000; i++)
	{
		oneMillion[i] = rand() % 1000000;
	}
	begin = clock();
	bucketSort(oneMillion, 1000000);
	end  = clock();
	millis = end - begin;
	cout << "\nBucket Sort on 1000000: " << millis << " milliseconds" << endl;
	delete[] oneMillion;


	//end
	//--------------------------------------------------------------------------

    cout << "\n";
	system("PAUSE");
	return 0;
}


void insertionSort(int theArray[], int zero, int size)
{
	
	int key;
	int i;
	for(int j = 0; j < size; j++)
	{ 
		key = theArray[j];
		i = j - 1;
		
		while(theArray[i] > key && i >= 0)
		{
			theArray[i + 1] = theArray[i];
			i--;
		}

		theArray[i + 1] = key;
	}
	
	
}

void merge(int* theArray, int start, int right)
{
    int mid = (start + right) / 2;
    int index1 = 0;
    int index2 = start;
    int index3 = mid + 1;
	int index = right - start + 1;
    
	// Temp array
    int* temp;
	temp = new int[index];

    while(index2 <= mid && index3 <= right)
        if(theArray[index2] < theArray[index3])
            temp[index1++] = theArray[index2++];
        else
            temp[index1++] = theArray[index3++];

    
    while(index2 <= mid)
        temp[index1++] = theArray[index2++];

    
    while(index3 <= right)
        temp[index1++] = theArray[index3++];

    for(int i = start; i <= right; i++)
	{
		theArray[i] = temp[i - start];
	}
}

void mergeSort(int* theArray, int start, int right)
{
    if ( start < right )
    {
        int mid = (start + right) / 2;
        mergeSort(theArray, start, mid);
        mergeSort(theArray, mid + 1, right);
        merge(theArray, start, right);
    }

	
}

int leftChild(int i)
{
	return 2* i + 1;
}

void percDown(int theArray[], int i, int n)
{
	int child;
	int temp;

	for(temp = theArray[i]; leftChild(i) < n; i = child)
	{
		child = leftChild(i);
		if(child != n - 1 && theArray[child] < theArray[child + 1])
			child++;
		if(temp < theArray[child])
			theArray[i] = theArray[child];
		else
			break;
	}

	theArray[i] = temp;

}

void heapSort(int theArray[], int size)
{
	for(int i = size / 2; i >=0; i--)
	{
		percDown(theArray, i, size);
	}

	for(int j = size - 1; j > 0; j--)
	{
		int temp = theArray[0];
		theArray[0] = theArray[j];
		theArray[j] = temp;

		percDown(theArray, 0, j);
	}


	
}

const int & median3(int theArray[], int left, int right)
{
	int center = (left + right) / 2;
	
	if(theArray[center] < theArray[left])
	{
		int temp = theArray[center];
		theArray[center] = theArray[left];
		theArray[left] = temp;
	}

	if(theArray[right] < theArray[left])
	{
		int temp2 = theArray[left];
		theArray[left] = theArray[right];
		theArray[right]= temp2;
	}

	if(theArray[right] < theArray[center])
	{
		int temp3 = theArray[right];
		theArray[right] = theArray[center];
		theArray[center] = temp3;
	}

	int temp4 = theArray[center];
	theArray[center] = theArray[right - 1];
	theArray[right - 1] = temp4;

	return theArray[right - 1];

}

void quickSort(int theArray[], int left, int right)
{
	if(left + 10 <= right)
	{
		int pivot = median3(theArray, left, right);

		int i = left;
		int j = right - 1;

		for( ; ; )
		{
			while(theArray[++i] < pivot){}
			while(pivot < theArray[--j]){}

			if(i < j)
			{
				int temp = theArray[i];
				theArray[i] = theArray[j];
				theArray[j] = temp;
			}
			else
				break;
		}

		int temp2 = theArray[i];
		theArray[i] = theArray[right - 1];
		theArray[right - 1] = temp2;

		quickSort(theArray, left, i - 1);
		quickSort(theArray, i + 1, right);
	}
	else
		insertionSort(theArray, left, right);


	
}

void countingSort(int theArray[], int size, int range)
{
	
	int* temp = new int[size];
	int* temp2 = new int[range];

	for(int i = 0; i < range; i++)
	{
		temp2[i] = 0;
	}

	//
	for( int i = 0; i < range; i++)
	{
		 ++temp2[theArray[i]];
	}

	for(int i = 1; i < range; i++)
	{
		temp2[i] += temp2[i - 1];
	}

	for(int i = size - 1; i >= 0; i--)
	{
		temp[--temp2[theArray[i]]] = theArray[i];
	}


	for(int i = 0; i < size; i++)
	{
		theArray[i] = temp[i];
	}

	delete[] temp;
	delete[] temp2;

	

}


void radix(int byte, int size, int theArray[], int temp[])
{

	int* count = new int[256];

	memset(count, 0, 256 * sizeof(int));

	byte = byte << 3;

	for (int i = 0; i < size; ++i) 
		++count[((theArray[i]) >> (byte)) & 0xFF];  
	for (int i = 1; i < 256; ++i)   
		count[i] += count[i - 1]; 
	for (int i = size - 1; i >= 0; --i)
	{    
		temp[count[(theArray[i] >> (byte)) & 0xFF] - 1] = theArray[i];
		--count[(theArray[i] >> (byte)) & 0xFF];  
	}  
	delete[] count;


}

void radixSort(int theArray[], int size)
{
	int* temp = new int[size];

	for(unsigned int i = 0; i < sizeof(int); i += 2)
	{
		radix(i, size, theArray, temp);
		radix(i + 1, size, temp, theArray);
	}

	delete [] temp;

}

void bucketSort(int theArray[], int size)
{
	
	int *bucket = new int[size - 1];

	for(int i = 0; i <= size - 1; i++)
	{
		bucket[i] = 0;
	}

	for(int i = 0; i < size; i++)
	{
		++bucket[theArray[i]];
	}

	for(int i = 0, j = 0; j <= size - 1; ++j)
	{
		for(int k = bucket[j]; k > 0; k--)
		{
			theArray[i++] = j;
		}
	}

	

}
