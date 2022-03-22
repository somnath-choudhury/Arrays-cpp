#include <iostream>
using namespace std;

int main()
{
    int arr[9];
    cout<<"Enter the elements: ";

    for(int i=0;i<9;i++)
    {
        cin>>arr[i];
    }

    int ans=0;
    for(int i=0;i<9;i++)
    {
        ans=ans^arr[i];
    }

    cout<<ans;
}