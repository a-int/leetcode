/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. You may assume that each input would have exactly one solution, and you may not use the same element twice. You can return the answer in any order 
*/

#include <iostream>
#include <vector>
#include <functional>
#include <map>

std::pair<bool, std::pair<std::size_t, std::size_t>> findSum(std::vector<int>, int);

int main(){
    std::vector<int> iVec1 = {1,2,3,4};
    std::vector<int> iVec2 = {1,1,3,4};
    auto res1 = findSum(iVec1, 3);
    auto res2 = findSum(iVec2, 3);
    std::cout<<"For series: ";
    for (auto &i : iVec1) std::cout<<i<<" ";
    std::cout<<" and target: 3.\nRes: ";
    if (res1.first)
    {
        std::cout<<res1.second.first<<" "<<res1.second.second<<"\n\n";
    }
    else std::cout<<"Not found"<<"\n\n";

    std::cout<<"For series: ";
    for (auto &i : iVec2) std::cout<<i<<" ";
    std::cout<<" and target: 3.\nRes: ";
    if (res2.first)
    {
        std::cout<<res2.second.first<<" "<<res2.second.second<<"\n\n";
    }
    else std::cout<<"Not found"<<"\n\n";
    
    return 0;
}

std::pair<bool, std::pair<std::size_t, std::size_t>> findSum(std::vector<int> arr, int target){
    std::map<int, std::size_t> hash_table;
    for (size_t i = 0; i < arr.size(); i++){
        // Add new {val:index} pair if not in table
        if (hash_table.count(arr[i]) == 0){
            hash_table.insert({arr[i], i});
        }
        if(hash_table.count(target-arr[i]) == 1) return std::make_pair(1, std::make_pair(hash_table[target-arr[i]], i));
        else continue;
    }
    return std::make_pair(0, std::make_pair(0,0));
}