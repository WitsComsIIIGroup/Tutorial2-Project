#include <iostream>
using namespace std;

void bubbleSort(int array[], int size);

int main(){
	int array[] = {140, 23, 1, 34234, 43, 25, 65, 435, 345, 345};
	bubbleSort(array, 10);

	for(int i = 0; i < 10; i++){
		cout << array[i] << endl;
	}
}
