#include<iostream>
using namespace std;
int main()
{
    int fact=1,i,n;
    cin>>n;
    for(i=1; i<=n; i++)
      fact=fact*i;
    cout<<"The factorial of a number is"<<"%d"<<" ";
    return 0;
}
    
