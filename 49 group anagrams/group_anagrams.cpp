#include <vector>
#include <map>
#include <string>

unsigned long long hash(std::string& str){
		if(str.size() == 0) return 0;
    unsigned long long res = 1;
    for(int i = 0; i<str.size(); ++i)
         res *= ((str[i]<<13)/840);
    return res;
}

std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
		std::map<unsigned long long, std::vector<std::string>> map;
    for(auto& i: strs)
				map[hash(i)].push_back(i);
    std::vector<std::vector<std::string>> res;
    for(auto &i: map)
				res.push_back(i.second);
    return res;
}
