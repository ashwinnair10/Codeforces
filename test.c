#include <stdio.h>
int max(int a,int b){
    return(a>b)?a:b;
}
int main(){
    int n, i;
    int a[100000]={0};
    int dp[100000]={0};
    scanf("%d",&n);
    for (i=0;i<n;++i){
        int num;
        scanf("%d", &num);
        a[num]++;
    }
    dp[0]=0;
    dp[1]=a[1];
    for(i=2;i<=100000;++i)
        dp[i]=max(dp[i-1],dp[i-2]+i*a[i]);
    printf("%d\n", dp[100000-1]);
    return 0;
}
