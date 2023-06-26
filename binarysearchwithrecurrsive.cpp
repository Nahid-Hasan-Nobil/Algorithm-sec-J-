#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *A, int low, int high, int x) {
    if (low > high) {
        return -1;
    }

    int mid = (low + high) / 2;

    if (x == *(A + mid)) {
        return mid;
    } else if (x < *(A + mid)) {
        return binarySearch(A, low, mid - 1, x);
    } else {
        return binarySearch(A, mid + 1, high, x);
    }
}

int main() {
    int n;


    cout << "Enter the size of the array: ";
    cin >> n;

    int A[n];
    cout << "Enter the elements of the sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int x;

    cout << "Enter the element to search for: ";
    cin >> x;

    int index = binarySearch(A, 0, n - 1, x);

    if (index != -1) {
        cout << "Element found at index " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
