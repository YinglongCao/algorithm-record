/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start

// Definition for singly-linked list.

// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         // 进位的值
//         int c = 0;
//         int x = 0;
//         // 保存两个链表当前节点
//         ListNode *a = l1;
//         ListNode *b = l2;
//         // 结果链表
//         ListNode *re = new ListNode;
//         // 结果链表的当前节点
//         ListNode *now = re;
//         do {
//             now->next = new ListNode;
//             now = now->next;
//             // 判断节点情况
//             if (a == nullptr) {
//                 // 如果是a节点为空
//                 x = b->val + c;
//                 // 判断进位
//                 if (x > 9) {
//                     c = 1;
//                     x -= 10;
//                 } else {
//                     c = 0;
//                 }
//                 now->val = x;
//                 b = b->next;
//             } else if (b == nullptr) {
//                 // b节点为空
//                 x = a->val + c;
//                 // 判断进位
//                 if (x > 9) {
//                     c = 1;
//                     x -= 10;
//                 } else {
//                     c = 0;
//                 }
//                 now->val = x;
//                 a = a->next;
//             } else {
//                 // 都不为空
//                 x = a->val + b->val + c;
//                 // 判断进位
//                 if (x > 9) {
//                     c = 1;
//                     x -= 10;
//                 } else {
//                     c = 0;
//                 }
//                 now->val = x;
//                 a = a->next;
//                 b = b->next;
//             }
//         } while (a != nullptr || b != nullptr);
//         // 判断最后相加的情况
//         if (c != 0) {
//             now->next = new ListNode(c);
//         }
//         return re->next;
//     }
// };
// @lc code=end

