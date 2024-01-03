#include <iostream>
using namespace std;

int trailingZero(int n)
{
    int res = 0;
    for(int i = 5; i <= n; i = i * 5)
    {
        res = res + (n/i);
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    cout<<"Trailing zeros for "<<n<<"! is : "<<trailingZero(n)<<endl;
    return 0;
}