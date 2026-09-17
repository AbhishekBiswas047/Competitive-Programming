#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node *createNode(int val) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->left = newNode->right = NULL;
    return newNode;
}

int getHeight(struct Node *root) {
    if (root == NULL) {
        return -1; 
    }
    int leftH = getHeight(root->left);
    int rightH = getHeight(root->right);

    return (leftH > rightH ? leftH : rightH) + 1;
}

int main() {
    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);

    printf("Height of the binary tree is: %d\n", getHeight(root));

    return 0;
}