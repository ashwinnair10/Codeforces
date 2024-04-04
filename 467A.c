#include<stdio.h>
int main(){
    int a,b,n,c=0;
    scanf("%d",&n);
    while(n>0){
        scanf("%d %d",&a,&b);
        if(b-a>=2)
        c++;
        n--;
    }
    printf("%d",c);
    return 0;
}