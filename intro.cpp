#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int v, n;
    std::cin>>v>>n;
    int ar[n], ans;
    for(int i = 0; i < n; i++) {
        std::cin>>ar[i];
        if(ar[i] == v)
            ans = i;
    }
    std::cout<<ans<<"\n";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
