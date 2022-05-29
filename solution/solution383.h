#include <string>
#include <iostream>
#include <map>


class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        static const int startLowerCase = static_cast<int>('a');
        int diff[26] = {0};
        
        for (auto it: ransomNote) {
            diff[static_cast<int>(it) - startLowerCase]++;
        }
        for (auto it: magazine) {
            diff[static_cast<int>(it) - startLowerCase]--;
        }
        for (int i = 0; i < 26; i++) {
            if (diff[i] > 0) {
                return false;
            }
        }
        return true;
    }

    void test()
    {
        std::cout << std::endl << "hello"<< std::endl;
        std::cout << ((canConstruct(std::string {"a"}, std::string {"b"}) == true) ? "True" : "False");
    }
};