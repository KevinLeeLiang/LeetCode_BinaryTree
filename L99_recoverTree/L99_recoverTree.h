//
// Created by garen_lee on 2025/2/6.
/**
  ******************************************************************************
  * @file           : L99_recoverTree.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/6
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L99_RECOVERTREE_H
#define BINARYTREE_L99_RECOVERTREE_H

#include "util.h"
class L99_recoverTree : public LeetcodeBinaryTree{
private:
    void recoverTree(TreeNode* root);
    void inorder(TreeNode* root, vector<int>& nums);
    pair<int, int> findTwoSwapped(vector<int>& nums);
    void recover(TreeNode* root, int count, int val1, int val2);

public:
    L99_recoverTree(){}
    void test();
};


#endif //BINARYTREE_L99_RECOVERTREE_H
