//Author: Sanjeewa Senanayaka
//Insertion Sort

#include<iostream>
using namespace std;

int* insertionSort(int array[]){
	int sizeOfArray = sizeof(array);
	
	for(int i = 1; i < sizeOfArray; i++){
		int currentVal = array[i];
		int j = i-1;

		while ( j >= 0 && array[j] > currentVal){
			array[j+1] = array[j];
			j = j-1;
		}

		array[j+1] = currentVal;
 
	}

	return array;

}
 
int main(){

	int array[] = {6,8,3,8,1,2,9,10};
	
	cout << "Before Sort" << endl;
        for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
                cout << array[i] << ", ";
        }
        cout << "\n";
		
	int *p;
	p = insertionSort(array);

	cout << "After Sort" << endl;
	for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
		cout << p[i] << ", ";
	}
	cout << "\n";
}
