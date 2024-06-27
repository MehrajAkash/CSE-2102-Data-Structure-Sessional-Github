#include<iostream>
#include<stdbool.h>
using namespace std;
int main(){
int arr[]={1,56,3,0,44,66,76};
int n = sizeof(arr)/sizeof(arr[0]);

for(int i=0;i<n-1;i++){
    bool swapped = false;
    for(int j=i+1;j<n;j++){

        if(arr[i]>arr[j]){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            swapped = true;
        }
    }
if(!swapped){ break;}

    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
     }
     cout<<"\n";
}
cout<<"\n After sorting \n";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }

return 0;
}
