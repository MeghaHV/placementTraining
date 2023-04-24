#include <stdio.h>
void cross(int[],int);
int main(){
    int v[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      scanf("%d",&v[i]);  
    }
    cross(v,n);
}
    
    void cross(int v[],int n){
        int temp;
        int lp=0;
    int rp=n-1;
    while(lp<=rp){
        if(v[lp]>0 && v[rp]>0){
            rp--;
        }
        else if(v[lp]<0 && v[rp]<0){
            lp++;
        }
        else if(v[lp]>0 && v[rp]<0){
            temp=v[lp];
            v[lp]=v[rp];
            v[rp]=temp;
            lp++;
            rp--;
        }
        else if(v[lp]<0 && v[rp]>0){
        lp++;
        rp--;
        }
    }
    for(int i=0;i<n;i++){
      printf("%d ",v[i]);  
    }
    return 0;
    }
