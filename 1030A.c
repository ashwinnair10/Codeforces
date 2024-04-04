#include<stdio.h>
int main(){
    int n,flag=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==1)
        flag=1;
    }
    if(flag)
    printf("HARD");
    else
    printf("EASY");
    return 0;
}