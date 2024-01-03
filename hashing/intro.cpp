// Given an array of integers: [1, 2, 1, 3, 2] and we are given some queries: [1, 3, 4, 2, 10]. 
// For each query, we need to find out how many times the number appears in the array. 
// For example, if the query is 1 our answer would be 2, and if the query is 4 the answer will be 0. 


#include <iostream>
using namespace std;

int numHolder(int number, int array[],int size)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(number == array[i]){
            count++;
        }
    }
    return count;
}

int main()
{
    int num = 1;
    int arr[5] = {1,2,1,3,2};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Total number of repetaion: "<<numHolder(num, arr, size)<<endl;
    return 0;
}