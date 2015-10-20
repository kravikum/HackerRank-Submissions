#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    string temp;
    cin>>t;
    for(int i = 0; i < t; i++) {
        cin>>temp;
        int l = 0, r, ans = 0;
        r = temp.length() - 1;
        while(l < r) {
            ans += abs(((int)temp[l] - (int)temp[r]));
            l++;
            r--;
        }
        cout<<ans<<endl;
    }
}
