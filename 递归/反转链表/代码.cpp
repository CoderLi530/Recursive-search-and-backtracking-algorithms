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
class Solution 
{
public:
    ListNode* reverseList(ListNode* head) 
    {
        //注意空链表
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* ret = reverseList(head->next); //ret是反转后链表的头节点
        head->next->next = head;
        head->next = nullptr;
        return ret;
    }
};