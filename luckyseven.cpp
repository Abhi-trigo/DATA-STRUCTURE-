#include<iostream>
#include<stdlib.h>
using namespace std;
bool checkseven(int [],int);
int main(){
    int sizes;
    cout<<"ENTER THE SIZE OF ARRAY"<<"\n"<<"\n";
    cin>>sizes;
    int arr[sizes];
    cout<<"ENTER THE SEQUENCE"<<"\n";
    for(int i=0;i<sizes;i++){
        cin>>arr[i];
    }
    bool check;
    check=checkseven(arr,sizes);
    if(check==true)cout<<"TRUE";
    else
        cout<<"FALSE";
    return 0;
}
bool checkseven(int arr[],int sizes){
    int sum=0;
    int temp=0;
    for(int i=0;i<sizes-2;i++){

            sum=arr[i]+arr[i+1]+arr[i+2];
            if(sum==7){
                temp=temp+1;
            }
        }

    if(temp>0){
        return true;
    }
    else{
        return false;
    }

}
