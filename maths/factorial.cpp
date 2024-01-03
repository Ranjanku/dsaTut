#include <iostream>
using namespace std;

/*

using for loop : Time complexity O(n), auxilary space O(1)

int fact(int n)
{
    int res = 1 ;
    for(int i = n; i>0; i--)
    {
        res = res*i;
    }
    return res;
}
*/

//using recursion

int fact(int n)
{
    if(n == 0 || n==1) return 1;
    int product = n * fact(n-1);
    return product;
}




int main(){
    int num ;
    cin>>num;
    cout<<fact(num)<<endl;
    return 0;
}