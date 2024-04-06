#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct node {
    long long k;
    int check;
    int height;
    struct node *left;
    struct node *right;
};
typedef struct node* node;
node create(long long k, int c) {
    node temp = (node)malloc(sizeof(struct node));
    temp->k = k;
    temp->check = c;
    temp->height = 1;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
int height(node n) {
    if (n == NULL)
        return 0;
    return n->height;
}
int get_balance(node n) {
    if (n == NULL)
        return 0;
    return height(n->left) - height(n->right);
}
void update_height(node n) {
    if (n == NULL)
        return;
    n->height = 1 + fmax(height(n->left), height(n->right));
}
node rotate_right(node y) {
    node x = y->left;
    node T2 = x->right;
    x->right = y;
    y->left = T2;
    update_height(y);
    update_height(x);
    return x;
}
node rotate_left(node x) {
    node y = x->right;
    node T2 = y->left;
    y->left = x;
    x->right = T2;
    update_height(x);
    update_height(y);
    return y;
}
node insert(node head, long long k, int c) {
    if (head == NULL)
        return create(k, c);    
    if (k < head->k)
        head->left = insert(head->left, k, c);
    else if (k > head->k)
        head->right = insert(head->right, k, c);
    else
        return head;
    update_height(head);
    int balance = get_balance(head);
    if (balance > 1 && k < head->left->k)
        return rotate_right(head);
    if (balance < -1 && k > head->right->k)
        return rotate_left(head);
    if (balance > 1 && k > head->left->k) {
        head->left = rotate_left(head->left);
        return rotate_right(head);
    }
    if (balance < -1 && k < head->right->k) {
        head->right = rotate_right(head->right);
        return rotate_left(head);
    }
    return head;
}
node search(node head, long long k) {
    if (head == NULL || head->k == k)
        return head;
    if (k < head->k)
        return search(head->left, k);
    else
        return search(head->right, k);
}
int is_perfect_square(long long n) {
    long long root = sqrt(n);
    return root * root == n;
}
node check(long long a, node head) {
    node temp = search(head, a);
    if (temp != NULL) {
        if (temp->check == 1)
            printf("YES\n");
        if (temp->check == -1)
            printf("NO\n");
        return head;
    }
    if (!is_perfect_square(a) || a == 1) {
        head = insert(head, a, -1);
        printf("NO\n");
    } else {
        long long b = sqrt(a);
        long long c = 0;
        for (long long i = 1; i * i <= b; i++) {
            if (!(b % i))
                c++;
        }
        if (c == 1) {
            head = insert(head, a, 1);
            printf("YES\n");
        } else {
            head = insert(head, a, -1);
            printf("NO\n");
        }
    }
    return head;
}
void inorder(node head) {
    if (head != NULL) {
        inorder(head->left);
        printf("%lld ", head->k);
        inorder(head->right);
    }
}
int main() {
    node head = NULL;
    int n;
    scanf("%d", &n);
    long long a;
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a);
        head = check(a, head);
    }
    return 0;
}
