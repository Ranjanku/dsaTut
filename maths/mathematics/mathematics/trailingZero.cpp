//
//  trailingZero.cpp
//  mathematics
//
//  Created by Ranjan Kumar on 27/12/23.
//

#include <iostream>
using namespace std;

int trailingZero(int n)
{
    int res = 0;
    for(int i = 5; i <= n; i = i*5){
        res =res + (n/i);
    }
    return res;
}


int main(){
    int n;
    cin>>n;
    cout<<trailingZero(n);
    return 0;
}
