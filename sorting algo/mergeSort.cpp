#include <iostream>
#include <vector>
using namespace std;

void merge(vector <int> &arr, int low, int mid, int high){
    vector <int> temp;
    int left = low;
    int right = mid+1;

    //storing element in the temp array in a sorted manner
    while(left <= mid && right <= high){
        if(arr[left]<= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    //if elements on the left half are still left.
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    //if elements on the left half are still left.
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    //....transfering temp element in main array : 
    for(int i = low; i<= high; i++){
        arr[i] = temp[i-low];
    }
    
};

void mergeSort(vector<int> &arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);     // left half arr
    mergeSort(arr, mid + 1, high); // right half arr
    merge(arr, low, mid, high);
}


int main(){
    vector<int>arr = {9, 4, 7, 6, 3, 1, 5};
    int n = 7;
    mergeSort(arr,0 , n-1);
    cout<<"sorted array : ";
    for(int i = 0; i< n; i++)cout<<arr[i]<<" ";
    return 0;
}