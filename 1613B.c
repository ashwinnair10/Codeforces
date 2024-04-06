#include<stdio.h>
#include<stdlib.h>
void init(int hash[]){
    for(int i=0;i<1000000;i++)
    hash[i]=0;
}
int cmp(const void* a,const void* b){
   return(*(int*)a-*(int*)b);
}
int main(){
    int hash[1000000]={0};
    int t;
    scanf("%d",&t);
    while(t--){
        int n,c=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            hash[a[i]]=1;
        }
        qsort(a,n,sizeof(int),cmp);
        for(int i=1;i<n;i++){
            printf("%d %d\n",a[i],a[0]);
            c++;
            if(c==n/2)
            break;
        }
        for(int i=0;i<n;i++)
        hash[a[i]]=0;
    }
}