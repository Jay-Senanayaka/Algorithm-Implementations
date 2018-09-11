#include <iostream>
using namespace std;

void SelectionSort(int array[], int size){
    for(int i = 0; i < size-1; i++){
        int current_val = array[i];
        int min_value = array[i];
        int min_position = i;

        for(int j = i+1; j < size; j++){
            if(current_val > array[j] && array[j] < min_value){
                min_value = array[j];
                min_position = j;
            }
        }

        if(min_position != 1){
            int temp = current_val;
            array[i] = min_value;
            array[min_position] = temp;
        }
    }
}

void printArray(int array[], int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << endl;
    }
}
int main() {
    int array [] = {6, 9, 3, 5, 8, 0, 7, 16};

    int size = sizeof(array)/ sizeof(array[0]);
    SelectionSort(array, size);
    printArray(array, size);
}