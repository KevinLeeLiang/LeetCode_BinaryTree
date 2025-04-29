//
// Created by garen-lee on 2025/4/29.
/**
  ******************************************************************************
  * @file           : L173_BSTiterator.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/29
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L173_BSTITERATOR_H
#define BINARYTREE_L173_BSTITERATOR_H

#include "util.h"

namespace L173 {
    class BSTIterator {
    public:
        BSTIterator(TreeNode* root) : cur(root) {

        }

        int next() {
            while (cur != nullptr) {
                stk.push(cur);
                cur = cur->left;
            }
            cur = stk.top();
            stk.pop();
            int val = cur->val;
            cur = cur->right;
            return val;
        }

        bool hasNext() {
            return cur != nullptr || !stk.empty();
        }
    private:
        TreeNode* cur;
        stack<TreeNode*> stk;
    };
}

class L173_BSTiterator : public LeetcodeBinaryTree {
public:
    L173_BSTiterator() {};
    void test();
};

#endif //BINARYTREE_L173_BSTITERATOR_H
