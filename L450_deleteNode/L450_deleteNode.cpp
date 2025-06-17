//
// Created by garen_lee on 2025/6/17.
/**
  ******************************************************************************
  * @file           : L450_deleteNode.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/17
  ******************************************************************************
  */
//

#include "L450_deleteNode.h"

TreeNode* L450_deleteNode::deleteNode(TreeNode* root, int key) {
    if (root == nullptr) {
        return nullptr;
    }
    if (root->val > key) {
        root->left = deleteNode(root->left, key);
        return root;
    }
    if (root->val < key) {
        root->right = deleteNode(root->right, key);
        return root;
    }
    if (root->val == key) {
        if (!root->left && !root->right) {
            return nullptr;
        }
        if (!root->right) {
            return root->left;
        }
        if (!root->left) {
            return root->right;
        }
        TreeNode *successor = root->right;
        while (successor->left) {
            successor = successor->left;
        }
        root->right = deleteNode(root->right, successor->val);
        successor->right = root->right;
        successor->left = root->left;
        return successor;
    }
    return root;
}

void L450_deleteNode::test() {
    vector<int>vec;
    vec = {5,3,6,2,4,-1,7};
    TreeNode* root = create_treenode(vec, true);
    deleteNode(root, 3);
    cout << print_tree(root) << endl;
    vec = {5,3,6,2,4,-1,7};
    root = create_treenode(vec, true);
    deleteNode(root, 0);
    cout << print_tree(root) << endl;
    vec = {};
    root = create_treenode(vec, true);
    deleteNode(root, 0);
    cout << print_tree(root) << endl;
}