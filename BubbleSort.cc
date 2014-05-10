//Bubble Sort Function
void bubbleSort(int array[], int size){
	bool fin = false;

	while(! fin){
		fin = true;

		for (int i = 0; i < size - 1; i++){
			if(array[i] > array[i+1]){
				fin = false;

				int temp = array[i];
				array[i] = array[i+1];
				array[i+1] = temp;
			}
		}
		size--;
	}
}

