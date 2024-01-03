#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){

        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }
    cout<<"after sorting : ";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i= 0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"array before sorting : ";
        for(int i= 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    bubbleSort(arr, n);
    cout<<endl;
    return 0;
}