#include<stdio.h>
int main(){
    int k,n,w;
    scanf("%d %d %d",&k,&n,&w);
    int s=k*w*(w+1)/2;
    if(s-n>=0)
    printf("%d",s-n);
    else
    printf("0");
    return 0;
}