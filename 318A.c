#include<stdio.h>
int main(){
    long long n,k;
    scanf("%lld %lld",&n,&k);
    long long l=n%2?n/2+1:n/2;
    if(k<=l)
    printf("%lld",2*k-1);
    else
    printf("%lld",2*(k-l));
    return 0;
}