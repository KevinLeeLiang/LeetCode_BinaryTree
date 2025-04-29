//
// Created by garen-lee on 2025/4/29.
/**
  ******************************************************************************
  * @file           : L199_rightSideView.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/29
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L199_RIGHTSIDEVIEW_H
#define BINARYTREE_L199_RIGHTSIDEVIEW_H

#include "util.h"
class L199_rightSideView : public LeetcodeBinaryTree {
private:
    vector<int> rightSideView(TreeNode* root) ;
public:
    L199_rightSideView() {}
    void test();
};


#endif //BINARYTREE_L199_RIGHTSIDEVIEW_H
