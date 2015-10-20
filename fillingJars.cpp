#include <iostream>
#include <cmath>

int main() {
    int m, n;
    unsigned long int a, b, k, average = 0;
    std::cin>>n>>m;
    for(int i = 0; i < m; i++) {
        std::cin>>a>>b>>k;
        average += (b - a + 1) * k;
    }
    std::cout<<(long int)average/n<<std::endl;
}
