#include<iostream.h>
#include<conio.h>
class demo
{
 int i,j,a[10],n,temp,ele,min_index,ptr;
 public:
  void get();
  void dis();
  void bubble();
  void selection();
  void insertion();
};
void demo::get()
{
 cout<<"\n enter teh size:";
 cin>>n;
 cout<<"\n enter the element:";
 for(i=1;i<=n;i++)
 cin>>a[i];
}
void demo::dis()
{
 cout<<"\n elements are:";
 for(i=1;i<=n;i++)
 cout<<a[i]<<"\t";

}
void demo::bubble()
{
 for(i=1;i<n-1;i++)
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
void demo::selection()
{
 for(i=1;i<=n;i++)
 {
  min_index=i;
  for(j=i+1;j<=n;j++)
  {
   if(a[min_index]>a[j])
   {
    min_index=j;

   }
   }
   if(min_index!=i)
   {
    temp=a[min_index];
    a[min_index]=a[i];
    a[i]=temp;

   }



 }


}

void demo::insertion()
{

 a[0]=-9999;
 for(i=2;i<=n;i++)
 {
  temp=a[i];
  ptr=i-1;
 while(a[ptr]>temp)
 {
  a[ptr+1]=a[ptr];
  ptr--;


 }
	a[ptr+1]=temp;

 }


}

void main()
{
 clrscr();
 demo d;
 d.get();
 d.dis();
// d.bubble();
// d.dis();
 //d.selection();
 //d.dis();
 d.insertion();
 d.dis();
 getch();
}