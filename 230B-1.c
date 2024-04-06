#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int bs(int a[],int k,int l,int r){
    while(l>r){
        int m=(l+r)/2;
        if(a[m]==k)
        return m;
        else if(k<a[m])
        r=m-1;
        else
        l=m+1;
    }
    return -1;
}
int main(){
    int pri[1000000];
    int prime[1000000],j=0;
    for(int i=0;i<1000000;i++)
    pri[i]=1;
    for(int p=2;p*p<=1000000;p++){
        if (pri[p]==1){
            prime[j++]=p;
            for (int i=p*p;i<=1000000;i+=p)
                pri[i]=0;
        }
    }
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        int b=sqrt(a);
        if(b*b==a){
            int k=bs(prime,b,0,j-1);
            if(k==-1)
            printf("NO\n");
            else
            printf("YES\n");
        }
        else
        printf("NO\n");
    }
    return 0;
}