#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n ;i++){
        cin>>arr[i];
    }
 sort(arr, arr+n);

  int t;
  cin>>t;

    while(t--){
        int val;
        cin>>val;

        int l=0;
        int r=n-1;
        /// int ans;

       while(l<=r){
          int mid = (l+r)/2;
          if(arr[mid]==val){
             l = mid+1;
          }
          else if(arr[mid]>val){
            r = mid-1;
          }
          else{
            l = mid+1;
          }
       }
     /// cout<< upper_bound(arr, arr+n, val) -arr <<endl;
        cout<<l<<endl;
    }

  return 0;
}
/// https://codeforces.com/group/isP4JMZTix/contest/379072/problem/E

