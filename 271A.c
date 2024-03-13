#include<stdio.h>
int main(){
    int n,i,c=0,max;
    scanf("%d",&n);
    for(i=n+1;;i=max+1){
        int hash[10]={0,0,0,0,0,0,0,0,0,0},flag=0;
        max=i;
        while(i>0){
            if(hash[i%10]!=0){
                flag=1;
                break;
            }
            hash[i%10]++;
            i/=10;
        }
        if(!flag)
        break;
    }
    printf("%d",max);
    return 0;
}