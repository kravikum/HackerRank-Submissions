#include <iostream>

int main() {
    int n, t;
    std::cin>>n>>t;
    int arr[n];
    for(int i = 0; i < n; i++) {
        std::cin>>arr[i];
    }
    for(int i = 0; i < t; i++) {
        int enter, exit;
        std::cin>>enter>>exit;
        int minimum = arr[enter];
        for(int j = enter; j <= exit; j++) {
            minimum = (minimum < arr[j]) ? minimum : arr[j];
        }
        std::cout<<minimum<<"\n";
    }
}
