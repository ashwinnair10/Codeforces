#include<stdio.h>
#include<stdlib.h>
int flag=0;
struct node{
    long long k;
    int freq;
    int *index;
    int top;
    struct node* left;
    struct node* right;
};
typedef struct node* node;
node create(int k){
    node temp=(node)malloc(sizeof(struct node));
    temp->k=k;
    temp->freq=1;
    temp->index=malloc(sizeof(int*));
    temp->top=0;
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
int max(int a,int b){
    return a>b?a:b;
}
int height(node head){
    if(head==NULL)
    return 0;
    return max(height(head->left),height(head->right))+1;
}
node insert(node head,int k,int i){
    if(head==NULL){
        node temp=create(k);
        temp->index[temp->top]=i;
        (temp->top)++;
        return temp;
    }
    else if(k==head->k){
        head->freq++;
        head->index[head->top]=i;
        (head->top)++;
    }
    else if(k<head->k)
    head->left=insert(head->left,k,i);
    else
    head->right=insert(head->right,k,i);
    int bal=height(head->left)-height(head->right);
    if(bal>1&&k<head->left->k){
        return rightrotate(head);
    }
    if(bal>1&&k>head->left->k){
        head->left=leftrotate(head->left);
        return rightrotate(head);
    }
    if(bal<-1&&k>head->right->k){
        return leftrotate(head);
    }
    if(bal<-1&&k<head->right->k){
        head->right=rightrotate(head->right);
        return leftrotate(head);
    }
    return head;
}
void inorder(node head){
    if(head!=NULL){
        inorder(head->left);
        if(head->freq==1)
        flag=1;
        //printf("head:%lld freq:%d ,",head->k,head->freq);
        inorder(head->right);
    }
}
void det(node head,int fin[],int n){
    if(head!=NULL){
        det(head->left,fin,n);
        det(head->right,fin,n);
        for(int i=0;i<head->top;i++)
        fin[head->index[i]]=head->index[i-1];
        //printf("f:%d ",head->index[i]);
        fin[head->index[0]]=head->index[head->top-1];
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        node head=NULL;
        scanf("%d",&n);
        long long a[n];
        int fin[n];
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
            head=insert(head,a[i],i);
        }
        inorder(head);
        det(head,fin,n);
        if(flag)
        printf("-1\n");
        else{
            for(int i=0;i<n;i++)
            printf("%d ",fin[i]+1);
            printf("\n");
        }
        free(head);
    }
    return 0;
}