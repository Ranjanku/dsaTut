#include <iostream>
using namespace std;

int insert(int arr[],int n,int x, int cap, int pos){
    if(n == cap) return n;
    int idx = pos -1;
    for(int i = n-1; i >= idx; i--) arr[i+1] = arr[i];
    arr[idx]
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    //insertion at given index.
    int x;
    cin >>x; //element need to insert.

    int pos ;
    cin>>pos; //index to element need to be inserted.
    int idx = pos-1;

    cout<<insert(arr[], n, int x,)

}