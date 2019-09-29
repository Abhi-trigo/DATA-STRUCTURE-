#include<iostream>
using namespace std;

int count_steps(int n)
{
    if(n==1)return 1;
    if(n==2)return 2;


    return (count_steps(n-1)+count_steps(n-2));
}

int main()
{
    int n;
    cout<<"Enter the no. of steps: ";
    cin>>n;
    cout<<count_steps(n);

    return 0;
}
