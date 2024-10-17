#include <iostream>
using namespace std;
class person {
public :
int id;
string name;
int sal;
virtual void accept()=0;




};
class Doctor: public person {
public :
void accept() {
cout<<"enter name ,id ,sal"<<endl;
cin>>name>>id>>sal;


}
void display() {
cout<<name<<"\t"<<id<<"\t"<<sal<<endl;

}



};
class Astaff: public person {
public :
void accept() {
cout<<"enter the name id salary"<<endl;
cin>>name>>id>>sal;

}void display() {
cout<<name<<"\t"<<id<<"\t"<<sal<<endl;

}



};

class Patient : public person {
public :
void accept() {
cout<<"enter name id sal"<<endl;
cin>>name>>id>>sal;


}void display() {
cout<<name<<"\t"<<id<<"\t"<<sal<<endl;

}


};



int main() {
Doctor d;
Astaff a;
Patient p;
p.accept();
d.accept();
d.accept();
p.display();
d.display();
a.display();



return 0;



}
