#include <iostream>
using namespace std;
int main() {
    cout<<"23cs010";
    int arr[] = {2, 3, 6, 8, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
    }
    cout <<endl;

    return 0;
}
