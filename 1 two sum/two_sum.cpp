/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. You may assume that each input would have exactly one solution, and you may not use the same element twice. You can return the answer in any order 
*/

#include <iostream>
#include <vector>
#include <map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::map<int, int> map;
    for(int i = 0; i < nums.size(); ++i){
				int curr = nums[i];
        if(map.count(target - curr)){
             return {i, map[target-curr]};
        }
        map[curr] = i;
    }
		return {0,0};
}
