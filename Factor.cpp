#include "P1Factor.h"

//factor
ll factor(ll n, ll k)
{
	ll g = 2, r = 2, h;

	for (k = 1; k; k++)
	{
		g = f(g, r, n); //f() needs ll
		h = gcd((g - 1), n); //n needs ll

		if (h > 1 && h < n)
		{
			cout << "h divides n";
			r++;
			return h;
		}
	}
	return 0;
}