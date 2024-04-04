#include<stdio.h>
#include<string.h>
int main(){
    char s[101],hello[]={'h','e','l','l','o'};
    scanf("%s",s);
    int flag=0,j=0;
    for(int i=0;i<strlen(s);i++){
        if(hello[j]==s[i]){
            j++;
            if(j>4){
                flag=1;
                break;
            }
        }
    }
    if(flag)
    printf("YES");
    else
    printf("NO");
    return 0;
}