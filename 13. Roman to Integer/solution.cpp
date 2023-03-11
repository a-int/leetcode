#include <string>

int romanToInt(std::string s) {
		int res = 0;
    for(int i = 0; i < s.size(); i++){
				if(s[i] == 'M') res+=1000;
        else if(s[i] == 'D') res+=500;
        else if(s[i] == 'C'){
						if(s[i+1] == 'M') res +=900;
            else if(s[i+1] == 'D') res+=400;
            else {
                res+=100;
								continue;
            }
            i++;
        }
        else if(s[i] == 'L') res+=50;
				else if(s[i] == 'X') {
						if(s[i+1] == 'C') res+=90;
            else if(s[i+1] == 'L') res+=40;
            else {
                res+=10;
								continue;
            }
            i++;
        }
        else if(s[i] == 'V') res+=5;
				else if(s[i] == 'I') {
						if(s[i+1] == 'X') res+=9;
            else if(s[i+1] == 'V') res+=4;
            else if(s[i+1] == 'I') res+=2;
            else {
								res+=1;
                continue;
						}
						i++;
				}
		}
		return res;
}
