#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
	int digit = 0;
	while(n>0) {
		digit++;
		n /= 10;
	}
	cout<<"NUmber of digits in n is : "<<digit;
	return 0;
}
