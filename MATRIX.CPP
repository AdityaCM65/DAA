#include<iostream.h>
#include<conio.h>
class demo
{
  int a[10][10],b[10][10],c[10][10],i,j,row1,row2,col1,col2;
  public:
  void dis();
  void add();
  void sub();
  void get();
  void trans();
  void mul();

};
void demo::get()
{
 cout<<"\n enter the row :";
 cin>>row1;
 cout<<"\n enter the column";
 cin>>col1;
 for(i=1;i<=row1;i++)
 {
  for(j=1;j<=col1;j++)
  {
   cin>>a[i][j];
  }


 }
cout<<"\n enter the row :";
 cin>>row2;
 cout<<"\n enter the column";
 cin>>col2;
 for(i=1;i<=row2;i++)
 {
  for(j=1;j<=col2;j++)
  {
   cin>>b[i][j];
  }


 }


}
void demo::add()
{

 cout<<"\n addition pof the matrix:"<<endl;
 for(i=1;i<=row1;i++)
 {
  for(j=1;j<=col1;j++)
  {
   c[i][j]=a[i][j]+b[i][j];
   cout<<c[i][j]<<"\t";
  }
  cout<<"\n";

 }


}
void demo::sub()
{

 cout<<"\n subtraction of the matrix:"<<endl;
 for(i=1;i<=row1;i++)
 {
  for(j=1;j<=col1;j++)
  {
   c[i][j]=a[i][j]-b[i][j];
   cout<<c[i][j]<<"\t";
  }
  cout<<"\n";

 }


}
void demo::trans()
{
  for(i=1;i<=row1;i++)
 {
  for(j=1;j<=col1;j++)
  {
   c[i][j]=a[j][i];
   cout<<c[i][j]<<"\t";
  }
  cout<<"\n";

 }


}
void demo::dis()
{
 cout<<"\n matrix is:"<<endl;
 for(i=1;i<=row1;i++)
 {
   for(j=1;j<=col1;j++)
   {
    cout<<a[i][j]<<"\t";
   }

   cout<<"\n";
 }
  cout<<"\n matrix is:"<<endl;
 for(i=1;i<=row2;i++)
 {
   for(j=1;j<=col2;j++)
   {
    cout<<b[i][j]<<"\t";
   }

   cout<<"\n";
 }


}
void demo::mul()
{
int k;
 for(i=1;i<=row1;i++)
 {
  for(j=1;j<=col1;j++)
  {
  c[i][j]=0;
   for(k=1;k<=row1;k++)
   {
    c[i][j]+=a[i][k]*b[k][j];


   }
    cout<<c[i][j];

  }
 cout<<"\n";

 }


}
void main()
{
 clrscr();
 demo d;
 d.get();
 d.dis();
 d.add();
 d.sub();
 d.trans();
 d.mul();
 getch();

}