#include <iostream>
#include <cstring>
#include "gcd.cpp"
#define ll long long
using std::cout;
using std::cin;


//define function modular exponentiation to be used in factoring
ll f(int a, int b, int c) //this function = a^b (mod c) or a^b is congruent to f(a,b,c) (mod c)
{
	if (b == 0) return 1;
	if (b % 2 == 1) return (a*f(a, b - 1, c)) % c;
	ll d = f(a, b / 2, c);
	return (d*d) % c;
	//system("pause");
}

//factor
ll factor(ll n, int k) 
{
	ll g = 2, r = 2, h;

	for (k = 1; k <= 37; k++) 
	{
		g = f(g, r, n);
		h = gcd(g - 1, n);

		if (h > 1 && h < n) 
		{
			cout << "h divides n";
			r++;
			return h;
		}
	
	}
	return 0;
}


int main() {
	ll n, k;

	cout << "Enter n-";
	cin >> n;
	cout << "Enter k-";
	cin >> k;

	factor(n, k);

	return 0;
}
