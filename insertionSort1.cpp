#include <iostream>

int main() {
    int n;
    std::cin>>n;
    int ar[n];
    for(int i = 0; i < n; i++) {
        std::cin>>ar[i];
    }
    int num = ar[n - 1];
    for(int i = n-2; i >= -1; i--) {
        if(i == -1) {
            ar[0] = num;
        }
        else if(ar[i] > num) {
            ar[i + 1] = ar[i];
        }
        else {
            ar[i + 1] = num;
            for(int j = 0; j < n; j++)
                std::cout<<ar[j]<<" ";
            std::cout<<"\n";
            break;
        }
        for(int j = 0; j < n; j++) {
            std::cout<<ar[j]<<" ";
        }
        std::cout<<"\n";
    }
}
