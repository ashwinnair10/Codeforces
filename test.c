#include<stdio.h>
int main(){
    int a[100000];
    for(int i=0;i<100000;i++)
    a[i]=100000-i;
    for(int i=0;i<100000;i++)
    for(int j=0;j<100000;j++)
    if(a[i]>a[j]){
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    printf("hi");
}