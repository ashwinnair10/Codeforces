#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int search(char a[][100],char name[],int n){
    for(int i=0;i<n;i++){
        char nm[100];
        if(strcmp(a[i],name)==0)
        return i;
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    char a[n][100];
    int c[n];
    for(int i=0;i<n;i++)
    c[i]=0;
    char name[100];
    for(int i=0;i<n;i++){
        scanf(" %s",name);
        if(search(a,name,i)==-1){
            printf("OK\n");
            strcpy(a[i],name);
        }
        else
        printf("%s%d\n",name,++c[search(a,name,i)]);
    }
    return 0;
}