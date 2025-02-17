//
// Created by garen_lee on 2025/2/17.
/**
  ******************************************************************************
  * @file           : L101_isSymmetric.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/17
  ******************************************************************************
  */
//

#include "L101_isSymmetric.h"
bool L101_isSymmetric::isSameTree(TreeNode* p, TreeNode* q) {
    if (p == nullptr && q == nullptr)
        return true;
    if (p == nullptr || q == nullptr)
        return false;
    return p->val == q->val && isSameTree(p->left, q->right) && isSameTree(p->right, q->left);
}
bool L101_isSymmetric::isSymmetric(TreeNode* root){
    if (root->left == nullptr && root->right == nullptr) {
        return true;
    }
    if (root->left == nullptr || root->right == nullptr) {
        return false;
    }
    return isSameTree(root->left, root->right);
}
void L101_isSymmetric::test() {
    vector<int> vec = {1,2,2,3,4,4,3};
    TreeNode*root = create_treenode(vec, true);
    cout << isSymmetric(root) << endl;
    vec = {1,2,2,-1,3,-1,3};
    root = create_treenode(vec, true);
    cout << isSymmetric(root) << endl;
}