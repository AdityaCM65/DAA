#include <iostream.h>
#include <conio.h>
#include <time.h>

int n;

class demo {
  public:
  int a[10][10] , visited[10];
  void get();
  void dfs(int v);
};

void demo::get() {
 cout<<"\n Enter Size : ";
cin>>n;
cout<<"\nEnter Matrix : ";
 for(int i=0; i<n; i++) {
  for(int j=0; j<n; j++) {

  visited[i]=0;
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
 clock_t start , end;
 start=clock();
 d.get();
 end=clock();

 cout<<"\t Time Complexity : "<<((end-start)/CLK_TCK);

 getch();
}