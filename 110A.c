#include<stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    long long c=0,flag=0;
    while(n>0){
        if(n%10==4||n%10==7)
        c++;
        n/=10;
    }
    int d=c;
    while(c>0){
        if(c%10!=4&&c%10!=7)
        flag=1;
        c/=10;
    }
    if(flag||d==0)
    printf("NO");
    else
    printf("YES");
    return 0;
}