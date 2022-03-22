#include <iostream>
using namespace std;

int pivotIndex(int arr[],int size)
{
    int start = 0;
    int end = size-1;

    int mid = start+(end-start)/2;

    while (start <  end)
    {
        if(arr[mid] >= arr[0])
        {
            start = mid + 1;
        }

        
        else{
            end = mid;  //NOTE
        }
        mid = start+(end-start)/2;
    }
    return start;    //We can also return e
}

int main()
{
    int arr[5] = {3,8,10,17,1};

    cout<<"Pivot element Index is: "<<pivotIndex(arr,5) <<endl;
}