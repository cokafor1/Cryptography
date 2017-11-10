#define ll long long

ll gcd(ll a, ll b)
{	if (a<0)a = -a; if (b<0)b = -b;
	ll temp;
	while (b != 0) { temp = a%b; a = b; b = temp; }
	return a;
}
