#include<stdio.h>
#include<stdlib.h>
int cmpfunc(const void* a,const void* b){
   return (*(int*)a-*(int*)b);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t){
        int n,c=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        qsort(a,n,sizeof(int),cmpfunc);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                
            }
        }
        t--;
    }
}