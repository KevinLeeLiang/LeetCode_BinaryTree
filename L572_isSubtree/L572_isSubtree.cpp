//
// Created by garen_lee on 2025/7/30.
/**
  ******************************************************************************
  * @file           : L572_isSubtree.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/30
  ******************************************************************************
  */
//

#include "L572_isSubtree.h"

bool L572_isSubtree::check(TreeNode* o, TreeNode* t) {
    if (!o && !t) {
        return true;
    }
    if ((o && !t) || (!o && t) || (o->val != t->val)) {
        return false;
    }
    return check(o->left, t->left) && check(o->right, t->right);
}

bool L572_isSubtree::dfs(TreeNode* o, TreeNode* t) {
    if (!o) return false;
    return check(o, t) || dfs(o->left, t) || dfs(o->right, t);
}

bool L572_isSubtree::isSubtree(TreeNode* root, TreeNode* subRoot) {
    return dfs(root, subRoot);
}

void L572_isSubtree::test() {
    vector<int> val = {3, 4, 5, 1, 2};
    TreeNode* root = create_treenode(val, true);
    vector<int> val2 = {4, 1, 2};
    TreeNode* sub_root = create_treenode(val2, true);
    cout << isSubtree(root, sub_root) << endl;
    val = {3, 4, 5, 1, 2, -1, -1, -1, -1, 0};
    val2 = {4, 1, 2};
    root = create_treenode(val, true);
    sub_root = create_treenode(val2, true);
    cout << isSubtree(root, sub_root) << endl;
}