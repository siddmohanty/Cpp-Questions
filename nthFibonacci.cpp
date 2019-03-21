//Finding 'n'th Fibonacci
#include<iostream>
using namespace std;
int fib(int n1,int n2,int k, int n)
{
    if(k!=n){
    k++;
    return fib(n2,n1+n2,k,n);
}
    else
    {
        return n2;
    }
    
}

int main()
{
    int n;
    cin>>n;
    cout<<fib(0,1,2,n);
    return 0;
}