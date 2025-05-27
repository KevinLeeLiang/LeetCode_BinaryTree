//
// Created by garen_lee on 2025/5/27.
/**
  ******************************************************************************
  * @file           : L297_serializeAndDeserialize.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/27
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L297_SERIALIZEANDDESERIALIZE_H
#define BINARYTREE_L297_SERIALIZEANDDESERIALIZE_H

#include "util.h"
class L297_serializeAndDeserialize : public LeetcodeBinaryTree {
private:
    string serialize(TreeNode* root);
    void rserialize(TreeNode* root, string &str);
    TreeNode* deserialize(string data);
    TreeNode* rdeserialize(list<string>& data_array);
public:
    L297_serializeAndDeserialize() {}
    void test();
};


#endif //BINARYTREE_L297_SERIALIZEANDDESERIALIZE_H
