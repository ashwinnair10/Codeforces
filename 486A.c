#include<stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    n=n%2?-((n/2)+1):n/2;
    printf("%lld",n);
    return 0;
}