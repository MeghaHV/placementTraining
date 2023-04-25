#include <bits/stdc++.h>
using namespace std;

int main() {
int a[50],n,s,l,b[50];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n-1;i++){
      b[i]=a[i]+a[i+1];
  }
  for(int i=0;i<n-1;i++){
      cout<<" "<<b[i];
  }
  
  int max=b[0];
  for(int i=0;i<n-1;i++){
    if(max<b[i]){
      max=b[i];
    }
  }
  cout<<"\n"<<max;
}
