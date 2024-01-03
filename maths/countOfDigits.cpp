/*
Input: 256
Output: 3

Input: 75
Output: 2

Input: 5
Output: 1

*/

#include <iostream>
using namespace std;

void countDigit(int n)
{
    int count = 0;
    if(n==0)
    cout<<"NUMBER OF DIGIT : "<<count;
    return;
    while(n!=0)
    {
        n = n/10;
        count++;
    }
    cout<<"NUMBER OF DIGITS : "<<count<<endl;
    
}

int main(){
    int n;
    cin>>n;
    countDigit(n);
    return 0;

}