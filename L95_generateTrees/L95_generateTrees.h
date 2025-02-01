//
// Created by garen-lee on 2025/2/1.
/**
  ******************************************************************************
  * @file           : L95_generateTrees.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/1
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L95_GENERATETREES_H
#define BINARYTREE_L95_GENERATETREES_H

#include "util.h"
class L95_generateTrees : public LeetcodeBinaryTree{
private:
    vector<TreeNode*> generateTrees(int start, int end);
    vector<TreeNode*> generateTrees(int n);
public:
    L95_generateTrees(){}
    void test();
};


#endif //BINARYTREE_L95_GENERATETREES_H
