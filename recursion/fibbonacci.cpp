#include <iostream>
using namespace std;

//function 
int fibonacci(int n){
    if(n == 0 || n == 1){
    return n;
    }
    // if ( n == 1)
    // return 1;

    return fibonacci(n - 1 ) + fibonacci(n - 2);
}

int main ()
{
    

    for (int i = 0 ; i <= 5 ; i ++)
    cout << fibonacci(i) << " "; 
    return 0;
}

