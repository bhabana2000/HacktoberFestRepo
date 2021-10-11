#include<iostream>

using namespace std;

int main()
{
    int n, a = 0, b = 1, s;
    cout<<"Enter the no. of Fibonacci term : ";
    cin>>n;
    
    cout<<a<<" "<<b<<" ";
    for (int i = 1; i < n; i++)
    {
        s = a + b;
        cout<<c<<" ";
        a = b;
        b = s;
    }
    cout<<endl;
    return 0;
}

