#include <iostream>
using namespace std;

class sol{

    public:
    int digitsInFact(int N)
    {
        if (N < 0) return 0;
        if(N==1 || N == 0) return 1;
        double res = 1;
        for(int i = 1; i <= N; i++)
        {
            res = res + log10(i);
        }
        return res;
    }

};

int main(){
    int n;
    cin>>n;
    sol ob;
    cout<<"No of digits in factorial : "<<ob.digitsInFact(n)<<endl;
    return 0;
}