#include <iostream>
using namespace std;

//function for insertion sort.
void insertionSort(int n, int arr[]){

    for(int i = 0; i<n; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }

    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i <n; i++){
        cin>>arr[i];
    }
    //
    insertionSort(n, arr);
    return 0;
}