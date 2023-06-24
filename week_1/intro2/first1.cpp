#include<iostream>
using namespace std;
int max(int n1,int n2)
{
	if(n1>n2) return n1;
	return n2;
}
int max(int n1,int n2,int n3)
{
	if(n1>n2) {
	return n1;
	return n3;
} else{
if(n2>n3) return n2;
return n3;
}
}
int main()
{
cout<<"the max no is :"<<max(2,5);
cout<<endl;
cout<<"the max no is :"<<max(2,3,50);

return 0;
}
