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
         ListNode dummy(0);  
                 ListNode* tail = &dummy;  

                         while (list1 != nullptr && list2 != nullptr) {  
                                     if (list1->val < list2->val) {  
                                                     tail->next = list1; // Add list1 node to the merged list  
                                                                     list1 = list1->next; // Move to the next node in list1  
                                                                                 } else {  
                                                                                                 tail->next = list2; // Add list2 node to the merged list  
                                                                                                                 list2 = list2->next; // Move to the next node in list2  
                                                                                                                             }  
                                                                                                                                         tail = tail->next; // Move the tail to the last node  
                                                                                                                                                 }  

                                                                                                                                                         // If one of the lists is not finished, attach it to the result  
                                                                                                                                                                 if (list1 != nullptr) {  
                                                                                                                                                                             tail->next = list1;  
                                                                                                                                                                                     } else {  
                                                                                                                                                                                                 tail->next = list2;  
                                                                                                                                                                                                         }  

                                                                                                                                                                                                                 return dummy.next;
    }
};