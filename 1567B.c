#include<stdio.h>
int xor(int n){
    if(n%4==0)
    return n;
    if(n%4==1)
    return 1;
    if(n%4==2)
    return n+1;
    return 0;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        int a,b,s=0,c=0;
        scanf("%d %d",&a,&b);
        c=a;
        s=xor(a-1);
        if((s^a)==b)
        c+=2;
        else if(s!=b)
        c++;
        printf("%d\n",c);
        t--;
    }
}