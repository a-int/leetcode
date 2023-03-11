#include <vector>

int removeDuplicates(std::vector<int>& nums) {
    if(!nums.size()) return 0;
        
		std::vector<int> vec;
    vec.push_back(nums[0]);
    for(auto &i: nums){
				if(vec.back() != i) vec.push_back(i);
    }
    nums = vec;
		return vec.size();
}
