#include<iostream>
#include<graphics.h>
using namespace std;
class point {
public :
float x0, y0;

void accept() {
cin>>x0>>y0;
}

void display() {
cout<<"point is : ("<<x0<<","<<y0<<")"<<endl;
}

void DDALine (float x1, float y1, float x2, float y2) {
float x,y,dx,dy,xinc,yinc,steps;
dx = x2 - x1;
}
};
