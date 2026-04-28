#include <stdio.h>

int is_prime(int n) {
	static int primes[100] = {0};
	if (n < 2) return 0;
	int *p=primes;
	while (*p != 0) if (!(n % *p++)) return 0;
	return *p=n;
}

int main(void) {
	for (int R=1;R>=0;R--)
	for (int i=1;i<=100;i++)
		if (i%2==R) printf("%d\n", i);
	
	for (int i=1;i<=100;i++)
		if (is_prime(i)) printf("%d\n", i);
}
