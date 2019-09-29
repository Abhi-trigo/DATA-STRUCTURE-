#include <iostream>
#include <stdio.h>
using namespace std;
int strlen(string);
void palindrome(string,int);
int main(){
    string pd;
    int length;
    cout <<"ENTER THE PALINDROME STRING"<<"\n";
    cin >>pd;
    length=strlen(pd);
    palindrome(pd,length);
    return 0;
}
int strlen(string pd){
    int i=0;
    while(pd[i]!='\0'){
        i++;
    }
    cout <<"\n"<<i;
    return i;
}
void palindrome(string pd,int length){
    char pd1[length];
    int i=length,j=0,k=0;
    while(i!=0){
        pd1[j]=pd[i];
        i--;
        j++;
    }
    cout<<j;
    for(k=0;k<=length;k++){
            printf("%c",pd1[k]);
    }
}
