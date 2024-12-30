#include <iostream.h>
#include <conio.h>

class demo {
  public:
  int a[3][3],b[3][3],c[3][3],p,q,r,s,t,u,v,i,j;
  void get();
  void dis();
  void formula();
};

void demo::get() {
 cout<<"\n Enter First Matrix : ";
 for(i=1; i<=2; i++) {
  for(j=1; j<=2; j++) {
   cin>>a[i][j];
  }
 }

 cout<<"\n Enter Second Matrix : ";
 for(i=1; i<=2; i++) {
  for(j=1; j<=2; j++) {
   cin>>b[i][j];
  }
 }

}

void demo::dis() {
 cout<<"\n Enter First Matrix : ";
 for(i=1; i<=2; i++) {
  for(j=1; j<=2; j++) {
   cout<<c[i][j]<<"\t";
  }
  cout<<endl;
 }
}



void demo::formula() {

 p=(a[1][1]+a[2][2])*(b[1][1]+b[2][2]);

 q=b[1][1]*(a[2][1]+a[2][2]);
 r=a[1][1]*(b[1][2]-b[2][2]);
 s=a[2][2]*(b[2][1]-b[1][1]);
 t=b[2][2]*(a[1][1]+a[1][2]);

 u=(b[1][1]+b[1][2])* (a[2][1]-a[1][1]);
 v= (b[2][1]+b[2][2])* (a[1][2]-a[2][2]);

 c[1][1]=p+s - t+v;
 c[1][2]=r+t;
 c[2][1]=q+s;
 c[2][2]=p+r - q+v;
}


void main() {
 clrscr();
	  demo d;
	  d.get();
	  d.formula();
	  d.dis();
 getch();
}