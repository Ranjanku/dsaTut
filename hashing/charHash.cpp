#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;

    //pre compute
    // we know that ascii have max value can have 256. for that we need hash of 256

    int hash[256] = {0};
    {
        for(int i= 0;i<s.size();i++)
        {
            hash[s[i]]++;
        }
    }
    
    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;
        cout<<"hash value of "<<c<<" : "<<hash[c]<<endl;
    }
}