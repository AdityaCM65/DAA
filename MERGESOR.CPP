#include <iostream.h>
#include <conio.h>
#include <time.h>

int n;

class demo {
  public:
  int a[10] ;
  void get();
  void dis();
  void mergesort(int low , int high);
  void merge(int low , int mid , int high);
};

void demo::get() {
 cout<<"Enter size : ";
 cin>>n;
 cout<<"\n Enter Elements : ";
 for(int i=1; i<=n; i++) {
  cin>>a[i];
 }

}

void demo::dis() {
 cout<<"\t Elements : ";
 for(int i=1; i<=n; i++) {
  cout<<a[i]<<"\t";
 }
}

void demo::mergesort(int low , int high) {
 if(low<high) {
  int mid= (low+high)/2;
  mergesort(low,mid);
  mergesort(mid+1 , high);
  merge(low , mid , high);
 }
}

void demo::merge(int low ,int mid ,int high) {

int i=low;
int j=mid+1;
int b[10];
int k=low;

while(i<=mid && j<=high) {

if(a[i]<a[j]) {
 b[k]=a[i];
 i++;
 k++;
}
else {
 b[k]=a[j];
 j++;
 k++;
}

}

if(j<=high) {
while(j<=high) {
 b[k]=a[j];
 j++;
 k++;
 }
}
if(i<=mid) {
while(i<=mid) {
 b[k]=a[i];
 i++;
 k++;
 }
}
for(i=low; i<=high; i++) {
 a[i]=b[i];
}

}



void main() {
 clrscr();
 clock_t start , end;
	   demo d;
	   d.get();
	   start=clock();
	   d.mergesort(1,n);
	   end=clock();
	   d.dis();
	   cout<<"\t Time Complexity : "<<((end-start)/CLK_TCK);
 getch();
}