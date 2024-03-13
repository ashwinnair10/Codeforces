#include <stdio.h>
#include<string.h>
int main()
{
    char s1[102],s2[102];
    int flag=0;
    scanf("%s",s1);
    getchar();
    scanf("%s",s2);
    if(strlen(s1)==strlen(s2)){
        for(int i=0;i<strlen(s1);i++){
            if(s1[i]!=s2[strlen(s1)-i-1]){
                flag=1;
                break;
            }
        }
    }
    if(flag||strlen(s1)!=strlen(s2))
    printf("NO");
    else
    printf("YES");
    return 0;
}