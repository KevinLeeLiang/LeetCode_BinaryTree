//
// Created by garen_lee on 2025/7/30.
/**
  ******************************************************************************
  * @file           : L572_isSubtree.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/30
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L572_ISSUBTREE_H
#define BINARYTREE_L572_ISSUBTREE_H

#include "util.h"
class L572_isSubtree : public LeetcodeBinaryTree {
private:
    bool isSubtree(TreeNode* root, TreeNode* subRoot);
    bool dfs(TreeNode* o, TreeNode* t);
    bool check(TreeNode* o, TreeNode* t);
public:
    L572_isSubtree() {}
    void test();
};


#endif //BINARYTREE_L572_ISSUBTREE_H
