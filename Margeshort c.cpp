#include<bits/stdc++.h>
using namespace std;


     void Merge(int* arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr [ mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            //arr [ k++] = L[i++];
            arr[k]=L[i];
            k++; i++;

        } else {
            //arr[ k++] = R[j++];
            arr[k]=R[j];
            k++; j++;
        }

    }

    while (i < n1) {
        arr [ k++] = L[i++];


    }

    while (j < n2) {
        arr [k++] = R[j++];

    }

   // delete[] L;
   // delete[] R;
}




   void MergeSort(int *arr, int left, int right){

     if (left < right) {
        int mid = left + (right-left) / 2;//(right - left) can be written as only 'right'.
        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);
        Merge(arr, left, mid, right);
    }
   }
   void printList(int* arr, int n){

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;


   }


    int main(){
        srand(time(0));

       //int arr[] = {12, 11, 13, 5, 6, 7};
           //int n = sizeof(arr) / sizeof(arr[0]);
          int n=100;
           int *arr= new int[n];
           for(int i=0; i<n;i++){

            arr[i]=(rand()%1000);
           }


    cout << "Original array: ";
  printList(arr,n);
    MergeSort(arr, 0, n - 1);
   cout<<"---------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout << "Sorted array: ";
     printList(arr,n);



    return 0;
    }
