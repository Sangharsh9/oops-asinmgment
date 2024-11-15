#include <iostream>
using namespace std;
class person {
public :
int id;
string name;
int sal;
virtual void accept()=0;
virtual void display()=0;



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
Astaff a[5];
Patient p[5];
int ch;
cout<<"1 to accept doctor"<<endl<<"2 to  accept patient "<<endl<<"3 to  accept astaff"<<endl<<"4 to display patient "<<endl<<"5 to display staff "<<endl<<"6 to display doctor"<<endl;
cin>>ch;
while(ch!=0){
switch (ch){
case 1 :
d.accept();
break;
case 2 :
for(int i=0;i<5;i++){
p[i].accpet();


}
break;
case 3 :
for(int i=0;i<5;i++){
a[i].accept();

}
break;
case 4 :
for(int i=0;i<5;i++){
p[i].display();


}
break;
case 5:
for(int i=0;i<5;i++){
a[i].display();


}
break;
case 6:
d.display();
break;

}cout<<"1 to accept doctor"<<endl<<"2 to  accept patient "<<endl<<"3 to  accept astaff"<<endl<<"4 to display patient "<<endl<<"5 to display staff "<<endl<<"6 to display doctor"<<endl;
cin>>ch;






}





return 0;



}
