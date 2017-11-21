#include "P1Factor.h"

//insert p-1 factoring
/* a = 2
for a = 2 to B
do a = a^j mod n (exponentiation) f(int, int, int)
d = gcd(a-1,n)

if 1 < d < n
then return d
else return fail or increment a and redo


1. g=2
2. r=2
3. g  gr (mod n)
4. h = gcd(g-1,n)
5. if  1 < h < n then h is a proper divisor of n; stop
6. r=r+1;
7. if r < k goto 3.

*/

int main() {
	ll n, k;

	cout << "Enter n-";
	cin >> n;
	cout << "Enter k-";
	cin >> k;

	factor(n, k);
	//return 0;
}