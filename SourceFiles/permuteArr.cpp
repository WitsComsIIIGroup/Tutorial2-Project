#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

void permuteArray(int arr[], int n)
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


