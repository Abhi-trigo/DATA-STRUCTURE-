#include <iostream>
using namespace std;
int main(){
    int a[5],counter;
    cout<<"ENTER THE RANGES IN ARRAY"<<"\n"<<"\n";
    for(int i=0;i<5;i++){
     cin>>a[i];
    }
    if((a[0]<a[1])&&(a[2]<a[3])){
        int j=a[0],k=a[2];
        while(j<=a[1]&& k<=a[3]){
            if(j==k){
                counter++;
            }
            j++;
            k++;
        }
    }
    else{
        cout<<"WATCH OUT YOUR RANGE"<<"\n"<<"\n";
    }
    if(counter==a[4]){
        cout<<"TRUE"<<"\n"<<"\n";
    }
    return 0;
}
