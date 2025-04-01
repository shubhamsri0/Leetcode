/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        if(!headA) return NULL;
        if(!headB) return NULL;

        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        ListNode* intersect;

        int N1 = 0, N2 = 0;

        while(temp1){
            N1++;
            temp1 = temp1 -> next;
        }
        while(temp2){
            N2++;
            temp2 = temp2 -> next;
        }

        temp1 = headA;
        temp2 = headB;

        int diff = abs(N1 - N2);
        if (N1 > N2) {
            for (int i = 0; i < diff; i++) temp1 = temp1->next;
        } else {
            for (int i = 0; i < diff; i++) temp2 = temp2->next;
        }

    
        while (temp1 && temp2) {
            if (temp1 == temp2) return temp1;  
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        return nullptr;
    }
};