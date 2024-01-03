#include <iostream>
using namespace std;

void palindromeNumber(int x)
{
    int temp = x;
    int rev = 0;
    
    while(temp!=0)
    {
         
        rev = rev * 10 + temp % 10;//yeh wala
        temp = temp/10;
    }

    if(rev == x){
        cout<<rev;
        cout<<" is palindrome."<<endl;
    }
    else{
        cout<<rev;
        cout<<" is not palindrome."<<endl;
    }
    
}

int main(){
    int n;
    cin>>n;
    palindromeNumber(n);
    cout<<endl;
    return 0;
}