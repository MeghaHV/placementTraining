#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m;
  int a[50][50],b[50][50];
  scanf("%d",&n);
  scanf("%d",&m);
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      scanf("%d",&a[i][j]);
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      b[i][j]=a[j][i];
     }
  }

  for(int i=0;i<m;i++){
    for(int j=n-1;j>=0;j--){
      printf("%d ",b[i][j]);
     }
  }
  
}
