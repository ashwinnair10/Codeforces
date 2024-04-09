#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char ch[n+1];
        scanf("%s",ch);
        int c=0;
        for(int i=0;i<n;i++)
        if(ch[i]=='1')
        c++;
        if(c==2){
            int f=0;
            for(int i=0;i<n-1;i++){
                if(ch[i]=='1'&&ch[i+1]=='1')
                f++;
            }
            if(f)
            printf("NO\n");
            else
            printf("YES\n");
        }
        if(c%2)
        printf("NO\n");
        else
        printf("YES\n");
    }
    return 0;
}