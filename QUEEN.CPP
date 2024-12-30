#include <iostream.h>
#include<conio.h>
#include <math.h>

int a[100],n;

class demo{
  public:
  int z,i;
  void get();
  void queen(int k , int n);
  int place(int k , int i);

};

void demo::get() {
 cout<<"Enter number of queens : ";
 cin>>n;
 for(i=1; i<=n; i++) {
  a[i]=0;
 }
 z=0;
 queen(1,n);
}

void demo::queen(int k , int i) {
 for(i=1; i<=n; i++) {
  if(place(k,i)) {
   a[k]=i;
   if(k==n) {
    z++;
    cout<<endl<<z<<"-->";
    for(i=1; i<=n; i++) {
     cout<<a[i]<<"\t";
    }
   }

  else{

  queen(k+1,n);
 }
 }
}
}

int demo::place(int k , int i) {
 for(int j=1; j<=k; j++) {
  if((a[j]==i) || abs(a[j]-i) == abs(j-k)) {
   return 0;
  }
 }
 return 1;
}
void main() {
 clrscr();
	  demo d;
	  d.get();
 getch();
}