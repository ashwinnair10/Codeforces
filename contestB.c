#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        k--;
        long long a[n];
        for(int i=0;i<n;i++)
        scanf("%lld",&a[i]);
        int maxpos=-1;
        for(int i=0;i<n;i++){
            if(a[i]>a[k]){
                maxpos=i;
                break;
            }
        }
        if(maxpos==-1)
        printf("%d\n",n-1);
        else if(maxpos>k)
        printf("%d\n",maxpos-1);
        else{
            int nxt=-1;
            for(int i=maxpos+1;i<k;i++)
            if(a[i]>a[k]){
                nxt=i;
                break;
            }
            if(nxt==-1)
            nxt=k;
            int lhs=0,rhs=0;
            lhs=maxpos>=1?maxpos-1:0;
            rhs=nxt-maxpos;
            if(nxt==maxpos+1)
            rhs--;
            if(maxpos==0)
            rhs--;
            if(lhs>rhs)
            printf("%d\n",lhs);
            else
            printf("%d\n",rhs);
        }
    }
    return 0;
}