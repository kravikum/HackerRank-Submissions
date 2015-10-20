#include <iostream>

using namespace std;

int main() {
    int n;
    uint32_t num;
    cin>>n;
    for(int i = 0; i < n; i++) {
        cin>>num;
        cout<<~num<<endl;
    }
}
