#include<iostream>
using namespace std;
int n;
#define size 10
template <class T>
void sel(T A[size])
{
int i,j,min;
T temp;
for(i=0;i<n-1;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(A[j]<A[min]){
min=j;
}
}
temp=A[i];
A[i]=A[min];
A[min]=temp;
}
cout<<"sorted array:"<<endl;
for(i=0;i<n;i++)
{
cout<<A[i]<<",";
}cout<<endl;}

int main(){
int A[size];
int B[size];
int i;
int ch;
do{
cout<<"\n1.integer values";
cout<<"\n2.float values";
cout<<"\n3.exit"<<endl;
cout<<"Enter a choice"<<endl;
cin>>ch;
switch(ch){
case 1:
cout<<"Enter a total number of integer elements:";
cin>>n;
cout<<"Enter a integer elements:";
for(i=0;i<n;i++){
cin>>A[i];
}
sel(A);
break;

case 2:
cout<<"Enter a total number of float elements:";
cin>>n;
cout<<"Enter a float elements:";
for(i=0;i<n;i++){
cin>>B[i];
}
sel(B);
break;

case 3:
exit(0);
}
}
while(ch!=3);
return 0;}































