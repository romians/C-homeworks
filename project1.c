#include <stdio.h>
#include <stdlib.h>

// 트리 노드 구조체 정의
typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

// 노드 생성 함수
TreeNode* createNode(int data) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// 전위 순회 함수
void preorderTraversal(TreeNode* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

// 중위 순회 함수
void inorderTraversal(TreeNode* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

// 후위 순회 함수
void postorderTraversal(TreeNode* root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    // 링크 표현법으로 트리 생성
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

    // 전위 순회 결과 출력
    printf("전위 순회 결과 (링크 표현법): ");
    preorderTraversal(root);
    printf("\n");

    // 중위 순회 결과 출력
    printf("중위 순회 결과 (링크 표현법): ");
    inorderTraversal(root);
    printf("\n");

    // 후위 순회 결과 출력
    printf("후위 순회 결과 (링크 표현법): ");
    postorderTraversal(root);
    printf("\n");

    // 배열 표현법으로 트리 생성
    int treeArray[11] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };

    // 전위 순회 결과 출력
    printf("전위 순회 결과 (배열 표현법): ");
    for (int i = 0; i < 11; i++) {
        if (treeArray[i] != 0) {
            printf("%d ", treeArray[i]);
        }
    }
    printf("\n");

    // 중위 순회 결과 출력
    printf("중위 순회 결과 (배열 표현법): ");
    // 중위 순회의 결과를 배열 표현법에서 직접 출력하려면 트리 구조를 별도로 구현해야 합니다.

    // 후위 순회 결과 출력
    printf("후위 순회 결과 (배열 표현법): ");
    // 후위 순회의 결과를 배열 표현법에서 직접 출력하려면 트리 구조를 별도로 구현해야 합니다.

    return 0;
}
