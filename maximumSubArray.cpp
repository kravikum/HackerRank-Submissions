#include <iostream>

int main() {
    int t;
    std::cin>>t;
    for(int i = 0; i < t; i++) {
        int n;
        std::cin>>n;
        int numbers[n+1], S1[n+1], S2[n+1];
        for(int j = 1; j <= n; j++) {
            std::cin>>numbers[j];
        }
        if(numbers[1] < 0)
            S1[0] = numbers[1];
        else
            S1[0] = 0;
        S2[0] = 0;
        for(int k = 1; k <= n; k++) {
            if(S1[k - 1] < 0)
                S1[k] = std::max(S1[k-1], numbers[k]);
            else
                S1[k] = std::max(S1[k - 1] + numbers[k], S1[k - 1]);
            S2[k] = std::max(S2[k - 1] + numbers[k], numbers[k]);
        }
        int maxi = S2[1];
        for(int m = 1; m <= n; m++)
            maxi = (maxi < S2[m]) ? S2[m] : maxi;
        std::cout<<maxi<<" "<<S1[n]<<"\n";
    }
}
