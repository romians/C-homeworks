#include <stdio.h>
#include <stdlib.h>

// Ʈ�� ��� ����ü ����
typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

// ��� ���� �Լ�
TreeNode* createNode(int data) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// ���� ��ȸ �Լ�
void preorderTraversal(TreeNode* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

// ���� ��ȸ �Լ�
void inorderTraversal(TreeNode* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

// ���� ��ȸ �Լ�
void postorderTraversal(TreeNode* root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    // ��ũ ǥ�������� Ʈ�� ����
    TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    root->left->left->left = createNode(8);
    root->left->left->right = createNode(9);
    root->left->right->left = createNode(10);
    root->left->right->right = createNode(11);

    // ���� ��ȸ ��� ���
    printf("���� ��ȸ ��� (��ũ ǥ����): ");
    preorderTraversal(root);
    printf("\n");

    // ���� ��ȸ ��� ���
    printf("���� ��ȸ ��� (��ũ ǥ����): ");
    inorderTraversal(root);
    printf("\n");

    // ���� ��ȸ ��� ���
    printf("���� ��ȸ ��� (��ũ ǥ����): ");
    postorderTraversal(root);
    printf("\n");

    // �迭 ǥ�������� Ʈ�� ����
    int treeArray[11] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };

    // ���� ��ȸ ��� ���
    printf("���� ��ȸ ��� (�迭 ǥ����): ");
    for (int i = 0; i < 11; i++) {
        if (treeArray[i] != 0) {
            printf("%d ", treeArray[i]);
        }
    }
    printf("\n");

    // ���� ��ȸ ��� ���
    printf("���� ��ȸ ��� (�迭 ǥ����): ");
    // ���� ��ȸ�� ����� �迭 ǥ�������� ���� ����Ϸ��� Ʈ�� ������ ������ �����ؾ� �մϴ�.

    // ���� ��ȸ ��� ���
    printf("���� ��ȸ ��� (�迭 ǥ����): ");
    // ���� ��ȸ�� ����� �迭 ǥ�������� ���� ����Ϸ��� Ʈ�� ������ ������ �����ؾ� �մϴ�.

    return 0;
}
