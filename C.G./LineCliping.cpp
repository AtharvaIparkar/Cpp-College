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

int lineclip :: visibility(coordinate P1, coordinate P2) {
int i, flag = 0;
for(i=0; i<4; i++) {
if((P1.code[i] == P2.code[i]) && (P2.code[i] == 1))
flag = '0';
}
if(flag == 0)
return(1);
return(2);
coordinate lineclip :: resetendpt(coordinate P1, coordinate P2) {
coordinate temp;
int x, y, i;
float m, k;
if(P1.code[3] == '1')
x = 150;
if(P1.code[2] == '1')
x = 450;
if((P1.code[3] == '1') || (P1.code[2] == '1')) {
m = (float)(P2.y - P1.y)/(P2.x - P1.x)
k = P1.y (m * (x - P1.x));
temp.y = k;
temp.x = x;
for(i=0; i<4; i++) {
temp.code[i] = P1.code[i];
if(temp.y < 350 && temp.y > 100)
return (temp);
}
}
}
}
}

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
initgraph (&gd, &gm, NULL);
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

cleardevice();
delay(2000);
P1 = lc.setcode(P1);
P2 = lc.setcode(P2);
v = lc.visibility(P1, P2);
delay(2000);

switch(v) {
case 0 : lc.drawwindow();
delay(2000);
lc.drawline(P1, P2);
break;
case 1 : lc.drawwindow();
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

void lineclip :: drawwindow() {
line(150, 100, 450, 100);
line(450, 100, 450, 350);
line(450, 350, 150, 350);
line(150, 350, 150, 100);
}

void lineclip :: drawline(coordinate P1, coordinate P2) {
line(P1.x, P1.y, P2.x, P2.y);
}
coordinate lineclip :: setcode  (coordinate P) {
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

int lineclip :: visibility(coordinate P1, coordinate P2) {
int i, flag = 0;
for(i=0; i<4; i++) {
if((P1.code[i] == P2.code[i]) && (P2.code[i] == 1))
flag = '0';
}
if(flag == 0)
return(1);
return(2);
}
coordinate lineclip :: resetendpt (coordinate P1, coordinate P2) {
coordinate temp;
int x, y, i;
float m, k;
if(P1.code[3] == '1')
x = 150;
if(P1.code[2] == '1')
x = 450;
if((P1.code[3] == '1') || (P1.code[2] == '1')) {
m = (float)(P2.y - P1.y)/(P2.x - P1.x);
k = P1.y + (m * (x - P1.x));
temp.y = k;
temp.x = x;
for(i=0; i<4; i++) {
temp.code[i] = P1.code[i];
if(temp.y < 350 && temp.y > 100)
return (temp);
}
}
}

