#include<bits/stdc++.h>
using namespace std;
void swapp( int *a, int *b ){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(vector<int>&arr, int n, int i){
    int largest = i;
    int left = 2*i +1;
    int right = 2*i +2;

    if(left<n && arr[left] > arr[largest]){
        largest = left;
    }
    if(right<n && arr[right] > arr[largest]){
        largest = right;
    }
    if(largest != i){
        swapp(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }

}

void heapSort(vector<int>& arr){
    int n = arr.size();
    /// building max heap
    for(int i=n/2 -1; i>=0; i--){
        heapify(arr, n, i);
    }

    for(int i=n-1; i>=0; i-- ){
        swapp(&arr[0], &arr[i]);
        /// swap(arr[0], arr[i];
        heapify( arr, i, 0 );
    }
}

void printArray(vector<int>&arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    vector<int> arr = { 9, 4, 3, 8, 10, 2, 5 };

    heapSort(arr);

    cout<<"Sorted Array is : "<<endl;
    printArray(arr);

}
