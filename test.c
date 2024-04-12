#include <stdio.h>
#include<stdlib.h>
int compare(const void* a, const void* b)
{
    if(*(long long int*)a - *(long long int*)b < 0)
        return -1;
    if(*(long long int*)a - *(long long int*)b == 0)
        return 0;
    if(*(long long int*)a - *(long long int*)b > 0)
        return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,c,d;
        scanf("%d %d %d",&n,&c,&d);
        long long a[n*n];
        for(int i=0;i<n*n;i++)
        scanf("%lld",&a[i]);
        qsort(a,n*n,sizeof(long long int),compare);
        long long mat[n][n];
        long long b[n*n];
        for(int i=0;i<n;i++){
            if(i==0)
            mat[i][0]=a[0];
            else
            mat[i][0]=mat[i-1][0]+c;
        }
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                mat[i][j]=mat[i][j-1]+d;
            }
        }
        int k=0;
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        b[k++]=mat[i][j];
        qsort(b,n*n,sizeof(long long int),compare);
        int flag=0;
        // for(int i=0;i<n;i++){
        // for(int j=0;j<n;j++){
        //     printf("%lld ",mat[i][j]);
        // }
        // printf("\n");
        // }
        // printf("a:");
        // for(int i=0;i<n*n;i++)
        // printf("%lld ",a[i]);
        // printf("\n");
        // printf("b:");
        // for(int i=0;i<n*n;i++)
        // printf("%lld ",b[i]);
        // printf("\n");
        for(int i=0;i<n*n;i++){
            if(a[i]!=b[i]){
                flag=1;
                break;
            }
        }
        if(!flag)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}