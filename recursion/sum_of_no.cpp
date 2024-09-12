// print n natural no. with recursion 

#include<iostream>
using namespace std;

//reverse ; 
// void print_(int n) {
//     if (n != 0)
//     cout <<n << " ";
//     else
//     return print_(n -1);
// }

void print_( int num ) {
    
    if (num == 0){
    return;
}    
    return print_(num - 1);
    cout <<num << " ";
    
}


int main(){
    int n= 10;
    print_(n);
    return 0;
}