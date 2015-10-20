#include <iostream>

using namespace std;

int main() {
    int t, height = 1, n;
    cin>>t;
    for(int i = 0; i < t; i++) {
        cin>>n;
        if (n == 0)
            cout<<1<<endl;
        else if(n % 2 == 0)
            cout<<(1<<(n/2 + 1)) - 1<<endl;
        else
            cout<<(1<<(n/2 + 2)) - 2<<endl;
    }
}
