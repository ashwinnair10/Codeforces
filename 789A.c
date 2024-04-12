#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char s[16];
    scanf("%s",s);
    int n=strlen(s),c=0;
    s[n]='\0';
    char rev[16];
    for(int i=0;i<n;i++)
        rev[i]=s[n-i-1];
    rev[n]='\0';
    for(int i=0;i<n;i++)
    if(s[i]!=rev[i])
    c++;
    //printf("%s\n%s\n",s,rev);
    if(c==2||(!c&&n%2))
    printf("YES\n");
    else
    printf("NO\n");
    return 0;
}