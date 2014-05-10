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

	cout<<"================" << endl;
	cout<<"Quick Sort Sort" << endl;
	cout<<"================" << endl;
	cout<<"Generated Array" << endl;
	genArray(array,matrixSize);
	printArray(array,matrixSize);
	cout<< endl;
	cout<<"Sorted Array" << endl;
	//Still figuring out how to implement quicksort
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


