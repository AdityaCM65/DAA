#include <iostream.h>
#include <conio.h>

int capacity , n;

class knapsack {
  public:
  float profit[20] , weight[20] ,fraction[20] ,i , j , sum;
	 void get();
	 void order();
	 void knap(int capacity, int n);
	 void show();
};

void knapsack::get() {
 cout<<"Enter no of capacity: ";
 cin>>capacity;
 cout<<"Enter no of items : ";
 cin>>n;

 cout<<"Enter Profit : ";
 for(i=1; i<=n; i++) {
  cin>>profit[i];
 }

 cout<<"Enter Weight : ";
 for(i=1; i<=n; i++) {
  cin>>weight[i];
 }
}

void knapsack::order() {
 for(i=1; i<=n; i++) {
  for(j=1; j<=n;j++) {
   if((profit[j]/weight[j]) < (profit[j+1]/weight[j+1])) {
	int temp=profit[j];
	profit[j]=profit[j+1];
	profit[j+1]=temp;

	temp=weight[j];
	weight[j]=weight[j+1];
	weight[j+1]=temp;
   }
  }

 }
}

void knapsack::knap(int capacity , int n) {

int rcapacity;
rcapacity = capacity;
sum=0.0;

for(i=1; i<=n; i++) {
 fraction[i]=0.0;
}

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
 for(i=1; i<=n;i++) {
  sum=sum+(profit[i]*fraction[i]);
 }
}

}

void knapsack::show() {
 for(i=1; i<=n; i++) {
  cout<<fraction[i]<<"\t";
 }
 cout<<"\n Total Profit : "<<sum;
}

void main() {
 clrscr();
	 knapsack k;
	 k.get();
	 k.order();
	 k.knap(capacity , n);
	 k.show();
 getch();

}
