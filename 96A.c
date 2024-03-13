#include<stdio.h>
#include<string.h>
int main(){
    char s[101];
    scanf("%s",s);
    char a=s[0],c=1,flag=0;
    for(int i=1;i<strlen(s);i++){
        if(c>=7){
            flag=1;
            break;
        }
        if(a==s[i])
        c++;
        else{
            c=1;
            a=s[i];
        }
    }
    if(flag||c>=7)
    printf("YES");
    else
    printf("NO");
    return 0;
}