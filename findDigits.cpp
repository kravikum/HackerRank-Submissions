#include <iostream>

using namespace std;

int main()
{
    int testcase, number, duplicate, counting;
    cin>>testcase;
    for(int testing = 0; testing < testcase; testing++) {
        cin>>number;
        duplicate = number;
        counting = 0;
        while(duplicate) {
            int digit = duplicate % 10;
            duplicate /= 10;
            if(digit != 0 && number % digit == 0) {
                counting ++;
            }
        }
        cout<<counting<<endl;
    }
}
