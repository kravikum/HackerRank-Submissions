#include <iostream>

using namespace std;

int main() {
    uint32_t l, r, max;
    cin>>l>>r;
    max = l ^ r;
    for(int j = l; j < r; j++) {
        for(int i = j+1; i <= r; i++) {
            max = (max < (j ^ i) ? (j ^ i) : max);
        }
    }
    cout<<max;
    return 0;
}
