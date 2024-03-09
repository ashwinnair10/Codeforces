#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%s",s);
    int a[3]={0,0,0};
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='1')
        a[0]++;
        if(s[i]=='2')
        a[1]++;
        if(s[i]=='3')
        a[2]++;
    }
    int j=0;
    while(j<3){
        if(a[j]==0){
            j++;
            continue;
        }
        if(a[j]!=0&&j<3){
            printf("%d",j+1);
            a[j]--;
        }
        if(a[0]+a[1]+a[2]>0)
        printf("+");
    }
    return 0;
}