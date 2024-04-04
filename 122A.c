#include<stdio.h>
int main(){
    int lucky[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int n,flag=0;
    scanf("%d",&n);
    for(int i=0;i<14;i++){
        if(n%lucky[i]==0){
            flag=1;
            break;
        }
    }
    if(flag)
    printf("YES");
    else
    printf("NO");
    return 0;
}