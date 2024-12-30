#include <iostream.h>
#include <conio.h>

class demo {
 public:
 int a[10][10] ,i,j,n, visited[10];
 void get();
 void dfs(int v);

};

void demo::get() {
 cout<<"Enter size : ";
 cin>>n;
 cout<<"\nEnter matrix : ";
 for(i=0; i<n; i++) {
 visited[i]=0;
  for(j=0; j<n; j++) {
   cin>>a[i][j];
  }
 }
 dfs(0);
}
void demo::dfs(int v) {
 visited[v]=1;
 cout<<v+1<<"\t";
 for(int k=1; k<n; k++) {
  if(a[v][k]==1 && visited[k]==0) {
   dfs(k);
  }
 }
}

void main() {
clrscr();
	  demo d;
	  d.get();
getch();
}