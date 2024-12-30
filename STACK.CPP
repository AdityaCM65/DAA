#include<iostream.h>
#include<conio.h>
#include<process.h>
int n;
class demo
{
 int i,top,s[10],ele;
 public:
 demo()
 {
  top=-1;

 }
 void push();
 void pop();
 void peek();
 void dis();

} ;
void demo::dis()
{
 if(top==-1)
 {
  cout<<"\n empty";

 }
 else
 {
  for(i=top;i>=0;i--)
  {
   cout<<s[i]<<"\t";

  }

 }

}
void demo::pop()
{
 if(top==-1)
 {
  cout<<"\n empty";

 }
 else
 {
  cout<<"\n the deleted element is:"<<s[top];
  top--;

 }



}
void demo::push()
{
 if(top>=n-1)
 {
  cout<<"\n overflow";

 }
 else
 {
 cout<<"top="<<top<<" n="<<n;
 cout<<"\n enter the element";
 cin>>ele;
 top++;
 s[top]=ele;

  }


}
void main()
{
 clrscr();
 cout<<"\n enter the size";
 cin>>n;
 int ch;
 demo d;
 while(ch!=5)
 {
  cout<<"\n enter the choice:";
  cin>>ch;
  switch(ch)
  {
   case 1:d.push();   break;
   case 2:d.pop();   break;
   case 3:d.dis();    break;
   case 4:exit(0);


  }


 }
 getch();
}