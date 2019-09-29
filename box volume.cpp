#include <iostream>
using namespace std;
class Box{
private:
    int length;
    int breadth;
    int height;
public:
    Box():length(0),breadth(0),height(0){};
    Box(int a,int b,int c):length(a),breadth(b),height(c){};
    Box(Box &a):length(a.length),breadth(a.breadth),height(a.height){};
    int getlength(){
        return length;
    }
    int getbreadth(){
        return breadth;
    }
    int getheight(){
        return height;
    }
    long long calculatevolume(){
        long vol=0;
        vol=length*breadth*height;
        return vol;
    }
};
bool operator <(Box a1,Box a2){
    if(a1.getlength()<a2.getlength()){
        return true;
    }
    if((a1.getlength()==a2.getlength()) && (a1.getbreadth()<a2.getbreadth())){
        return true;
    }
    if((a1.getlength()==a2.getlength()) && (a1.getbreadth()==a2.getbreadth())&&(a1.getheight()<a2.getheight())){
        return true;
    }
    else{
        return false;
    }
}

ostream& operator <<(ostream& out,Box c2){
    out<<c2.getlength()<<" "<<c2.getbreadth()<<" "<<c2.getheight();
    return out;
}

int main(){
    Box c1,c2;
    cout<<(c1<c2);


    return 0;
}
