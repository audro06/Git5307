#include <stdio.h>

int main(void) {
	for (int R=1;R>=0;R--)
	for (int i=1;i<=100;i++)
		if (i%2==R) printf("%d\n", i);
}
