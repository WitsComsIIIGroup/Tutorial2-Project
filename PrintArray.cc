//Print Array Function
#include <iostream>
#include <sstream>

using namespace std;

void printArray(int array[], int size){
	string line ="";
	stringstream ss;

	for(int i = 0; i <= size; i++){
		if((i + 1) % 10 == 0){
			ss.str("");
			ss << array[i];
			ss.str();
			line = line + " " +  ss.str();

			cout << line << endl;
			line = "";
		}else{
			ss.str("");
			ss << array[i];
			ss.str();
			line = line + " " +  ss.str();
			}
		}
	}
