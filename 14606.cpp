#include <iostream>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	if (n % 2 == 0) cout << (n - 1) * (n / 2);
	else cout << n * (n / 2);
	return 0;
}