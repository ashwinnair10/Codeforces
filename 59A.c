#include<stdio.h>
#include<string.h>
int main(){
    char s[101];
    int l=0,u=0;
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]>=65&&s[i]<=90)
        u++;
        if(s[i]>=97&&s[i]<=122)
        l++;
    }
    if(l>=u){
        for(int i=0;i<strlen(s);i++){
            if(s[i]>=65&&s[i]<=90)
            s[i]+=32;
        }
    }
    else{
        for(int i=0;i<strlen(s);i++){
            if(s[i]>=97&&s[i]<=122)
            s[i]-=32;
        }
    }
    printf("%s",s);
    return 0;
}