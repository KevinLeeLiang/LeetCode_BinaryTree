//
// Created by garen_lee on 2025/2/10.
/**
  ******************************************************************************
  * @file           : L100_isSampleTree.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/10
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L100_ISSAMPLETREE_H
#define BINARYTREE_L100_ISSAMPLETREE_H

#include "util.h"
bool isSameTree(TreeNode* p, TreeNode* q);
class L100_isSampleTree : public LeetcodeBinaryTree{
private:
    bool isSameTree(TreeNode* p, TreeNode* q);
    void dfs(TreeNode* p, TreeNode* q);
    bool bfs(TreeNode* p, TreeNode* q);
    bool is_same_ = true;
public :
    L100_isSampleTree(){}
    void test();

};


#endif //BINARYTREE_L100_ISSAMPLETREE_H
