#include <iostream>
using namespace std;

bool checkSorted(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {

    int arr[5] = {1, 6, 3, 4, 5};

    bool result = checkSorted(arr, 5); //function to check if array is sorted
    if(result) 
        cout << "Sorted!" << endl;
    else
        cout << "Not Sorted!" << endl;

    return 0;
}