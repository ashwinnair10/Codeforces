#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[300001];
        scanf("%s",s);
        int n=strlen(s);
        char x='0';
        for(int i=0;i<n;i++){
            if(s[i]=='?')
            s[i]=x;
            x=s[i];
        }
        printf("%s\n",s);
    }
    return 0;
}