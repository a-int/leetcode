struct ListNode {
		int val;
		ListNode *next;
		ListNode() : val(0), next(nullptr) {}
		ListNode(int x) : val(x), next(nullptr) {}
		ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* res = new ListNode;
		ListNode* current = res;
		int overflow = 0;
		while(l1 || l2 || overflow){ //l1 and l2 has values
				current->next = new ListNode;
				current = current->next;
				int sum = overflow;
				if(l1){//only l1 has values
						sum += l1->val;
						l1 = l1->next;
				}
				if(l2){//only l2 has values
						sum += l2->val;
						l2 = l2->next;
				}
				overflow = sum / 10;
				sum %= 10;
				current->val = sum;
		}
		return res->next;
}
