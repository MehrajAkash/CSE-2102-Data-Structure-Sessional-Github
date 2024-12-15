#include<bits/stdc++.h>
using namespace std;

vector<int> radixSort(vector<int>& inputArray){

      int isz = inputArray.size();
      int MaxV;
      for(int i=0;i<isz; i++) MaxV = max(MaxV, inputArray[i]);

    vector<int> outputArray(isz);
    outputArray = inputArray;

    int div=1;

    for(int j=1; MaxV/j > 0; j=j*10 ){

        vector<int>tempArray = outputArray;
        vector<int> countArray(10, 0);


        for(int i=0; i<isz ; i++){
            countArray[ (tempArray[i]/div)% 10 ]++;
           /// inputArray[i]/10;
        }

        for(int i=1; i<10; i++)
            countArray[i] += countArray[i-1];


        for(int i=isz-1; i>=0; i--){
            outputArray[ --countArray[ (tempArray[i]/div)%10 ] ] = tempArray[i];
          // tempArray[i] = tempArray[i]/(10*div);
        }

         div = div*10;

        cout<<"inCount Sort: "<<endl;
        for(int i=0; i<tempArray.size(); i++){
             cout<< outputArray[i] <<" ";

        }

            cout<<endl;
    }


    return outputArray;

}


int main(){
 vector<int>inputArray = {97,57, 208, 699, 125, 734};

  vector<int>outputArray = radixSort(inputArray);

  cout<<"main: "<<endl;
  for(int i=0; i<inputArray.size(); i++)
    cout<< outputArray[i] <<" ";


}

