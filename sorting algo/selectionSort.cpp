#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before sorting : ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // algo for selection sort.

    for(int i = 0; i<= n-2; i++){
       int mini = i;
       for(int j = i; j <= n-1; j++){
        if(arr[j] < arr[mini])
        {
            mini = j;
        }
       }
       int temp = arr[mini];
       arr[mini] = arr[i];
       arr[i] = temp;
    }
    cout<<"After sorting : ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}