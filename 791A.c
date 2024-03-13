#include<stdio.h>
int main(){
    int n=0,a,b;
    scanf("%d %d",&a,&b);
    while(a<=b){
        a*=3;
        b*=2;
        n++;
    }
    printf("%d",n);
    return 0;
}