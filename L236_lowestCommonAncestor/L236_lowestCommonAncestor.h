//
// Created by garen_lee on 2025/5/20.
/**
  ******************************************************************************
  * @file           : L236_lowestCommonAncestor.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/20
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L236_LOWESTCOMMONANCESTOR_H
#define BINARYTREE_L236_LOWESTCOMMONANCESTOR_H

#include "util.h"
class L236_lowestCommonAncestor : public LeetcodeBinaryTree {
private:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q);
    bool dfs(TreeNode* root, TreeNode* p, TreeNode* q);
    TreeNode* ans;
public:
    L236_lowestCommonAncestor() {}
    void test();
};


#endif //BINARYTREE_L236_LOWESTCOMMONANCESTOR_H
