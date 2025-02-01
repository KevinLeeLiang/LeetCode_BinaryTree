//
// Created by garen-lee on 2025/2/1.
/**
  ******************************************************************************
  * @file           : L95_generateTrees.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/1
  ******************************************************************************
  */
//

#include "L95_generateTrees.h"
vector<TreeNode*>L95_generateTrees::generateTrees(int start, int end) {
    if (start > end)
        return {nullptr};
    vector<TreeNode*> res;

    for (int i = start; i <= end; i++) {
        vector<TreeNode*> left_trees = generateTrees(start, i - 1);
        vector<TreeNode*> right_trees = generateTrees(i + 1, end);
        for (auto left : left_trees) {
            for (auto right : right_trees) {
                TreeNode* root = new TreeNode(i);
                root->left = left;
                root->right = right;
                res.push_back(root);
            }
        }
    }
    return res;
}
vector<TreeNode*> L95_generateTrees::generateTrees(int n){
    if (n == 0)
        return {};
    return generateTrees(1, n);
}
void L95_generateTrees::test(){
    int n;
    vector<TreeNode*> res;
    n = 3;
    res = generateTrees(n);
    for (auto node : res)
        cout << print_tree(node) << endl;
    cout <<"+++++++++" << endl;
    n = 1;
    res = generateTrees(n);
    for (auto node : res)
        cout << print_tree(node) << endl;
    cout <<"+++++++++" << endl;
}