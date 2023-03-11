#include <string>
#include <sstream>

int lengthOfLastWord(std::string s) {
    std::stringstream strm(s);
    std::string str;
    while(strm >> str);
		return str.size();
}
