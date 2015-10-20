#include <iostream>

int main() {
    int n;
    std::cin>>n;
    int ar[n];
    for(int i = 0; i < n; i++) {
        std::cin>>ar[i];
    }
    for(int i = 1; i < n; i++) {
        if(ar[i] < ar[i - 1]) {
            int x = i;
            int num = ar[x];
            while(ar[x] < ar[x - 1]) {
                if(x == 0) {
                    break;
                }
                ar[x] = ar[x - 1];
                ar[x - 1] = num;
                x--;
            }
            ar[x] = num;
        }
        for(int j = 0; j < n; j++) {
            std::cout<<ar[j]<<" ";
        }
        std::cout<<"\n";
    }
}
