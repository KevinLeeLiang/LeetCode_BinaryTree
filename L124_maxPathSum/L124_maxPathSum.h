//
// Created by garen_lee on 2025/4/15.
/**
  ******************************************************************************
  * @file           : L124_maxPathSum.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/15
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L124_MAXPATHSUM_H
#define BINARYTREE_L124_MAXPATHSUM_H

#include "util.h"
class L124_maxPathSum : public LeetcodeBinaryTree {
private:
    int maxPathSum(TreeNode* root);
    int maxGain(TreeNode* root);
    int max_sum_;
public:
    L124_maxPathSum() {}
    void test();
};


#endif //BINARYTREE_L124_MAXPATHSUM_H
