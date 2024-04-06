#include<stdio.h>
#include<stdlib.h>
long long main(){
    long long t;
    scanf("%lld",&t);
    while(t--){
        long long x,y,k;
        scanf("%lld %lld %lld",&x,&y,&k);
        long long j;
        if((((k*(y+1))-1)%(x-1))==0)
        j=((k*(y+1))-1)/(x-1);
        else
        j=(((k*(y+1))-1)/(x-1))+1;
        printf("%lld\n",k+j);
    }
    return 0;
}