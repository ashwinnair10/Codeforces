#include<stdio.h>
int main(){
    long long n,m,a;
    scanf("%lld %lld %lld",&n,&m,&a);
    long long k=n%a?n/a +1:n/a;
    long long l=m%a?m/a +1:m/a;
    printf("%lld",k*l);
    return 0;
}