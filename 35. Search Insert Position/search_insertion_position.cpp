#include <vector>

int searchInsert(std::vector<int>& nums, int target) {
    int i = 0;
    while(i < nums.size() && target > nums[i]) i++;
		return i;
}
