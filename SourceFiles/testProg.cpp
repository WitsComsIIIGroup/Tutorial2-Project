#include <stdlib.h>
#include <iostream>

using namespace std;

void bubbleSort(int array[], int size);
void printArray(int array[], int size);
void heapSort(int arr[], int size);
void genArray(int array[],int matrixSize);
void permuteArray(int arr[], int n);

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

void testProg(int matrixSize){
	int array [matrixSize];

	cout<<"================" << endl;
	cout<<"Quick Sort" << endl;
	cout<<"================" << endl;

	cout<<"Generated Array" << endl;
	genArray(array, matrixSize);
	printArray(array, matrixSize);
	cout<< endl;

	cout<<"Sorted Array" << endl;
	qsort(array, matrixSize, sizeof(int), compare);
	printArray(array,matrixSize);

	cout<<"================" << endl;
	cout<<"Heap Sort" << endl;
	cout<<"================" << endl;

	cout<<"Permuted Array" << endl;
	permuteArray(array,matrixSize);
	printArray(array,matrixSize);
	cout<< endl;

	cout<<"Sorted Array" << endl;
	heapSort(array,matrixSize);
	printArray(array,matrixSize);

	cout<<"================" << endl;
	cout<<"Bubble Sort" << endl;
	cout<<"================" << endl;

	cout<<"Generated Array" << endl;
	genArray(array,matrixSize);
	printArray(array,matrixSize);
	cout<< endl;

	cout<<"Sorted Array" << endl;
	bubbleSort(array,matrixSize);
	printArray(array,matrixSize);
}


