#include <iostream>
#include <climits>
using namespace std;

int secLargest(int arr[], int n) {
    if (n < 2)
        return -1;

    int large = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > large) {
            secondLargest = large;
            large = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != large) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
        return -1;
    else
        return secondLargest;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = secLargest(arr, n);

    if (result != -1)
        cout << "Second largest element is: " << result << endl;
    else
        cout << "No second largest element found." << endl;

    return 0;
}
