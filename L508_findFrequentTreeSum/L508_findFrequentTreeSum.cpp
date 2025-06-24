//
// Created by garen_lee on 2025/6/24.
/**
  ******************************************************************************
  * @file           : L508_findFrequentTreeSum.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/24
  ******************************************************************************
  */
//

#include "L508_findFrequentTreeSum.h"
int L508_findFrequentTreeSum::dfs(TreeNode* root) {
    if (root == nullptr)
        return 0;
    int sum = root->val + dfs(root->left) + dfs(root->right);
    max_count = max(max_count, ++map[sum]);
    return sum;
}
vector<int> L508_findFrequentTreeSum::findFrequentTreeSum(TreeNode* root) {
    map.clear();
    max_count = 0;
    dfs(root);
    vector<int> ans;
    for (auto &[s, c] : map) {
        if (c == max_count) {
            ans.push_back(s);
        }
    }
    return ans;
}

void L508_findFrequentTreeSum::test() {
    vector<int> vec = {5,2,-3};
    TreeNode* root = create_treenode(vec, false);
    vector<int> ans = findFrequentTreeSum(root);
    print_vector(ans);
    vec = {5, 2, -5};
    root = create_treenode(vec, false);
    ans = findFrequentTreeSum(root);
    print_vector(ans);
}