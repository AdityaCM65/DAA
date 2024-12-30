#include<iostream.h>
#include<conio.h>
#include<process.h>
class demo
{
  int i,j,k,temp,n,ele,a[20];
  public:
  void get();
  void dis();
  void linear();
  void sort();
  void binary();

};
void demo::get()
{
 cout<<"\n enter the size:";
 cin>>n;
 cout<<"\n enter the elements:";
 for(i=1;i<=n;i++)
 cin>>a[i];


}
void demo::dis()
{
 cout<<"\n the eleemnts are:";
 for(i=1;i<=n;i++)
 cout<<a[i]<<"\t";
}
void demo::sort()
{
 for(i=1;i<n;i++)
 {
  for(j=1;j<n;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }

  }

 }



}
void demo::linear()
{
 cout<<"\n enter the element to be search:";
 cin>>ele;


 for(i=1;i<=n;i++)
 {
  if(a[i]==ele) {
   cout<<"found at index : "<<i;
   break;
  }



 }


}


void demo::binary() {

cout<<"Enter element to be search : ";
cin>>ele;

int low=1;
int high=n;
int mid;
while(low<=high) {
 mid=(low+high)/2;
 if(a[mid]==ele) {
  cout<<"Element found at index : "<<mid;
 }
 else if(a[mid]<ele) {
  low=mid+1;
 }
 else if(a[mid]>ele) {
  high=mid-1;
 }


}

}

void main() {
 clrscr();
	 demo d;
	 d.get();
	 d.dis();
	 d.linear();
	 d.sort();
	 d.binary();
 getch();
}