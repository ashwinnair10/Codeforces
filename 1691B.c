#include<stdio.h>
#include<stdlib.h>
struct node{
    long long k;
    int freq;
    struct node* left;
    struct node* right;
};
typedef struct node* node;
node create(int k){
    node temp=(node)malloc(sizeof(struct node));
    temp->k=k;
    temp->freq=1;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
node leftrotate(node head){
    node temp=head->right;
    head->right=temp->left;
    temp->left=head;
    return temp;
}
node rightrotate(node head){
    node temp=head->left;
    head->left=temp->right;
    temp->right=head;
    return head;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        long long a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
    }
    return 0;
}