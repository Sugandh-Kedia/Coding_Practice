#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node* left;
    struct node* right;
};


struct node* newNode(int data) {
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}


struct node* insert(struct node* node, int data) {
    
    if (node == NULL) {
        return(newNode(data));
    }
    
    if (data < node->data) {
        node->left = insert(node->left, data);
    } else if (data > node->data) {
        node->right = insert(node->right, data);
    }

    return node;
}
struct node *createBST(struct node *root, int data){
    if(root==NULL){
        struct node *newNode;
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = data;
        newNode->left = newNode->right = NULL;
        return newNode;
    }
    if(data < (root->data))
        root->left = createBST(root->left, data);
    else if(data > (root->data))
        root->right = createBST(root->right, data);
    return root;
}

struct node *searchBST(struct node *root, int data){
    if(root == NULL || root->data == data)
        return root;
    if(data > root->data)
        return searchBST(root->right, data);
    return searchBST(root->left, data);
};

struct node *inorder(struct node *root){
    if(root != NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

struct node *preorder(struct node *root){
    if(root != NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

struct node *postorder(struct node *root){
    if(root != NULL){
        
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}



int main(){
    int x;
    struct node* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("Binary Search Tree:\n");
    printf("    %d\n", root->data);
    printf("%d      %d\n", root->left->data, root->right->data);
    printf("%d %d   %d ", root->left->left->data, root->left->right->data, root->right->left->data);
    printf("%d", root->right->right->data);
    printf("\nEnter the value to be searched: ");
    scanf("%d", &x);
    if(searchBST(root, x) == NULL)
        printf("Value not found in BST\n");
    else
        printf("Value found in BST\n");

    printf("Inorder: ");
    inorder(root);

    printf("\nPreorder: ");
    preorder(root);

    printf("\nPostorder: ");
    postorder(root);

    return 0;
}