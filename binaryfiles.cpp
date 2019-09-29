#include <iostream>
#include<fstream>
using namespace std;
class student{
private:
    int rollno;
    double fees;
    string name;
public:
    void setdata(){
        cout<<"ENTER THE ROLL NUMBER"<<"\n";
        cin>> rollno;
        cout<<"ENTER THE NAME"<<"\n";
        cin>> name;
        cout<<"ENTER THE FEES"<<"\n";
        cin>> fees;

    }
    void getdata(){
        cout<<"YOUR ROLL NUMBER"<<"\n"<<rollno<<"\n";
        cout<<"YOUR NAME"<<"\n"<<name<<"\n";
        cout<<"YOUR TOTAL FEES"<<"\n"<<fees<<"\n";

    }

};
int main(){
    student s1,s2;
    ofstream myfile;
    ifstream myfile1;
    s1.setdata();
    myfile.open("abc.bin",ios::binary);
    myfile.write((char *)(&s1),sizeof(student));
    myfile.close();
    myfile1.open("abc.bin",ios::binary);
    myfile1.read((char *)(&s2),sizeof(student));
        s2.getdata();
    return 0;
}
