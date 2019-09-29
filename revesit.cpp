#include <iostream>
using namespace std;
int len(string a){
    int i=0;
    while(a[i]!='\0'){
        i++;
    }
    return i;
}
void swaps(char& a,char& b){
    char t;
    t=a;
    a=b;
    b=t;
}
string reversit(string temp){
    int length;
    length=len(temp);
    cout<<length;
    if(length<1){
        return temp;
    }
    else{
            int j=0,k=length-1;
            while(j<k){
                    swaps(temp[j],temp[k]);
                    j++;
                    k--;
                }
                return temp;
        }
    }






int main(){
    string abhi="Able was I ere I saw Elba",s;
    s=reversit(abhi);
    cout<<s;
    return 0;
}
