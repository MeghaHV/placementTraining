#include <stdio.h>
#include<stdlib.h>
int compare(const void *aa,const void*bb){
  int n1=*(int*)aa;
  int n2=*(int*)bb;
  return n2-n1; //n1-n2 for ascen
}
int main(){
  int a[]={1,7,4,5,3};
  int v;
  qsort(a,5,sizeof(int),compare);
  for(int i=0;i<5;i++){
    printf("%d ",a[i]);
  }
  scanf("\n%d ",&v);
  printf("%d",a[v-1]);
  return 0;
}
