#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
	cin >> t;
	while (t--) {
	string str;
	cin >> str;
	int str_size;
	str_size=str.length();
	if(str_size >= 10) {
	cout <<str[0]<<str_size-2<<str[str_size-1] <<endl;}
	else {
		cout <<str<<endl;
	}



	}
}
   