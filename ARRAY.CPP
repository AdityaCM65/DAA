#include<iostream.h>
#include<conio.h>
class demo
{
 int a[10],i,j,k,n,ele,pos;
 public:
 void get();
 void dis();
 void insert();
 void del();

};
void demo::get()
{
 cout<<"\n enter the size";
 cin>>n;
 cout<<"\n enter the element:";
 for(i=1;i<=n;i++)
 cin>>a[i];
}
void demo::dis()
{
 cout<<"\n the elements are:";
 for(i=1;i<=n;i++)
 cout<<a[i]<<"\t";

}
void demo::insert()
{
 cout<<"\n enter the element position:";
 cin>>pos;
 cout<<"\n enter the element:";
 cin>>ele;
 j=n;
 while(j>=pos)
 {
  a[j+1]=a[j];
  j--;

 }
 n++;
 a[pos]=ele;

}
void demo::del()
{
 cout<<"\n enter the element deleted position:";
 cin>>pos;
 j=pos;
 while(j<n)
 {
  a[j]=a[j+1];
  j++;
 }
      n--;

}
void main()
{
 clrscr();
 demo d;
 d.get();
 d.dis();
 d.insert();
 d.dis();
 d.del();
 d.dis();
 getch();

}