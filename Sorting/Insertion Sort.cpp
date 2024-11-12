#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void insertionSort(int arr[],int n){

    for(int step=1; step<n; step++){
        int key = arr[step];
        int j = step - 1;

        while(j>=0 && key<arr[j]){
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
}

int main(){
    int arr[] = {9,5,1,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    printArray(arr,n);

return 0;
}
