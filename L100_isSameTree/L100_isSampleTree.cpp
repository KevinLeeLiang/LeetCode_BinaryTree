//
// Created by garen_lee on 2025/2/10.
/**
  ******************************************************************************
  * @file           : L100_isSampleTree.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/10
  ******************************************************************************
  */
//

#include "L100_isSampleTree.h"

void L100_isSampleTree::dfs(TreeNode* p, TreeNode* q) {
    if (p == nullptr && q == nullptr) {
        is_same_ = true;
        return ;
    } else if (p == nullptr || q == nullptr) {
        is_same_ = false;
        return ;
    } else {
        if (p->val != q->val) {
            is_same_ = false;
            return ;
        } else {
            dfs(p->left, q->left);
            dfs(p->right, q->right);
        }
    }
}

bool L100_isSampleTree::bfs(TreeNode* p, TreeNode* q) {
    if (p == nullptr && q == nullptr) {
        return true;
    } else if (p == nullptr || q == nullptr) {
        return false;
    }

    queue <TreeNode*> queue1, queue2;
    queue1.push(p);
    queue2.push(q);
    while (!queue1.empty() && !queue2.empty()) {
        auto node1 = queue1.front();
        queue1.pop();
        auto node2 = queue2.front();
        queue2.pop();
        if (node1->val != node2->val) {
            return false;
        }
        auto left1 = node1->left, right1 = node1->right, left2 = node2->left, right2 = node2->right;
        if ((left1 == nullptr) ^ (left2 == nullptr)) {
            return false;
        }
        if ((right1 == nullptr) ^ (right2 == nullptr)) {
            return false;
        }
        if (left1 != nullptr) {
            queue1.push(left1);
        }
        if (right1 != nullptr) {
            queue1.push(right1);
        }
        if (left2 != nullptr) {
            queue2.push(left2);
        }
        if (right2 != nullptr) {
            queue2.push(right2);
        }
    }
    return queue1.empty() && queue2.empty();
}

bool L100_isSampleTree::isSameTree(TreeNode* p, TreeNode* q) {
    dfs(p, q);
    return this->is_same_;
}

void L100_isSampleTree::test() {
    vector<int>pl = {1, 2, 3};
    vector<int>ql = {1, 2, 3};
    TreeNode* p, *q;
    p = create_treenode(pl, true);
    q = create_treenode(ql, true);
    cout <<"dfs,"<< isSameTree(p, q) <<",bfs," << bfs(p, q) << endl;
    pl = {1, 2};
    ql = {1, -1, 2};
    p = create_treenode(pl, true);
    q = create_treenode(ql, true);
    cout <<"dfs,"<< isSameTree(p, q) <<",bfs," << bfs(p, q) << endl;
    pl = {1, 2, 1};
    ql = {1, 1, 2};
    p = create_treenode(pl, true);
    q = create_treenode(ql, true);
    cout <<"dfs,"<< isSameTree(p, q) <<",bfs," << bfs(p, q) << endl;
}