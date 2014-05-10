#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

void randomize(int arr[], int n)
{
     srand(time(NULL));
     
     for (int i = n-1; i > 0; i--)
     {
         int j = rand() % (i+1);
         int temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
     }
}

void printarr(int arr[], int s)
{
     for (int i = 0; i < s; i++)
     {
         cout << arr[i] << endl;
     }
}

int main()
{
    int size;
    cout << "Please enter size of array: ";
    cin >> size;
    cout << endl << endl;
    int a [size];
    for(int i = 0; i < size; i++)
    {
            a[i] = rand() % 101;
    }
    printarr(a,size);
    randomize(a,size);
    cout << endl << endl << endl;
    printarr(a,size);
    
    system("pause");
    return 0;
}
