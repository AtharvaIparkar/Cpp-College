#include<iostream>
using namespace std;

class publication {
public :
string title;
float price;
};

class book : public publication {
public :
int pagecount;

void getdata();
void display();
}; 

class tape : public publication {
public :
float time;

void getdata();
void display();
};

void book :: getdata() {
cout<<"Enter the title of book : ";
cin>>title;
cout<<"Enter the price of book: ";
cin>>price;
cout<<"Enter no. of pages : ";
cin>>pagecount;
cout<<"\n";
}

void tape :: getdata() {
cout<<"Enter the title of cassete : ";
cin>>title;
cout<<"Enter the price of casette : ";
cin>>price;
cout<<"Enter time in minutes : ";
cin>>time;
cout<<"\n";
}

void book :: display() {
cout<<"No. of pages : ";
if(pagecount <= 0) {
cout<<"invalid"<<endl;
title = " ";
price = 0;
} else {
cout<<pagecount<<endl;
}
cout<<"The title of book is : "<<title<<endl;
cout<<"The price of book is : "<<price<<endl<<endl;
}

void tape :: display() {
cout<<"The title of cassete is : "<<title<<endl;
cout<<"The price of cassete is : "<<price<<endl;
cout<<"Time in minutes : "<<time<<" min"<<endl;
}


int main() {
book b;
tape t;
b.getdata();
t.getdata();
b.display();
t.display();
return 0;	
}
