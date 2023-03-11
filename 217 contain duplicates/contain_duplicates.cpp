/* Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct */

#include <iostream>
#include <vector>
#include <set>

bool isContain(std::vector<int>&);

int main(){
    std::vector<int> values1 = {1,2,3,1};
    std::cout<<"For series: ";
    for (auto &i : values1) std::cout<<i<<" ";
    std::cout<<(isContain(values1)? "There are duplicates":"There are no duplicates");
    
    std::cout<<"\n\n";

    std::vector<int> values2 = {1,2,3,4};
    std::cout<<"For series: ";
    for (auto &i : values2) std::cout<<i<<" ";
    std::cout<<(isContain(values2)? "There are duplicates":"There are no duplicates");
    return 0;
}

bool isContain(std::vector<int>& vals){
 	unordered_set<int> set{}; // #value #count
    for(auto const &item: nums) {
    	if(set.count(item)>0)
        	return true;
        set.insert(item);
	}
    return false;
}
