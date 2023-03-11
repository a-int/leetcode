#include <string>
#include <vector>

bool isAnagram(std::string s, std::string t) {
    if(s.size() != t.size()) return false;
				std::vector<short> letters(26);
        for(auto& i: s) letters[i-'a'] +=1;
						for(auto& i: t) {
								if(!letters[i-'a']) return false;   
								else letters[i-'a']-=1;
    }
		return true;
}
