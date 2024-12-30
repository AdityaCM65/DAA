#include <iostream.h>
#include <conio.h>
#include <time.h>

class demo {

public:
int a[10] , n;
void get();
void bubble();
void binary();

};

void demo::get() {
 cout<<"Enter size of array : ";
 cin>>n;

 for(int i=1; i<=n; i++) {
  cin>>a[i];
 }
}

void demo::bubble() {
 for(int i=1; i<n; i++) {
  for(int j=1; j<n; j++) {
   if(a[j]>a[j+1]) {
    int temp = a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
}

void demo::binary() {

int ele;
cout<<"\n Enter Element to search : ";
cin>>ele;

int low=1;
int high=n;
int f=0;

while(low<=high) {
     int mid = (low+high)/2;

     if(a[mid]==ele) {
     f=1;
      cout<<"Element found at index : "<<mid;
      break;
     }
     else if(a[mid]<ele) {
      low=mid+1;
     }
     else {
      high=mid-1;
     }
}

if(f==0) {
 cout<<"Element not found!!!";
}

}








void main() {
 clrscr();
 demo d;
 clock_t start , end;
 d.get();

 start=clock();
 d.bubble();
 d.binary();
 end=clock();

 cout<<"\n Time Complexity : "<<((end-start)/CLK_TCK);


 getch();
}