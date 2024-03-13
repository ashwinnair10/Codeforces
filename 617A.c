#include<stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    for(int i=5;n>0;i--){
        c+=n/i;
        n-=i*(n/i);
    }
    printf("%d",c);
    return 0;
}