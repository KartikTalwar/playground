#include <stdlib.h>

// runtime: ~1 min
// output size: ~13MB (about 13 million digits)
// computes: 2^43112609 - 1

int m = 167772161, N = 1, t[1 << 25] = { 2 }, a, *p, i, e = 34893349, s, c, U = 1;

g(d, h)
{
    for (i = s; i < 1 << 24; i *= 2)
	d = d * 1LL * d % m;
    for (p = t; p < t + N; p += s)
	for (i = s, c = 1; i; i--)
	    a = p[s] * (h ? c : 1LL) % m, p[s]
		= (m + *p - a) * (h ? 1LL : c) % m, a += *p, *p++ = a % m, c = c * 1LL * d % m;
}

main()
{
    while (e /= 2) {
	N *= 2;
	U = U * 1LL * (m + 1) / 2 % m;
	for (s = N; s /= 2;)
	    g(17, 0);
	for (p = t; p < t + N; p++)
	    *p = *p * 1LL ** p % m * U % m;
	for (s = 1; s < N; s *= 2)
	    g(29606852, 1);
	for (a = 0, p = t; p < t + N;)
	    a += *p << (e & 1), *p++ = a % 10, a /= 10;
    }
    while (!*--p);
    for (t[0]--; p >= t;)
	putchar(48 + *p--);
}

