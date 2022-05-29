#include <iostream>
#include <string>
#include <functional>
#include <map>
#include <vector>

std::size_t hash(const std::string&);
bool isValid(std::string&);

int main(){
    std::string str = "({[]})";
    std::cout<<isValid(str)<<std::endl;
    return 0;
}

std::size_t hash(const std::string& str){
    return std::hash<std::string>()(str);
}

bool isValid(std::string& str){
    std::vector<std::size_t> stack;
    // make a hash table
    std::map<size_t, size_t> brakets;
    brakets.insert(std::make_pair(hash("]"), hash("[")));
    brakets.insert(std::make_pair(hash("}"), hash("{")));
    brakets.insert(std::make_pair(hash(")"), hash("(")));
    for (size_t i = 0; i < str.size(); i++)
    {
        std::size_t current = hash(str.substr(i, 1));
        if(brakets.count(current) == 0) stack.push_back(current); //add new opening braket
        else{
            if(brakets[current] == stack.back()) stack.pop_back(); //delete a valid pair of brakets
            else return 0; //Parentheses is invalid
        }
    }
    return stack.empty();
}