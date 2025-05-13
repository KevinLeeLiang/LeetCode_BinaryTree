//
// Created by garen_lee on 2025/5/13.
/**
  ******************************************************************************
  * @file           : L235_lowestCommonAncestor.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/13
  ******************************************************************************
  */
//

#include "L235_lowestCommonAncestor.h"

TreeNode* L235_lowestCommonAncestor::lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (root == nullptr) {
        return nullptr;
    }
    if (root == p || root == q) {
        return root;
    }
    TreeNode* left = lowestCommonAncestor(root->left, p, q);
    TreeNode* right = lowestCommonAncestor(root->right, p, q);
    if (left != nullptr && right != nullptr) {}
}

void L235_lowestCommonAncestor::test() {

}