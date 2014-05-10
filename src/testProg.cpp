using namespace std;
#include <stdlib.h>     /* qsort */
#include <iostream>



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

	cout<<"================";
	cout<<"Quick Sort Sort";
	cout<<"================";
	//For QuickSort
	/*genArray(array,matrixSize);
	printArray(array,matrixSize);
	Still figuring out how to implement quicksort
	printArray(array,matrixSize);*/

	cout<<"================";
	cout<<"Heap Sort";
	cout<<"================";
	//For Heap Sort
	permuteArray(array,matrixSize);
	printArray(array,matrixSize);
	heapSort(array,matrixSize);
	printArray(array,matrixSize);

	cout<<"================";
	cout<<"Bubble Sort";
	cout<<"================";
	//For Bubble Sort
	genArray(array,matrixSize);
	printArray(array,matrixSize);
	bubbleSort(array,matrixSize);
	printArray(array,matrixSize);


}


