class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        //iterative
        ListNode result = ListNode(0);
        ListNode* currentNode = &result;
        int cal=0;
        
        while(l1 || l2 || cal)
        {
            cal += (l1?l1->val:0) + (l2?l2->val:0);
            currentNode->next = new ListNode(cal%10);
            currentNode = currentNode->next;
            
            cal /= 10;
            if(l1)
            {
                l1=l1->next;
            }
            if(l2)
            {
                l2=l2->next;
            }
        }
        return result.next;
        //20~91ms, 71.3MB

        /*
            //recurrsive
            if(l1 || l2)
            {
                int cal = (l1?l1->val:0)+(l2?l2->val:0);
                ListNode* temp = new ListNode(cal%10);
                cal /= 10;
                ListNode* nextL1 = l1?l1->next:NULL;
                if(nextL1){
                    nextL1->val += cal;
                }else if(cal){
                    nextL1 = new ListNode(cal);
                }
                temp->next = addTwoNumbers(nextL1 , l2?l2->next:NULL );
                return temp;
            }else{
                return NULL;
            }
            //28~48ms, 71.5MB
        */
    }
};