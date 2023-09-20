#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
	int n;
	cin >> n;
	size_t count = 0;
	while(n--) 
	{
       int arr[3];
       std::cin >> arr[0] >> arr[1] >> arr[2];
       int total = arr[0] + arr[1] + arr[2];
       if(total > 1)
       	count += 1;
	}
	std::cout << count << std::endl;
}
   