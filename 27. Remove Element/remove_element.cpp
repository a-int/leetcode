#include <vector>

int removeElement(std::vector<int>& nums, int val) {
    if(nums.size() == 0) return 0;
        
    std::sort(nums.begin(), nums.end());
    int size = nums.size();
    for(auto i = nums.begin();  (i<nums.end())&&(*i <= val);)
				if(*i == val) {
						nums.erase(i);
						size--;   
				}	else i++;
		return size;
}
