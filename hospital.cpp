#include <iostream>
#include <time.h>
using namespace std;
struct date{
        int day;
        int month;
        int year;
    };
struct info{
    string name;
    string disease;
    struct date root1;
    struct date root2;
    struct date root3;

};
class hospital{
protected:
    struct info root;
public:
    //hospital():root.name('/0'):root.disease('/0'):{};
    void getinfo(){
        cout<<"ENTER THE NAME"<<"\n";
        cin>>root.name;
        cout<<"\n"<<"ENTER THE DATE OF BIRHT"<<"\n"<<"ENTER THE DAY"<<"\n";
        cin>>root.root1.day;
        cout<<"ENTER THE MONTH"<<"\n";
        cin>>root.root1.month;
        cout<<"ENTER THE YEAR"<<"\n";
        cin>>root.root1.year;
        cout<<"\n"<<"ENTER THE DATE OF ADDMISSION"<<"\n"<<"ENTER THE DAY"<<"\n";
        cin>>root.root1.day;
        cout<<"ENTER THE MONTH"<<"\n";
        cin>>root.root1.month;
        cout<<"ENTER THE YEAR"<<"\n";
        cin>>root.root1.year;
        cout<<"\n"<<"ENETER THE DISEASE"<<"\n";
        cin>>root.disease;
    }
    void getdischarge(){
        cout<<"\n"<<"ENTER THE DATE OF DISCHARGE"<<"\n"<<"ENTER THE DAY"<<"\n";
        cin>>root.root2.day;
        cout<<"ENTER THE MONTH"<<"\n";
        cin>>root.root2.month;
        cout<<"ENTER THE YEAR"<<"\n";
        cin>>root.root2.year;
    }
    void display(){

        cout<<"NAME"<<"\t"<<root.name<<"\n"<<"DATE OF ADDMISSION"<<"\t"<<root.root1.day<<"/"<<root.root1.month<<"/"<<root.root1.year<<"\n"<<"DISEASE"<<"\t"<<root.disease<<"\n"<<"DISCHARGE"<<"\t"<<root.root2.day<<"/"<<root.root2.month<<"/"<<root.root2.year<<"\n";
    }
};
class derived : public hospital{
private:
    string dates;
public:
    cout<<_strdate();

};



int main(){
    hospital c1;
    c1.getinfo();
    c1.getdischarge();
    c1.display();
    return 0;
}
