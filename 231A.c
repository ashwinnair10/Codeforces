#include<stdio.h>
int check(int a[]){
    int c=0;
    for(int i=0;i<3;i++)
    if(a[i]==1)
    c++;
    if(c>=2)
    return 1;
    return 0;
}
int main(){
    int n,c=0;
    scanf("%d",&n);
    while(n>0){
        int a[3];
        for(int i=0;i<3;i++)
        scanf("%d",&a[i]);
        if(check(a))
        c++;
        n--;
    }
    printf("%d",c);
    return 0;
}