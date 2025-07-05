/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //1. 重复子问题 -- 函数头
        //2. 子问题如何解决 -- 函数体
        //3. 递归出口
        if (list1 == nullptr || list2 == nullptr)
        {
            return list1 == nullptr ? list2 : list1;
        }
        if (list1->val < list2->val)
        {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        } 
        else 
        {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};