#include <stdio.h>
int result(int[],int,int);
int main(){
  int a,b,c[100],d,i,r[100],temp;
  scanf("%d",&a);
  temp=a;
  while(a!=0){
  scanf("%d",&b);
  for(i=0;i<b;i++){
    scanf("%d",&c[i]);
  }
   scanf("%d",&d); 
    r[a-1]=result(c,d,b);
    a--;
  } 
  for(i=temp;i>0;i--){
  printf("%d\n",r[i]);
}
}
int result(int c[],int d,int b){
  int flag=0;
  for(int i=0;i<b;i++){
    
  if(c[i]==d){
    return i;
    flag=1;
  }
  }
  if(flag==0)
      return -1;
}
