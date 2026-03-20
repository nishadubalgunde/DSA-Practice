#include <iostream>
using namespace std; 

void changeArr(int arr[], int size) {
    cout << "in function\n";
    for (int i = 0; i < size; i++) {
        arr[i] = 2 * arr[i]; 
    }
}

int linearSearch(int arr[], int sz, int target) {
    for (int i = 0; i < sz; i++) {
        if (arr[i] == target) {
            return i;  // return index when found
        }
    }
    return -1;  // not found
}

int main() {
    int arr[] = {4, 2, 7, 8, 2, 2, 5};
    int sz = 7; 
    int target = 8;

    cout << linearSearch(arr, sz, target) << endl;
    return 0;
}
