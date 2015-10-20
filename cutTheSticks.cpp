#include <iostream>

int main() {
    int n;
    std::cin>>n;
    int sticks[n], sticks_left = n;
    for(int i = 0; i < n; i++) {
        std::cin>>sticks[i];
    }
    std::cout<<sticks_left<<"\n";
    while(sticks_left > 0) {
        int min_length = 10000;
        for(int i = 0; i < n; i++) {
            if(sticks[i] <= 0)
                continue;
            if(min_length > sticks[i])
                min_length = sticks[i];
        }
        for(int i = 0; i < n; i++) {
            if(sticks[i] <= 0)
                continue;
            sticks[i] -= min_length;
            if(sticks[i] <= 0)
                sticks_left--;
        }
        if(sticks_left != 0)
            std::cout<<sticks_left<<"\n";
    }
}
