ListNode* insertGreatestCommonDivisors(ListNode* head) {
    if(head==NULL or head->next==NULL) return head;
    ListNode *t1=head,*t2=head->next;
    int x,y,a;
    while(t2){
        x=t1->val;
        y=t2->val;
        while(x!=y){
            if(x>y) x-=y;
            else y-=x;
        }
        ListNode *nn=new ListNode(x);
        t1->next=nn;
        nn->next=t2;
        t1=t2;
        t2=t2->next;
    }
    return head;
}
