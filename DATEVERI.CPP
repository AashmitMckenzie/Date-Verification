#include "iostream.h"
#include "conio.h"

void main()
{
clrscr();
int d, m, y, c=0;
cout<<"Date Verification"<<endl;
cout<<"Enter the Date (in dd mm yyy form): ";
cin>>d>>m>>y;

if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==10 && d<32)
   {
   cout<<"Date is Valid"<<endl;
   c=c=1;
   }
else if (m==4 || m==6 || m==9 || m==11 && d<31)
   {
   cout<<"Date is Valid"<<endl;
   c=c=1;
   }
else if (m==2 && d<29)
   {
   cout<<"Date is Valid"<<endl;
   c=c=1;
   }
else if (m==2 && d==29 && y%4==0)
   {
   cout<<"Date is Valid"<<endl;
   c=c=1;
   }
else
   {
   cout<<"Date is Not Valid";
   c=0;
   }

if (c==1)
   {
   if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10)
      {
      if (d==31)
	 {
	 d=1;
	 m=m+1;
	 }
	 else
	 {
	 d=d+1;
	 m=m;
	 }
      }
   if (m==4 || m==6 || m==9 || m==11)
      {
      if (d==30)
	 {
	 d=1;
	 m=m+1;
	 }
	 else
	 {
	 d=d+1;
	 m=m;
	 }
      }
   if (m==2 && d<28)
      {
      d=d+1;
      m=m;
      }
      else if(d==28 && y%4==0)
	 {
	 d=d+1;
	 m=m;
	 }
	 else
	 {
	 d=1;
	 m=m+1;
	 }
   if (m==12)
      {
      if (d==31)
	 {
	 d=1;
	 m=1;
	 y=y+1;
	 }
	 else
	 {
	 }
      }
      cout<<"The Next day is "<<d<<"-"<<m<<"-"<<y;
   }
getch();
}




