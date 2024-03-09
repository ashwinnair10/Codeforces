#include<stdio.h>
#include<string.h>
void tolowercase(char s[]){
    for(int i=0;i<strlen(s);i++){
        if(s[i]>=65&&s[i]<=90)
        s[i]+=32;
    }
}
int main(){
    char s1[101],s2[101];
    scanf("%s %s",s1,s2);
    tolowercase(s1);
    tolowercase(s2);
    int c=0;
    for(int i=0;i<strlen(s1);i++){
        if(s1[i]<s2[i]){
            c--;
            break;
        }
        if(s1[i]>s2[i]){
            c++;
            break;
        }
    }
    printf("%d",c);
    return 0;
}