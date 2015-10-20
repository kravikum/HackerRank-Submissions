#include <iostream>
#include <string>
#include <algorithm>

int main () {
    int t;
    std::cin>>t;
    for(int i = 0; i < t; i++) {
        std::string str;
        int counter = 0;
        std::cin>>str;
        std::string rev = str;
        std::reverse(rev.begin(), rev.end());
        for(int j = 1; j < str.length(); j++) {
            if(std::abs(str[j] - str[j-1]) != std::abs(rev[j] - rev[j-1])) {
                counter = 1;
                break;
            }
        }
        if(counter == 1)
            std::cout<<"Not Funny\n";
        else
            std::cout<<"Funny\n";
    }
}
