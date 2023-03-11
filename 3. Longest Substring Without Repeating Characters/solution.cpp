#include <string>

int lengthOfLongestSubstring(std::string s) {
    int beg = 0;
    int max = s.empty()? 0:1;
		for(int i = 1; i<s.size(); i++){
				std::string substr(s.begin()+beg, s.begin()+i);
				int copy_pos = substr.find_last_of(s[i]);
				int size = substr.size();
				if(copy_pos != std::string::npos){
						beg = i-size+copy_pos+1;
						if(size > max) max = size;
        }
				else if((i == s.size()-1) && (size+1 > max)) max = size+1;
    }
		return max;
}
