#include <iostream>

int main() {
    int t, n, c, m, chocolates = 0, wrappers = 0;
    std::cin>>t;
    for(int i = 0; i < t; i++) {
        std::cin>>n>>c>>m;
        chocolates = n/c;
        wrappers = chocolates;
        while(wrappers >= m) {
            chocolates++;
            wrappers = wrappers - m;
            wrappers++;
        }
        std::cout<<chocolates<<std::endl;
    }
}
