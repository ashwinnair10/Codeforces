#include<stdio.h>
int main(){
    int n,a=-1,b=-1,c=0;
    char s[3];
    scanf("%d",&n);
    while(n>0){
        scanf("%s",s);
        if(s[0]-48!=a||s[1]-48!=b){
            c++;
            a=s[0]-48,b=s[1]-48;
        }
        n--;
    }
    printf("%d",c);
    return 0;
}