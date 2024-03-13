#include<stdio.h>
#include<string.h>
int main(){
    int n,a=0,d=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='A')
        a++;
        if(s[i]=='D')
        d++;
    }
    if(a>d)
    printf("Anton");
    if(d>a)
    printf("Danik");
    if(d==a)
    printf("Friendship");
    return 0;
}