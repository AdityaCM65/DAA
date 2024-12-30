#include <iostream.h>
#include <conio.h>
#include <time.h>

int n;
class demo {
  public:
  int a[10][10] , visited[10] , q[10],f,r,index;
  demo() {

  f=r=0;
  index=1;

  }
  void get();
  void bfs();
};

void demo::get() {
 cout<<"\nEnter Size : ";
 cin>>n;
 cout<<"\nEnter Matrix : ";
 for(int i=1; i<=n; i++) {
  for(int j=1; j<=n; j++) {
   visited[i]=0;
   cin>>a[i][j];
  }
 }
}

void demo::bfs() {

 visited[1]=1;
 f++;
 r++;
 q[r]=index;

 while(f<=r) {

  index=q[f];
  f++;
  cout<<index<<"\t";
  for(int k=1; k<=n; k++){
   if(a[index][k]==1 && visited[k]==0) {
	visited[k]=1;
	r++;
	q[r]=k;
   }
  }


 }

}

void main() {
clrscr();
demo d;
clock_t start , end;
d.get();
start=clock();
d.bfs();
end=clock();

cout<<"\t Time Complexity : "<<((end-start)/CLK_TCK);
getch();

}