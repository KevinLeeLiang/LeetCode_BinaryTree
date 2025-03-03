//
// Created by garen_lee on 2025/3/3.
/**
  ******************************************************************************
  * @file           : L105_buildTree.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/3
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L105_BUILDTREE_H
#define BINARYTREE_L105_BUILDTREE_H

#include "util.h"
class L105_buildTree : public LeetcodeBinaryTree {
private:
    TreeNode* buildTree(vector<int> &preorder, vector<int> &inorder);
    TreeNode* myBuildTree(const vector<int>& preorder, const vector<int>& inorder, int preorder_left, int preorder_right,
                        int inorder_left, int inorder_right);
    unordered_map<int, int> index;
public:
    L105_buildTree() {}
    void test();
};


#endif //BINARYTREE_L105_BUILDTREE_H
