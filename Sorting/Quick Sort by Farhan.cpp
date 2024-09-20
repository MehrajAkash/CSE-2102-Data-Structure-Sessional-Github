#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

void swap(int *p,int *q){
    int temp = *p;
        *p = *q;
        *q = temp;
}

int partition(int arr[],int l,int h){
    int pivot=arr[l];
    int i=l,j=h;

    while(i<j){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j)
        {
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[l],&arr[j]);

    return j;
}


void quicksort(int arr[],int l,int h){
    if(l<h){
       int j=partition(arr,l,h);
        quicksort(arr,l,j-1);
        quicksort(arr,j+1,h);
    }
}


int main(){
int arr[]={9,4,3,11,15,20,2,24,30,1,35};
int n=sizeof(arr)/sizeof(arr[0]);

quicksort(arr,0,n-1);

print(arr,n);

return 0;
}
