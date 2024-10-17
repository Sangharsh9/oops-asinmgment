/*design c++ class with data menber for real and imginary part provide defualt and para contructor and write a program to perform arthimetic operation upto complex number using operator overloading */
#include <iostream>
using namespace std;

class complex {
int r;
int i;

public :
complex(){
r=0;
i=0;
}
complex(int rr,int im){
r=rr;
i=im;

}
void display(){
if(i>=0){
cout<<r<<"+"<<i<<"i"<<endl;

}
else{
cout<<r<< "" <<i<<"i"<<endl;
}

}
complex operator+(complex s);
complex operator-(complex s);
complex operator*(complex s);
complex operator/(complex s);




}s1,s2,s3;


complex complex::operator+(complex s2){
s3.r=r+s2.r;
s3.i=i +s2.i;

return s3;
}
complex complex::operator-(complex s2){
s3.r=r-s2.r;
s3.i=i-s2.i;
return s3;

}
complex complex:: operator*(complex s2){
s3.r=r*s2.r - i *s2.i;
s3.i=r * s2.i + i *s2.r;
return s3;

}
complex complex :: operator/(complex s2){
s3.r=(r*s2.r  + i * s2.i )/s2.r* s2.r + s2.i * s2.i;
s3.i= (-r* s2.i + i * s2.r)/s2.r* s2.r + s2.i * s2.i;


return s3; 
}

int main() {
complex c3;
cout<<"enter the real and imaginary part"<<endl;
int r1,i1;
 
cin>>r1>>i1;
complex s1(r1,i1);
cout<<"enter the real and imaginary part"<<endl;
int r2,i2;
cin>>r2>>i2;
 complex s2 (r2,i2);


int ch;
cout<<" 1 to add"<<endl<<" 2 to subtract"<<endl<<" 3 to multiply"<<endl<<"4 to divide"<<endl;
cin>>ch;
while(ch!=0){

switch(ch) {

case 1:
s3= s1+s2;
s3.display();
break;
case 2: 
s1-s2;
s3.display();
break;
case 3 :
s1 * s2;
s3.display();
break;
case 4 :
s1/s2;
s3.display();
break;




}

cout<<" 1 to add"<<endl<<" 2 to subtract"<<endl<<" 3 to multiply"<<endl<<"4 to divide"<<endl;
cin>>ch;
}
return 0;



}
