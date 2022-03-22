#include <iostream>
using namespace std;

int main()
{
int arr[5];
for(int i=0;i<5;i++)
{
    cin>>arr[i];
}
int s=5;       //if the same question is asked for triplicate pair we run 3 loops

for(int i=0;i<5;i++)
{
    for(int j=i+1;j<5;j++)
    {
        if(arr[i]+arr[j]==s)
        cout<<arr[i]<<" "<<arr[j]<<endl;
    }
}
return 0;
}