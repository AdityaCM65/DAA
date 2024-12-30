#include <iostream.h>
#include <conio.h>

int capacity , n;

class demo {
  public:
  float fraction[10],profit[10],weight[10] , sum ,i,j;
  void get();
  void order();
  void show();
  void knap(int capacity , int  n);
};

void demo::get() {
 cout<<"\n Enter capacity : ";
 cin>>capacity;
 cout<<"\n Enter no of Items : ";
 cin>>n;

 cout<<"\n Enter Profit : ";
 for(int i=1; i<=n; i++) {
  cin>>profit[i];
 }

 cout<<"\n Enter Weight : ";
 for(i=1; i<=n; i++) {
  cin>>weight[i];
 }
 sum=0.0;
 for(i=1; i<=n; i++) {
  fraction[i]=0.0;
 }
}

void demo::order() {
 for(i=1; i<=n; i++) {
  for(j=1; j<=n; j++) {
   if((profit[j]/weight[j]) < (profit[j+1]/weight[j+1])) {
    int temp = profit[j];
    profit[j]=profit[j+1];
    profit[j+1]=temp;

    temp=weight[j];
    weight[j]=weight[j+1];
    weight[j+1]=temp;

   }
  }
 }
}


void demo::knap(int capacity , int n) {
 int rcapacity;
 rcapacity=capacity;

 for(i=1; i<=n; i++) {
  if(weight[i]>rcapacity) {
   break;
  }
  else {

  fraction[i]=1.0;
  rcapacity=rcapacity-weight[i];

  }
 }

 if(i<=n) {
  fraction[i]=rcapacity/weight[i];
  for(i=1;i<=n; i++) {
   sum=sum+(profit[i]*fraction[i]);
  }
 }

}


void demo::show() {
 for(i=1; i<=n; i++) {
  cout<<"\t"<<fraction[i];
 }
 cout<<"\n Sum : "<<sum;
}

void main() {
 clrscr();
	 demo d;
	 d.get();
	 d.order();
	 d.knap(capacity , n);
	 d.show();
 getch();
}








