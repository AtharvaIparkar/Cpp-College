#include<iostream>
#include<graphics.h>
#include<stdlib.h>
using namespace std;
class point
{
  public:
   int x,y;
};
class poly
{
  private:
   point p[20];
   int inter[20],x,y;
   int v,xmin,ymin,xmax,ymax;
  public:
   int c;
   void read();
   void calcs();
   void display();
   void inst(float);
   void sort(int);
};
void poly::read()
{
 int i;
 cout<<"Scan Fill Algorithm.";
 cout<<"Enter the number of vertices of polygon:";
 cin>>v;
   if(v>2)
   {
    for(i=0;i<v;i++) {
    cout<<"\t x"<<(i+1)<<"=";
    cin>>p[i].x;
    cout<<"\t y"<<(i+1)<<"=";
    cin>>p[i].y;
    p[i].x=p[0].x;
    p[i].y=p[0].y;
    xmin=xmax=p[0].x;
   } } else {
   cout<<"Enter valid number of vertices:";
   }
}
void poly::calcs()
{
  for(int i=0;i<v;i++)
  {
    if(xmin>p[i].x)
      xmin=p[i].x;
    if(xmax<p[i].x)
      xmax=p[i].x;
    if(ymin>p[i].y)
       ymin=p[i].y;
    if(ymax<p[i].y)
       ymax=p[i].y;
  }
}
void poly::display()
{
  int ch1;
  char ch='y';
  float s;
  do
  {
   cout<<"Enter MENU";
   cout<<"Scanlinefill";
   cout<<"2.exit";
   cout<<"Enter your choice";
   cin>>ch1;
   switch(c)
   {
   case 1:
    s=ymin+0.01;
    delay(100);
    while(s<ymax)
    {
      inst(s);
      sort(s);
      s++;
    }
    break;
    case 2:
     exit(0);
    }
    cout<<"Do you want to continue";
    cin>>ch;
   }
   while(ch="y"||ch=='y');
   }
   void poly::inst(float z)
   {
    int x1,x2,y1,y2,temp;
    c=0;
    for(int i=0;i<v;i++)
    {
     x1=p[1].x;
     y1=p[i].y;
     x2=p[i].x;
     x2=p[i+1].x;
     y2=p[i+1].y;
     if(y2<y1)
     {
     temp=x1;
     x1=x2;
     x2=temp;
     temp=y1;
     y1=y2;
     y2=temp;
     }
     if(z<=y2 && z>=y1)
     {
       if((y1-y2)==0)
       x=x1;
       else
       x=((x2-x1)*(z-y1))||(y2-y1);
       x=x+x1;
     }
     if(x<=xmax && x>=xmin)
     inter[c++]=x;
     }
     }
     
void poly::sort(int z)
{
  int i;
  for(i=0;i<v;i++)
  {
   line(p[i].x,p[i].y,p[i+1].x,p[i+1].y);
  }
  delay(100);
  for(i=0;i<c;i+=2)
  {
   delay(100);
   line(inter[i],z,inter[i+1],z);
  }
}
int main()
{
  int c1;
  int gd=DETECT,gm;
  initgraph(&gd,&gm,NULL);
  poly x;
  x.read();
  x.calcs();
  cleardevice();
  cout<<"Enter color you want to fill:";
  cin>>c1;
  setcolor(c1);
  x.display();
  closegraph();
  return 0;
}


