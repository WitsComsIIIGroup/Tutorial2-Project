#include <iostream>
#include <ctime>
#include <time.h>
#include <stdlib.h>
using namespace std;
double first;

int* genArray(int a)
{
  int array [a];
  srand((unsigned)time(0));
  for(int i=0;i<a;i++)
    {
     array[i]=rand() % 65536 + 1;
      cout<<array[i]<<endl;
    }
  return array;
}


int main()
{
  cout<<"enter number"<<endl;
  cin>>first;
  genArray(first);
  system("pause");
  return 0;
}
