#include<stdio.h>
int main(){
    int n,x=0;
    scanf("%d",&n);
    while(n>0){
        char str[4];
        scanf("%s",str);
        for(int i=0;i<4;i++){
            if(str[i]=='+'&&str[i+1]=='+'){
                x++;
                break;
            }
            if(str[i]='-'&&str[i+1]=='-'){
                x--;
                break;
            }
        }
        n--;
    }
    printf("%d",x);
    return 0;
}