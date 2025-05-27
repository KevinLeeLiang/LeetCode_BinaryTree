//
// Created by garen_lee on 2025/5/27.
/**
  ******************************************************************************
  * @file           : L331_isValidSerialization.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/27
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L331_ISVALIDSERIALIZATION_H
#define BINARYTREE_L331_ISVALIDSERIALIZATION_H

#include "util.h"
class L331_isValidSerialization : public LeetcodeBinaryTree {
private:
    bool isValidSerialization(string preorder);
public:
    L331_isValidSerialization() {}
    void test() ;
};


#endif //BINARYTREE_L331_ISVALIDSERIALIZATION_H
