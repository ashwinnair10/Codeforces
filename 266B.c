#include<stdio.h>
#include<string.h>
int main(){
    int n,t;
    scanf("%d %d",&n,&t);
    char s[n+1];
    scanf("%s",s);
    while(t>0){
        for(int i=0;i<strlen(s);i++){
            if(s[i]=='B'&&s[i+1]=='G'){
                s[i]='G';
                s[i+1]='B';
                i=i+1;
            }
        }
        t--;
    }
    printf("%s",s);
    return 0;
}