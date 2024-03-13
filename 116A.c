#include<stdio.h>
int main(){
    int n,c=0,max=-1;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    scanf("%d %d",&b[i],&a[i]);
    for(int i=0;i<n;i++){
        c=c+a[i]-b[i];
        if(c>max)
        max=c;
    }
    printf("%d",max);
    return 0;
}