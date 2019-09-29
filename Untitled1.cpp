#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int i = 0;
    static int *a = (int*)malloc(sizeof(int)*5);
    *(a) = 55;
    *(a+1) = 77;
    *(a+2) = 88;

    for (i = 0;i<5;i++)
    {
        //cout<<a[i]<<" ";

    }

     a = (int*) realloc(a,sizeof(int)*3);

    *(a+6) = 55;
    *(a+5) = 77;
    *(a+7) = 88;
    for (i = 0;i<15;i++)
    {
        cout<<a[i]<<" ";

    }
}
