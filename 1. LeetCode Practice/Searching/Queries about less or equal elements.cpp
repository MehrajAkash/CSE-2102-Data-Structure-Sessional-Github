#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];

    sort(a, a+n);

    int a2[m];
    for(int i=0; i<m; i++)cin>>a2[i];


    for(int i=0; i<m; i++){
        cout<< upper_bound(a, a+n, a2[i]) -a <<" ";
    }
    cout<<endl;


 return 0;
}
