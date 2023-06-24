#include <iostream>

using namespace std;

string voteAge(int age)
{
  string str = "";
  if(age >= 18)
    str = "Eligible for Voting! ";
  else
    str = "Not Eligible for Voting! ";
	return str;
}

int main()
{
	int age;
	cout<<"\nEnter age";
	cin>>age;

  cout << voteAge(age) << endl;

	return 0;
}
