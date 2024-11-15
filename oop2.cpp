#include <iostream>
#include <string.h>
using namespace std;
int n=0;
class book{
public:
int stock,cost;
char *tt,*au,*pu;

book(){
tt=new char;
au=new char;
pu=new char;

}
public:
void display(){
cout<<"tilte"<<"\t"<<"author\t"<<"pu\t"<<"price\t"<<"stock"<<endl;
cout<<tt<<"	"<<au<<"	"<<pu<<"	"<<stock<<"	"<<cost;


}
void accept(){

cin>>tt>>au>>pu>>cost>>stock;
n++;
}

}b[10];
void search(){
int count;
int total;
int flag=0;
int cost=0;
char *name,*auth;
cout<<"enter book and author name"<<endl;
name=new char;
auth=new char;
for(int i=0;i<n;i++){
if(strcmp(name,b[i].tt)==0 && strcmp(auth,b[i].au)==0){
b[i].display();
cout<<"enter the number of count required"<<endl;
cin>>count;
if(count<b[i].stock){
cost =b[i].cost *count;
cout<<"total cost is "<<cost;
}
else{
cout<<"book stock not available"<<endl;

}
break;

}
if(flag==1){
cout<<"book is not available"<<endl;
}
}

}

int main(){
int ch;
cout<<"1 to accept"<<"	"<<"2 to display"<<"	"<<"3 to search"<<endl;
cin>>ch;
while(ch!=0){

switch(ch){

case 1:
cout<<"enter the n"<<endl;
int su;
cin>>su;

for(int i=n;i<su;i++){
cout<<"tilte"<<"\t"<<"author\t"<<"pu\t"<<"price\t"<<"stock"<<endl;
b[i].accept();
}
break;
case 2:
for(int i=0;i<n;i++){
b[i].display();
break;
}
case 3:
search();
break;











}


cout<<"1 to accept"<<"	"<<"2 to display"<<"	"<<"3 to search"<<endl;
cin>>ch;








}





return 0;
}
