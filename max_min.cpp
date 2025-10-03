#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}

int findMin(int arr[], int n) {
    int minVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal)
            minVal = arr[i];
    }
    return minVal;
}

int main() {
    int s, i, c;
    cout << "Enter size of array: ";
    cin >> s;

    int arr[100];  // fixed size for safety
    cout << "Enter elements of array: ";
    for (i = 0; i < s; i++) {
        cin >> arr[i];
    }

    cout << "1. Maximum element of array" << endl;
    cout << "2. Minimum element of array" << endl;
    cout<<"3. Both"<<endl;
    cout << "Choose: ";
    cin >> c;

    switch (c) {
        case 1:
            cout << "Maximum = " << findMax(arr, s) << endl;
            break;
        case 2:
            cout << "Minimum = " << findMin(arr, s) << endl;
            break;
        case 3:
            cout << "Maximum = " << findMax(arr, s) << endl;
            cout << "Minimum = " << findMin(arr, s) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
