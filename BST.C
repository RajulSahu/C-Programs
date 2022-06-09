#include<stdio.h>
#include<malloc.h>


typedef struct BSTree {
    int data;
    struct BSTree *right;
    struct BSTree *left;
} node;


node* createNode(int data){
    node *temp;
    temp = (node *)(malloc(sizeof(node)));
    temp -> left = NULL;
    temp -> right = NULL;
    temp -> data = data;
    
    return temp;
}


void preOrder(node *root){
    if(root != NULL){
        printf("%d ", root -> data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(node *root){
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root -> data);
    }
}

void inOrder(node *root){
    if(root != NULL){
        inOrder(root->left);
        printf("%d ", root -> data);
        inOrder(root->right);
    }
}

void insertNode(node **root, int data){
    if(*root == NULL){
        node *newNode = createNode(data);
        *root = newNode;
        return;
    }
    node *prev = NULL, *iter = *root;
    while(iter != NULL){
        prev = iter;
        if(data < iter->data) iter = iter->left;
        else iter = iter->right;
    }
    node *newNode = createNode(data);
    if(data < prev->data){
        prev->left = newNode;
    }
    else{
        prev->right = newNode;
    }
}


int main(){
    // Constructing the root node - Using Function (Recommended)
    node *root = NULL;
    insertNode(&root, 5);
    insertNode(&root, 3);
    insertNode(&root, 6);
    insertNode(&root, 1);
    insertNode(&root, 4);
    insertNode(&root, 16);
    inOrder(root);
    postOrder(root);
    preOrder(root);
    return 0;
}
