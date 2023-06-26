#include<bits/stdc++.h>
using namespace std;

void mergeArrays(int *A, int *B, int *C, int n, int m) {
    int i = 0, j = 0, k = 0;

    while (i <= n - 1 && j <= m - 1) {
        if (*(A + i) > *(B + j)) {
            *(C + k++) = *(B + j++);
        } else {
            *(C + k++) = *(A + i++);
        }
    }

    while (i <= n - 1) {
        *(C + k++) = *(A + i++);
    }

    while (j <= m - 1) {
        *(C + k++) = *(B + j++);
    }
}

int main() {
    int n, m;


    cout << "Enter the size of the first array: ";
    cin >> n;

    int A[n];
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> m;

    int B[m];
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }

    int mergedSize = n + m;

    int C[mergedSize];

    mergeArrays(A, B, C, n, m);

    cout << "The merged array is: ";
    for (int i = 0; i < mergedSize; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}
