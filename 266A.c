#include<stdio.h>
#include<string.h>
int main(){
    int c=0,i=0,n;
    scanf("%d",&n);
    getchar();
    char s[n];
    gets(s);
    while(i<n){
        char ch=s[i];
        while(s[i+1]==ch){
            c++;
            i++;
        }
        i++;
    }
    printf("%d",c);
    return 0;
}