#include <iostream>

using namespace std;

int main() {
    int n, a = 0, b;
    cin>>n;
    for(int i = 0; i < n; i++) {
        cin>>b;
        a ^= b;
    }
    cout<<a;
    return 0;
}
