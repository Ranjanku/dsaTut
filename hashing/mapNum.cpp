// can take value upto 1e7.

#include <iostream>
#include <vector>
#include <map>

using namespace std;
int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i = 0; i<num; i++)
    {
        cin>>arr[i];
    }

    map<int, int>mpp;
    for(int i = 0; i<num; i++)
    {
        mpp[arr[i]]++;
    }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        // fetch:
        cout << mpp[number] << endl;
    }
    return 0;
}