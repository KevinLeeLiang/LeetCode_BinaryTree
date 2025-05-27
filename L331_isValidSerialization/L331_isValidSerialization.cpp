//
// Created by garen_lee on 2025/5/27.
/**
  ******************************************************************************
  * @file           : L331_isValidSerialization.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/27
  ******************************************************************************
  */
//

#include "L331_isValidSerialization.h"

bool L331_isValidSerialization::isValidSerialization(string preorder) {
    istringstream iss(preorder);
    string token;
    stack<string> stk;

    // 以逗号为分隔符分割字符串
    while (getline(iss, token, ',')) {
        // 如果栈顶元素为 "#"，并且当前元素也为 "#"，则将栈顶元素出栈，并将当前元素入栈
        while (!stk.empty() && stk.top() == "#" && token == "#") {
            stk.pop();
            // 如果栈为空，则说明序列化无效
            if (stk.empty()) {
                return false;
            }
            // 继续检查栈顶元素
            stk.pop();
        }
        // 将当前元素入栈
        stk.push(token);
    }

    // 最后栈内应该只剩下一个 "#" 元素，如果不是，则序列化无效
    return stk.size() == 1 && stk.top() == "#";
}

void L331_isValidSerialization::test() {
    string preorder = "9,3,4,#,#,1,#,#,2,#,6,#,#";
    cout << isValidSerialization(preorder) << endl;
    preorder = "1,#";
    cout << isValidSerialization(preorder) << endl;
    preorder = "9,#,#,1";
    cout << isValidSerialization(preorder) << endl;

}