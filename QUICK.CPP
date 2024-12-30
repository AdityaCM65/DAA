#include <iostream.h>
#include <conio.h>

int n;

class demo {
  public:
  int a[10];
  int partition(int p , int q);
  void quick(int p , int q);
};

void demo::quick() {
 if(p<q){
  int j=partition(p,q);
  quick(p,j-1);
  quick(j+1 , q);
 }
}

void main() {
 clrscr();

 getch();
}