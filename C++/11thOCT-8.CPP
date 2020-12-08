#include<iostream.h>
#include<conio.h>

int main()
{
int a=0,temp=1,i,n,c=0;
cout<<"Enter the number of terms:";
cin>>n;    // accepting terms
cout<<"Fibonacci series:";
cout<<"1 ";
for(i=2;i<=n;i++)
{
c=a+temp;
a=temp;
temp=c;

cout<<c<<" ";
}
return 0;
}
