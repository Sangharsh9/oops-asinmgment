/* implement the cpp program consisting of bas class with data member such as roll,name,subject the derived clas consists data member such as subject code ,marks ,end sem marks the sport class consists of sport name and sport grade and finally result class consists of total marks along with % display student grade card by using result class objecect .progem should have biuld master table 2 list the table 3 insrt newq entry 4 delete old entry 5 edit an entry 6 search the patricular student record use the concrpt of inheritience .  */

#include <iostream>
#include <cstring>
using namespace std;
int i,n=0;

class Student 
{
public:
int prn;
string name;
void get()
{
cout<<"enter name and prn"<<endl;
cin>>name>>prn;


}

};
class Test : public Student {
public: 
int c1[5];//,c2,c3,c4,c5;

int e1[5];//,e2,e3,e4,e5;
string s1[5];
void grtm()
{
n++;
cout<<"\n Enter the subject Details and Marks";
for( i=0;i<5;i++)
{
cout<<"\n Enter the subject  name";
cin>>s1[i];
cout<<"\n Enter the CIA and Ese marks of "<<s1[i];
cin>>c1[i]>>e1[i];

}
/*
cout<<"enter cia and end-sem of DM "<<endl;
cin>>c1>>e1;
cout<<"enter cia and end-sem of OPP "<<endl;
cin>>c2>>e2;
cout<<"enter cia and end-sem of DSPS "<<endl;
cin>>c3>>e3;
cout<<"enter cia and end-sem of SPM "<<endl;
cin>>c4>>e4;
cout<<"enter cia and end-sem of UHV "<<endl;
cin>>c5>>e5;
*/
}
void display()

{
/*cout<<"prn"<<"\t"<<"name"<<"\t"<<"DM CIA"<<"\t"<<"DM END"<<"\t"<<"OPP cia and end sem"<<"\t"<<"dsps cia and end "<<"spm cia and end"<<"\t"<<"uhv cia and end sem"<<endl;
*/
int per=0;
cout<<"\n"<<prn<<"\t"<<name;
for(int j=0;j<5;j++)
{
per+=c1[j];
per+=e1[j];
cout<<"\n"<<s1[j]<<"\t"<<c1[j]<<"\t"<<e1[j];//<<"\t"<<c2<<e2<<"\t"<<c3<<e3<<"\t"<<c4<<e4<<"\t"<<c5<<e5<<endl;
}
float a=per/5;
cout<<"  percentage :"<<a<<endl;

}

}t[100];



int main() 
{
int ch;
do
{
cout<<"\n Enter the choice";
cin>>ch;
switch(ch){

case 1:
 //for(int i=0;i<n;i++){
 t[n].get();
 t[n].grtm();
 //}
 break;
 case 2: 
 cout<<"\n PRN\tName";
 for(int i=0;i<n;i++){
 t[i].display();
 }
 break;
 }
 }while(ch!=0);
return 0;
}
