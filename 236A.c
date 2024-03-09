#include<stdio.h>
#include<string.h>
int check(int a[]){
    int c=0;
    for(int i=0;i<26;i++){
        if(a[i]!=0)
        c++;
    }
    return c%2;
}
int main(){
    int a[26];
    for(int i=0;i<26;i++)
    a[i]=0;
    char s[102];
    gets(s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]>=65&&s[i]<=90)
        a[s[i]-65]++;
        if(s[i]>=97&&s[i]<=122)
        a[s[i]-97]++;
    }
    if(check(a))
    printf("IGNORE HIM!");
    else printf("CHAT WITH HER!");
    return 0;
}