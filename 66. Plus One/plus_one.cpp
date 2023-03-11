#include <vector>

std::vector<int> plusOne(std::vector<int>& digits) {
    if(digits.size() == 0) return digits;
        
    auto i = digits.end()-1;
    while(i > digits.begin() && *i == 9){
        *i = 0;
				i--;
    }
    if(*i == 9){
        *i = 0;
				digits.insert(i,1);
    }
    else (*i)++;
		return digits;
}
