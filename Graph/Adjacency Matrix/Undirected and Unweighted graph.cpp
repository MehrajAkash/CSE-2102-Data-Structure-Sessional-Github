/// representation of undirected and unweighted graph
#include<bits/stdc++.h>
using namespace std;

void addEdge( vector<vector<int>> &mat, int i, int j ){
    mat[i][j] = 1;
    mat[j][i] = 1;
}

void displayMatrix(vector<vector<int> > &mat){
   for(int i=0; i<mat.size(); i++){
    for(int j=0; j<mat.size(); j++)
        cout<<mat[i][j]<<" ";
    cout<<endl;
   }
}

int main(){

 int v=4;
 vector< vector<int> > mat( v, vector<int>(v,0) );

 addEdge(mat, 0, 1);
 addEdge(mat, 0, 2);
 addEdge(mat, 1, 2);
 addEdge(mat, 2, 3);

 displayMatrix(mat);


return 0;
}

/**
output:
0 1 1 0
1 0 1 0
1 1 0 1
0 0 1 0

**/
