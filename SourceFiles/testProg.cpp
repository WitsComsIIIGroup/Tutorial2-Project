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

	genArray(array,matrixSize);

	std::clock_t start;
	start = std::clock();

	qsort(array, matrixSize, sizeof(int), compare);

	std::cout << "Time: " << (std::clock() - start) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << std::endl;

	cout<<"================" << endl;
	cout<<"Heap Sort" << endl;

	permuteArray(array,matrixSize);

	start = std::clock();

	heapSort(array,matrixSize);

	std::cout << "Time: " << (std::clock() - start) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << std::endl;

	cout<<"================" << endl;
	cout<<"Bubble Sort" << endl;

	genArray(array,matrixSize);

	start = std::clock();

	bubbleSort(array,matrixSize);

	std::cout << "Time: " << (std::clock() - start) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << std::endl;

}


