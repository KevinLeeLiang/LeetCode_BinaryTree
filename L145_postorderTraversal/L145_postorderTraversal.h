//
// Created by garen_lee on 2025/4/22.
/**
  ******************************************************************************
  * @file           : L145_postorderTraversal.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/22
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L145_POSTORDERTRAVERSAL_H
#define BINARYTREE_L145_POSTORDERTRAVERSAL_H

#include "util.h"
class L145_postorderTraversal : public LeetcodeBinaryTree {
private:
    vector<int> postorderTraversal(TreeNode* root);
    void dfs(TreeNode* root, vector<int>& res);
public:
    L145_postorderTraversal() {}
    void test();
};


#endif //BINARYTREE_L145_POSTORDERTRAVERSAL_H
