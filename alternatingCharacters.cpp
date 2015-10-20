#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    string str;
    for(int i = 0; i < t; i++) {
        cin>>str;
        int deletions = 0;
        char ch = str.at(0);
        for(int j = 1; j< str.length(); j++) {
            if(str.at(j) == ch)
                deletions++;
            else
                ch = str[j];
        }
        cout<<deletions<<endl;
    }
}
