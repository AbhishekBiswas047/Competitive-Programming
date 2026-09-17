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

void countNodes(struct Node *root, int *total, int *internal, int *leaf) {
    if (root == NULL) return;

    (*total)++;
    if (root->left == NULL && root->right == NULL) {
        (*leaf)++;
    } else {
        (*internal)++;
    }

    countNodes(root->left, total, internal, leaf);
    countNodes(root->right, total, internal, leaf);
}

int main() {
    struct Node *root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);

    int total = 0, internal = 0, leaf = 0;
    countNodes(root, &total, &internal, &leaf);

    printf("Total Nodes: %d\n", total);
    printf("Internal Nodes: %d\n", internal);
    printf("Leaf Nodes: %d\n", leaf);

    return 0;
}