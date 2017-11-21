#include "P1Factor.h"


//define function modular exponentiation to be used in factoring
ll f(ll a, ll b, ll c) //this function = a^b (mod c) or a^b is congruent to f(a,b,c) (mod c)
{
	if (b == 0) return 1;
	if (b % 2 == 1) return (a*f(a, b - 1, c)) % c;
	ll d = f(a, b / 2, c);
	return (d*d) % c;
}