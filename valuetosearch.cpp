#include<iostream>
using namespace std;

int main()
{
	int a[11],i;
cout<<"Enter 10 values:";
for(i=0;i<10;i++)
{
cin>>a[i];
}
cout<<"Enter a value to search:";
cin>>a[10];

for( i=0;a[i]!=a[10];i++) ; // 1 2 3 4 5 6 7 8 9 10 51

if(i==10)
{
cout<<"Item not there...";
}
else
{
cout<<"Item : "<<a[10]<<" at index " <<i;
}
    return 0;
}
