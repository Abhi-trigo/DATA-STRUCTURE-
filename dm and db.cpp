#include <iostream>
using namespace std;
class db;
class dm{
private:
    float meter,centi;// data ember
    float convfeet,convinch;
public:
    void getvalue(float a,float b){// class with parameters
        meter=a;
        centi=b;
    }
    void getvalue(){// class without parameters
        cout<<"ENTER THE VALUE IN METER"<<"\n";
        cin>>meter;
        cout<<"ENETER THE VALUE IN CENTIMETER"<<"\n";
        cin>>centi;
    }
    void convert(){
        meter= meter*3.280;
        centi= centi*0.393;
    }
    friend void add(dm,db);
};

class db{//class of db
private :
    float feet,inches;
public :
    void getvalue(float a,float b){// class with parameters
        feet=a;
        inches=b;
    }
    void getvalue(){// class without parameters
        cout<<"ENTER THE VALUE IN feet"<<"\n";
        cin>>feet;
        cout<<"ENETER THE VALUE IN inches"<<"\n";
        cin>>inches;
    }
    void convert(){
        feet= feet*0.304;
        inches= inches*2.54;
    }
     friend void add(dm,db);
};
     void add(dm objectA,db objectB){
        cout<<"YOUR ANS IS "<<"\n"<<objectA.meter+objectB.feet<<"\n"<<objectA.centi+objectB.inches<<"\n";
}
int main(){
    dm x1;
    db x2;
    int choice;
    while(1){
        cout<<"ENETER THE CHOICE"<<"\n"<<"1. CALL WITHOUT VALUE"<<"\n"<<"2. CALL WITH VALUE"<<"\n"<<"3. ANS IN METERS AND CENTIMETERS"<<"\n"<<"4. ANS IN FEET AND INCHES"<<"\n";
        cin>>choice;
        switch(choice){
            case 1: x1.getvalue();
                    x2.getvalue();
                    break;
            case 2: float a,b,c,d;
                    cout<<"ENTER THE VALUE IN METER AND CENTIMETER"<<"\n";
                    cin>>a>>b;
                    cout<<"ENTER THE VALUE IN FEET AND INCHES"<<"\n";
                    cin>>c>>d;
                    x1.getvalue(a,b);
                    x2.getvalue(c,d);
                    break;
            case 3: x2.convert();
                    add(x1,x2);
                    break;
            case 4: x1.convert();
                    add(x1,x2);
                    break;
            default: cout<<"SORRY WRONG CHOICE ENTERED";
        }
    }

return 0;
}
