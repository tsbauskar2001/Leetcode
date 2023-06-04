/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *ans = new ListNode();
        ListNode *curr = ans;
        ListNode *head1 = l1, *head2 = l2;

        int sum = 0, carry = 0;

        while (head1 || head2)
        {
            sum = carry;

            if (head1)
            {
                sum += head1->val;
                head1 = head1->next;
            }

            if (head2)
            {
                sum += head2->val;
                head2 = head2->next;
            }

            curr->next = new ListNode(sum % 10);
            carry = sum / 10;

            curr = curr->next;
        }

        if (carry)
            curr->next = new ListNode(carry);

        return ans->next;
    }
};
// @lc code=end
