#include <iostream>
using namespace std;

int cal(char c,string s)
{
    int count = 0;
    for(int i = 0; i< s.size(); i++)
    {
        if(s[i] == c)
        {
            count++;
        }
    }
    return count;
}

int main(){
    char a ='a' ,c ='c',z='z';
    string s = "abcdabefc";
    cout<<"a : "<<cal(a, s)<<endl;
    cout<<"c : "<<cal(c, s)<<endl;
    cout<<"z : "<<cal(z, s)<<endl;
}