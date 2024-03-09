#include<stdio.h>
int main(){
    int a[5][5],k,l;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==1){
                k=i,l=j;
            }
        }
    }
    k=k>2?k-2:2-k;
    l=l>2?l-2:2-l;
    printf("%d",k+l);
    return 0;
}