#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t>0){
        char str[102];
        gets(str);
        int n=strlen(str);
        if(n<10)
        puts(str);
        else
        printf("%c%d%c",str[0],n-2,str[n-1]);
        printf("\n");
        t--;
    }
    return 0;
}