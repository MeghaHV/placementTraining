#include <stdio.h>
int main(){
  int a,b,c[100],i,temp;
  scanf("%d",&b);
  for(i=0;i<b;i++){
    scanf("%d",&c[i]);
  }
scanf("%d",&a);

  temp=c[a-1];
  c[a-1]=c[b-a];
    c[b-a]=temp;

  for(i=0;i<b;i++){
  printf("%d ",c[i]);
  }
}
