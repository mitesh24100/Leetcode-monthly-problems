3217. Delete Nodes From Linked List Present in Array

You are given an array of integers nums and the head of a linked list. Return the head of the modified linked list after removing all nodes from the linked list that have a value that exists in nums.

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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        // Putting values of array in a set
        unordered_set<int> valuesToRemove(nums.begin(), nums.end());

        // Starting from the head node
        // If it is to be removed
        while(head != nullptr && valuesToRemove.count(head->val) > 0) {
            //Just move forward
            head = head->next;
        }

        // If no nodes left
        if(head == nullptr) {
            return nullptr;
        }

        ListNode* current = head;

        while(current->next != nullptr) {
            if(valuesToRemove.contains(current->next->val)) {
                current->next = current->next->next;
            }
            else {
                current = current->next;
            }
        }
        return head;
    }
};
