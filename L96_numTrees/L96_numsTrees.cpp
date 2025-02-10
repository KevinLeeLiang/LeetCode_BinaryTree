//
// Created by garen_lee on 2025/2/10.
/**
  ******************************************************************************
  * @file           : L96_numsTrees.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/10
  ******************************************************************************
  */
//

#include "L96_numsTrees.h"

int L96_numsTrees::numTrees(int n) {
    vector<int> G(n + 1, 0);
    G[0] = 1;
    G[1] = 1;

    for (int i = 2; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            G[i] += G[j - 1] * G[i - j];
        }
    }
    return G[n];
}

void L96_numsTrees::test() {
    int n;
    n = 3;
    cout << numTrees(n) << endl;
    n = 1;
    cout << numTrees(n) << endl;
}