//
// Created by garen_lee on 2025/3/3.
/**
  ******************************************************************************
  * @file           : L106_buildTree.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/3
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L106_BUILDTREE_H
#define BINARYTREE_L106_BUILDTREE_H

#include "util.h"
class L106_buildTree : public LeetcodeBinaryTree {
private:
    int post_idx;
    unordered_map<int, int>idx_map;
    TreeNode* helper(int in_left, int in_right, vector<int>& inorder, vector<int>& postorder);
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder);
public:
    L106_buildTree(){}
    void test();
};


#endif //BINARYTREE_L106_BUILDTREE_H
