#include <iostream.h>
#include <conio.h>

class demo {
  public :
  int i,j,cost[10][10] , distance[10] , path[10][10] , n , v , p , min ,row , column , index;
  void get();
  void source();
};

void demo::get() {
 index=1;
 cout<<"Enter number of nodes : ";
 cin>>n;
 cout<<"Enter matrix : ";
 for(i=1; i<=n; i++){
  for(j=1; j<=n; j++) {
   cin>>cost[i][j];
  }
 }

 cout<<"Enter node to visit : ";
 cin>>v;
 cout<<"Enter paths :  ";
 cin>>p;

 cout<<"Enter path matrix : ";
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
 for(i=1; i<=p;i++) {
  if(distance[i]<=min) {
   min=distance[i];
   index=i;
  }
 }

 cout<<"Min index : "<<min;
 cout<<"Path : ";
 for(i=1; i<=n; i++) {
  if(path[index][i]!=0) {
   cout<<"-->"<<path[index][i];
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