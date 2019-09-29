#include <iostream>
using namespace std;
class counter{ //class counter
private:
    int countes;
public:
    counter():countes(0){}; //constructor without arguement
    counter(int a):countes(a){}; //constructor with arguement
    int getcount(){
        return countes;
    }
    void operator ++(){ //prefix operator overloading
        ++countes;
    }
    void operator ++(int){ //postfix operator overloading
        countes++;
    }
};

int main(){
    counter c1(5),c2;
    cout<<c1.getcount()<<"\n"<<c2.getcount()<<"\n";
    ++c1;
    ++c1;
    ++c2;
    cout<<c1.getcount()<<"\n"<<c2.getcount()<<"\n";
return 0;
}

