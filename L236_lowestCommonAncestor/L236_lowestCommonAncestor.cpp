//
// Created by garen_lee on 2025/5/20.
/**
  ******************************************************************************
  * @file           : L236_lowestCommonAncestor.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/20
  ******************************************************************************
  */
//

#include "L236_lowestCommonAncestor.h"

bool L236_lowestCommonAncestor::dfs(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (root == nullptr) return false;
    bool left = dfs(root->left, p, q);
    bool right = dfs(root->right, p, q);
    if ((left && right) || ((root->val == p->val || root->val == q->val) && (left || right))) {
        ans = root;
    }
    return left || right || (root->val == p->val || root->val == q->val);
}

TreeNode* L236_lowestCommonAncestor::lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    dfs(root, p, q);
    return ans;
}

void L236_lowestCommonAncestor::test() {
    vector<int> nums = {3,5,1,6,2,0,8,-1,-1,7,4};
    vector<int>ps = {5,6,2,-1,-1,2,7,4};
    vector<int>qs = {1,0,8};
    TreeNode* root = create_treenode(nums, true);
    TreeNode* p = create_treenode(ps, true);
    TreeNode* q = create_treenode(qs, true);
    cout << lowestCommonAncestor(root, p, q)->val << endl;
    nums = {3,5,1,6,2,0,8,-1,-1,7,4};
    ps = {5,6,2,-1,-1,2,7,4};
    qs = {4};
    root = create_treenode(nums, true);
    p = create_treenode(ps, true);
    q = create_treenode(qs, true);
    cout << lowestCommonAncestor(root, p, q)->val << endl;
    nums = {1,2};
    ps = {1};
    qs = {2};
    root = create_treenode(nums, true);
    p = create_treenode(ps, true);
    q = create_treenode(qs, true);
    cout << lowestCommonAncestor(root, p, q)->val << endl;
}