#include<iostream>
using namespace std;

int sum_int(int n)
{
    int sum_;
    if (n < 10)
    {
        return n;
    }
    else 
    {
        sum_ = n % 10;
    }

    return sum_ + sum_int( n / 10);
}


int main()
{
    int n = 1234;
    int sum_ = sum_int(n);
    cout << sum_ << endl;



return 0;
}