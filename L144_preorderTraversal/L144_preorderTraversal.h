//
// Created by garen_lee on 2025/4/22.
/**
  ******************************************************************************
  * @file           : L144_preorderTraversal.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/22
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L144_PREORDERTRAVERSAL_H
#define BINARYTREE_L144_PREORDERTRAVERSAL_H

#include "util.h"
class L144_preorderTraversal : public LeetcodeBinaryTree {
private:
    vector<int> preorderTraversal(TreeNode* root);
    void dfs(TreeNode* root, vector<int>& res);
public:
    L144_preorderTraversal() {}
    void test();
};


#endif //BINARYTREE_L144_PREORDERTRAVERSAL_H
