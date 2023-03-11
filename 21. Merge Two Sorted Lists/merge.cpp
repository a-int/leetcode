struct ListNode {
		int val;
		ListNode *next;
		ListNode() : val(0), next(nullptr) {}
		ListNode(int x) : val(x), next(nullptr) {}
		ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* curr_1, ListNode* curr_2) {
		if(!curr_1 && !curr_2) return nullptr;
        
    ListNode* orig = new ListNode();
    ListNode* merged = orig;
    while(curr_1 && curr_2){
				if(curr_1->val >= curr_2->val){
						merged->next = curr_2;
            curr_2 = curr_2->next;
        } else{
						merged->next = curr_1;
            curr_1 = curr_1->next;
        }
        merged = merged->next;
    }
    if(curr_1) merged->next = curr_1;
		else merged->next = curr_2;
		return orig->next;
}
