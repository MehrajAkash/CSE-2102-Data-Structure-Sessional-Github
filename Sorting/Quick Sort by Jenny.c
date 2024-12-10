#include<stdio.h>

void print(int arr[],int n){
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b=temp;
}

int partition(int arr[],int lb,int ub){
    int pivot = arr[lb];
    int start = lb;
    int end = ub;

    while(start<end){
        while(pivot <= arr[start]){
            start++;
        }
        while(pivot > arr[end]){
            end--;
        }
        if(start < end){
            swap(&arr[start],&arr[end]);
        }
    }
    swap(&arr[lb],&arr[end]);

    return end;
}

void quickSort(int arr[],int lb,int ub){
    if(lb < ub){
       int loc = partition(arr,lb,ub);
        quickSort(arr,lb,loc-1);
        quickSort(arr,loc+1,ub);
    }
}

int main(){

    int arr[9] = {7,6,10,5,9,2,1,15,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,size);
    print(arr,size);




return 0;
}
