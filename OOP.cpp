#include<iostream>
using namespace std;

class studentInfo {
private :
string name;
int roll_no;
string Class;
char div;
string DOB;
char blood_group;
long contact;
string address;
string driving_licensce;
string other;

public :
studentInfo() {
name = " ";
roll_no =0;
Class = " ";
div = ' ';
DOB = " ";
blood_group = ' ';
contact = 0;
address = " ";
driving_licensce = " ";
other = " ";
}

~studentInfo() {
cout<<"Destructor is invoked";
}

void getdata();
void displaydata();	
};

void studentInfo :: getdata() {
cout<<"Enter name : ";
getline(cin,name);
cout<<"Enter roll no : ";
cin>>roll_no;
cout<<"Enter Class : ";
cin>>Class;
cout<<"Enter div : ";
cin>>div;
cout<<"Enter DOB : ";
cin>>DOB;
cout<<"Enter blood group : ";
cin>>blood_group;
cout<<"Enter contact : ";
cin>>contact;
cout<<"Enter address : ";
cin>>address;
cout<<"Enter driving licensce no : ";
cin>>driving_licensce;
cout<<"Enter other info : ";
cin>>other;
}

void studentInfo :: displaydata() {
cout<<"Name is : "<<name<<endl;
cout<<"Roll no is : "<<roll_no<<endl;
cout<<"Class is : "<<Class<<endl;
cout<<"Div is : "<<div<<endl;
cout<<"DOB is : "<<DOB<<endl;
cout<<"Bloog group is : "<<blood_group<<endl;
cout<<"Contact is : "<<contact<<endl;
cout<<"Address is : "<<address<<endl;
cout<<"Driving Licensce no. is : "<<driving_licensce<<endl;
cout<<"other info : "<<other<<endl;
}

int main() {
studentInfo student;
student.getdata();
student.displaydata();
return 0;
}
