#include<stdio.h>
int main(){
    int n,hash[3]={0,0,0};
    scanf("%d",&n);
    while(n>0){
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        hash[0]+=x,hash[1]+=y,hash[2]+=z;
        n--;
    }
    if(hash[0]==0&&hash[1]==0&&hash[2]==0)
    printf("YES");
    else
    printf("NO");
    return 0;
}