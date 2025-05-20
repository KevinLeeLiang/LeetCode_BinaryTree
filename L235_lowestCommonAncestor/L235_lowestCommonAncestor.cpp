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
    TreeNode* ancestor = root;
    while (true) {
        if (p->val < ancestor->val && q->val < ancestor->val) {
            ancestor = ancestor->left;
        }
        else if (p->val > ancestor->val && q->val > ancestor->val) {
            ancestor = ancestor->right;
        }
        else {
            break;
        }
    }
    return ancestor;
}

void L235_lowestCommonAncestor::test() {

}