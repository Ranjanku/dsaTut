#include <iostream>
using namespace std;

void printNum(int n){
    if( n == 0)return; // base case
    cout<<n<<" ";
    printNum(n - 1); // recursive case
}

int main(){
    int n;
    cin>>n;
    printNum(n);
    cout<<endl;
    return 0;
}