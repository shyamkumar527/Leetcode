vector<ListNode*> splitListToParts(ListNode* head, int k){
    vector<ListNode*> ans;
    int c=0;
    ListNode *t1=head,*t2;
    while(t1){
        c++;
        t1=t1->next;
    }
    t1=head;
    if(c<=k){
        while(t1){
            t2=t1->next;
            t1->next=NULL;
            ans.push_back(t1);
            t1=t2;
        }
        k-=c;
        while(k--) ans.push_back(NULL);
    }
    else{
        int r=c%k,d=c/k,f=0;
        for(int i=0;i<k;i++){
            int x=d;
            while(x>1){
                t1=t1->next;
                x--;
            }
            if(r>0){
                t1=t1->next;
                r--;
            }
            t2=t1->next;
            t1->next=NULL;
            ans.push_back(head);
            t1=t2;
            head=t1;
        }
    }
    return ans;
}
