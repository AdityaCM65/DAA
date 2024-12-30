#include<iostream.h>
#include<conio.h>

class demo {
  public:
  int cost[10][10] , distance[10] , path[10][10],n,v,p,i,j,row,column,index,min;
  void get();
  void source();

};

void demo::get() {
 index=1;
 cout<<"\nEnter number of nodes : ";
 cin>>n;
 cout<<"\nEnter Matrix : ";
 for(i=1; i<=n; i++) {
  for(j=1; j<=n; j++) {
   cin>>cost[i][j];
  }
 }

 cout<<"\nEnter node to visit : ";
 cin>>v;

 cout<<"\nEnter paths to visit : ";
 cin>>p;

 cout<<"\nEnter path Matrix : ";
 for(i=1; i<=p; i++) {
  for(j=1; j<=n; j++) {
   cin>>path[i][j];
  }
 }
}

void demo::source() {

for(i=1; i<=p; i++) {
 distance[i]=0;
 row=1;
 for(j=1; j<n; j++) {
  if(row!=v) {
   column=path[i][j+1];
   distance[i]=distance[i]+cost[row][column];
  }
  row=column;
 }

 }
 min=distance[1];
 for(i=1;i<=p; i++) {
  if(distance[i]<=min) {
   min=distance[i];
   index=i;
  }
 }

 cout<<"min distance is "<<min<<endl;;
 cout<<"min distance path is ";
 for(i=1; i<=n; i++) {
  if(path[index][i]!=0) {
   cout<<"--->"<<path[index][i];
  }
 }
}




void main() {
 clrscr();
	demo d;
	d.get();
	d.source();

 getch();
}