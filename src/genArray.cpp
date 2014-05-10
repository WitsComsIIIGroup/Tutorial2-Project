#include <iostream>
#include <ctime>
#include <time.h>
#include <stdlib.h>
using namespace std;
double first;

void genArray(int array[],int matrixSize){

  srand((unsigned)time(0));
  for(int i=0;i<matrixSize;i++){
     array[i]=rand() % 65536 + 1;
    }
}

