#include<iostream>
using namespace std;
 int main(){
  int arr[] = {8,-1,9,2,4};
  int size = 5;

  for(int k=0; k<size-1; k++){

     for(int i=0;i<size-1-k;i++){
       if(arr[i+1] < arr[i]){
           int temp;
           temp = arr[i];
           arr[i] = arr[i+1];
           arr[i+1]=temp;
       }
    }

    for(int m=0;m<5;m++)
    cout<<arr[m]<<" ";

     cout<<endl;
  }





   return 0;
}
