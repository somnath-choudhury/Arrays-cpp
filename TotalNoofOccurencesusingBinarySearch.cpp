#include <iostream>
using namespace std;

int firstOcc(int arr[],int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;

    int mid = start+(end-start)/2;

    while (start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            end = mid -1;
        }

        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}

int lastOcc(int arr[],int size, int key)
{
    int start = 0;
    int end = size-1;
    int ans = -1;

    int mid = start+(end-start)/2;

    while (start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }

        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}

int main()
{
    int arr[8] = {1,2,3,3,3,5,5,6};

    cout<<"First Occurence at index  "<<firstOcc(arr,8,3)<<endl;

    cout<<"Last Occurence at index  "<<lastOcc(arr,8,3)<<endl;

    cout<<"Total No. of occurences "<<(lastOcc(arr,8,3)-firstOcc(arr,8,3))+1<<endl;
}