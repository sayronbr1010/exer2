#include <stdio.h>
#include <stdlib.h>

void main() {
	int a,*b = &a,**c = &b,***d = &c;

	scanf("%d", &a);

	printf("\n2: %d", (*b * 2));
	printf("\n3: %d", (**c * 3));
	printf("\n4: %d", (***d * 4));

}
