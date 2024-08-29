#include<iostream>
#include<graphics.h>
using namespace std;

class coordinate {
public :
int x,y;
char code[4];
};

class lineclip {
public :
coordinate PT;
void drawwindow();
void drawline (coordinate P1, coordinate P2);
coordinate setcode (coordinate P);
int visibility (coordinate P1, coordinate P2);
coordinate resetendpt (coordinate P1, coordinate P2);
};

int main() {
lineclip lc;
int gd = DETECT, gm;

int v;
coordinate P1, P2, P3, P4, Ptemp;
cout<<"Enter x1 & y1";
cin>>P1.x>>P1.y;
cout<<"enter x2 & y2";
cin>>P2.x>>P2.y;
lc.drawwindow();
delay(2000);
lc.drawline(P1, P2);
delay(2000);

cleardevice()
delay(2000);
P1 = lc.setcode(P1);
P2 = lc.setcode(P2);
v = lv.visibility(P1, P2);
delay(2000);

switch(v) {
case 0 : lc.drawwindow()
delay(2000);
lc.drawline(P1, P2);
break;
case 1 : lc.drawwindow()
delay(2000);
break;
case 2 :
P3 = lc.resetendpt(P1, P2);
P4 = lc.resetendpt(P2, P1);
lc.drawwindow();
delay(2000);
lc.drawline(P3, P4);
break;
}
delay(2000);
closegraph();
}

void linclip :: drawwindow() {
line(150, 100, 450, 100);
line(450, 100, 450, 350);
line(450, 350, 150, 350);
line(150, 350, 150, 100);
}

void lineclip :: drawline(coordinate P1, coordinate P2) {
line(P1.x, P1.y, P2.x, P2.y);
}
coordinate lineclip (coordinate P) {
coordinate Ptemp;
if(P.y < 100)
Ptemp.code[0] = '1';
else
Ptemp.code[0] = '0';
if(P.y > 350)
Ptemp.code[1] = '1';
else
Ptemp.code[1] = '0';
if(P.x > 450)
Ptemp.code[2] = '1';
else
Ptemp.code[2] = '0';
if(P.x < 150)
Ptemp.code[3] = '1';
else
Ptemp.code[3] = '0';
Ptemp.x = P.x;
Ptemp.y = P.y;
return (Ptemp);
};


