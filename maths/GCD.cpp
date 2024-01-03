#include <iostream>
#include <math.h>

using namespace std;

//  brute force approch :-
// int gcd(int a, int b){
//     int res = min(a,b);
//     while(res >0)
//     {
//         if(a%res == 0 && b%res == 0)
//         {
//             break;
//         }
//         res--;
//     }
//     return res;
// }

// using reccursion
// Recursive function to return gcd of a and b

// int gcd(int a, int b)
// {
// 	// Everything divides 0
// 	if (a == 0)
// 	return b;
// 	if (b == 0)
// 	return a;

// 	// base case
// 	if (a == b)
// 		return a;

// 	// a is greater
// 	if (a > b)
// 		return gcd(a-b, b);
// 	return gcd(a, b-a);
// }

int gcd(int a, int b){
    while(a!=b){
        if(a>b){
            a = a - b;
        }
        else{
            b = b -a;
        }
    }
    
    return a;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}