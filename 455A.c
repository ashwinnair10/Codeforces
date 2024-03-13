#include<stdio.h>
#include<limits.h>
int main(){
    int n,s1=0,s2=0;
    scanf("%d",&n);
    int arr[n],hash[100000];
    for(int i=0;i<100000;i++)
    hash[i]=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        hash[arr[i]]++;
    }
    for(int i=0;i<100000;i++){
        int j=i;
        while(hash[i]!=0){
            i++;
        }
        i--;
        for(int k=i;k>=j;k--){
            if(hash[k]*k>hash[k+1]*(k+1)&&hash[k]*k>hash[k-1]*(k-1)){
                s1+=hash[k]*k;
                hash[k-1]=-1;
                hash[k+1]=-1;
                k--;
            }
        }
        for(int k=j;k<=i;k++){
            if(hash[k]*k>hash[k+1]*(k+1)&&hash[k]*k>hash[k-1]*(k-1)){
                s2+=hash[k]*k;
                hash[k-1]=-1;
                hash[k+1]=-1;
                k++;
            }
        }
        i++;
    }
    int s=s1>s2?s1:s2;
    printf("%d\n",s1);
    printf("%d",s2);
    return 0;
}