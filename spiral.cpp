#include <bits/stdc++.h>
using namespace std;

int main() {
  int r,c;
  
  int a[50][50],b[50][50];
  cin>>r;
  cin>>c;
  int sr=0,sc=0,er=r-1,ec=c-1;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin>>a[i][j];
    }
  }
  while(sr<=er && sc<=ec){
    for(int j=sc;j<=ec;j++){
      cout<<a[sr][j]<<" ";
    }
  sr++;
  for(int i=sr;i<=er;i++){
    cout<<a[i][ec]<<" ";
  }
  ec--;
  for(int j=ec;j>=sc;j--){
    cout<<a[er][j]<<" ";
  }
  er--;
  for(int i=er;i>=sr;i--){
    cout<<a[i][sc]<<" ";
  }
  sc++;
}
}
