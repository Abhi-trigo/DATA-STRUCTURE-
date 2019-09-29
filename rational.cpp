#include <iostream>
using namespace std;

class rational{
private:
    int numerator,denominator;
public:
    rational():numerator(0),denominator(0){};
    rational(int a,int b):numerator(a),denominator(b){};
    void reduce(){
        int num,denom;
        num=numerator;
        denom=denominator;
        if(num<denom){
            int t;
            t=num;
            num=denom;
            denom=t;
        }
        while(num%denom!=0){
            int p;
            p=num%denom;
            num=denom;
            denom=p;
        }
        numerator=numerator/denom;
        denominator=denominator/denom;
        cout<<"THE REDUCED NUMERATOR "<<numerator<<"\n"<<"THE REDUCED DENOMINATOR "<<denominator<<"\n";
    }
     rational operator + (rational c1){
        rational temp;
        temp.numerator= numerator+c1.numerator;
        temp.denominator= denominator+c1.denominator;
        return temp;
    }
    int getnum(){
        return numerator;
    }
    int getdenom(){
        return denominator;
    }
    int& setnum(){
        cout<<"ENTER THE NUMERATOR";
        return numerator;
    }
    int& setdenom(){
        cout<<"ENTER THE DENOMINATOR";
        return denominator;

    }
};

ostream& operator <<(ostream& out,rational& c2){
    out<<c2.getnum()<<"-"<<c2.getdenom()<<"\n";
    return out;
}
istream& operator >>(istream &input,rational &c3){
    input>>c3.setnum();
    input>>c3.setdenom();
    return input;
}


int main(){
    rational c1(16,20),c2,c3;
    cin>>c2;
    c1.reduce();
    c2.reduce();
    c3=c1+c2;
    cout <<c3.getnum()<<c3.getdenom();

}
