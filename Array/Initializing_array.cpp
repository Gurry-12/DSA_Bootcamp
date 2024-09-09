#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Enter no. of element in array : " ;
    cin >> n;
    int arr[n];

    cout << " Enter element in array : ";
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> arr[i] ;
    }

    cout << " print element in array : ";
    for ( int i = 0 ; i < n ; i++ )
    {
        cout << arr[i] << " " ;
    }

return 0;

}