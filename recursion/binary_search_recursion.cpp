#include<iostream>
using namespace std;

bool binary_search(int arr[], int target,int start , int end )
{
    if (start > end)
    return false;
    int mid = (start + end) / 2;
    if ( arr[mid] == target )
    {
        return true;
    }
    else if (arr[mid] > target)
    {
        binary_search(arr, target,start, mid - 1);
    }
    else if (arr[mid] < target )
    {
        binary_search(arr, target,mid +1, end);
    }
    
    
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int end = sizeof(arr)/sizeof(arr[0]);
    bool value = binary_search(arr,5,0, end);
    if(value == true)
    {
        cout<< "Value is found " << endl;
    }
    else
    cout << "Not Found " << endl;


return 0;
}