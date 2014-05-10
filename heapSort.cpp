// reference: http://crackprogramming.blogspot.com/2012/11/heap-sort-c-implementation.html

#include <cmath>
#include <iostream>
#include <stdlib.h>

using namespace std;

void shiftRight(int* arr, int low, int high)
{
    int root = low;
    while ((root*2)+1 <= high)
    {
        int leftChild = (root * 2) + 1;
        int rightChild = (root * 2) + 2;
        int swapIdx = root;
        /*Check if root is less than left child*/
        if (arr[swapIdx] < arr[leftChild])
        {
            swapIdx = leftChild;
        }
        /*If right child exists check if it is less than current root*/
        if ((rightChild <= high) && (arr[swapIdx] < arr[rightChild]))
        {
            swapIdx = rightChild;
        }
        /*Make the biggest element of root, left and right child the root*/
        if (swapIdx != root)
        {
            int tmp = arr[root];
            arr[root] = arr[swapIdx];
            arr[swapIdx] = tmp;
            /*Keep shifting right and ensure that swapIdx satisfies
            heap property aka left and right child of it is smaller than
            itself*/
            root = swapIdx;
        }
        else
        {
            break;
        }
    }
    return;
}
void heapify(int* arr, int low, int high)
{
    /*Start with middle element. Middle element is chosen in
    such a way that the last element of array is either its
    left child or right child*/
    int midIdx = (high - low -1)/2;
    while (midIdx >= 0)
    {
        shiftRight(arr, midIdx, high);
        --midIdx;
    }
    return;
}
void heapSort(int* arr, int size)
{
    assert(arr);
    assert(size > 0);
    /*This will put max element in the index 0*/
    heapify(arr, 0, size-1);
    int high = size - 1;
    while (high > 0)
    {
        /*Swap max element with high index in the array*/
        int tmp = arr[high];
        arr[high] = arr[0];
        arr[0] = tmp;
        --high;
        /*Ensure heap property on remaining elements*/
        shiftRight(arr, 0, high);
    }
    return;
}

void displayArray(int* arr, int size) 
{
     for(int i = 0; i < size; i++)
     {
             cout << arr[i] << endl;
     }
}

int main() {
    int size;
    cin >> size;
    int a [size];
    for(int i = 0; i < size; i++)
    {
            a[i] = rand() % 1000 + 1;
    }
    cout << "Unsorted array:" << endl << endl;
    //displayArray(a,size);
    
    /*time_t start = time(0);
    heapSort(a,size);
    time_t end = time(0);
    double time = difftime(end, start) * 1000.0;*/
    
    cout << endl << endl << "Sorted array:" << endl << endl;
    
    time_t start,end,diff;

    start = clock();
    heapSort(a,size);
    end = clock();
    diff = end - start;
    
    
    //displayArray(a,size);
    cout << endl << endl << endl << "Time taken: " << diff << "ms with n = " << size << endl << endl;
    system("pause");
    return 0;
}
