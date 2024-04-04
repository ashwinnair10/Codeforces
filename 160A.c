#include<stdio.h>
int main(){
    int n,c=0,s=0,max=-1,sum=0,flag=0;
    scanf("%d",&n);
    int a[n],hash[101];
    for(int i=0;i<101;i++)
    hash[i]=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        hash[a[i]]++;
        if(a[i]>max)
        max=a[i];
        s+=a[i];
    }
    for(int i=max;i>=0;i--){
        if(hash[i]!=0){
            while(hash[i]!=0){
                sum+=i;
                c++;
                if(sum>s/2){
                    flag=1;
                    break;
                }
                hash[i]--;
            }
            if(flag)
            break;
        }
    }
    printf("%d",c);
    return 0;
}