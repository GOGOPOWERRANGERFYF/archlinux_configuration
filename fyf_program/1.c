#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h> 
#define NAME "fyf"
int func1(void);
int func2(void);
int func3(void);

typedef struct struct1 {
	int si1;
	float sf1;
} struct1;

typedef union union1 {
	char uc1;
	float uf1;
} union1;

int main(void) {
    int a = 10;
	func1();
	return 0;
}

int func1(void) {
	printf("This is function 1!\n");
	union1 un1;
	un1.uf1 = 1.0F;
	printf("%d\n", un1.uc1);
	return 0;
}

int func2(void) {
	printf("This is function 2!\n");
	struct1 st1, *stp;
	st1.si1 = 10;
	st1.sf1 = 1.0;
	stp = &st1;
	printf("%p %zd\n", stp, sizeof(*stp));
	printf("%d %.1f\n", st1.si1, st1.sf1);
	printf("%d %.1f\n", stp->si1, stp->sf1);
	return 0;
}

int func3(void) {
	printf("This is function 3!\n");
	int i = 0;
	printf("%zd %lu\n", sizeof(1 && 0), (1 && 0));
	printf("%zd %lu\n", sizeof(1L && 0L), (1L && 0L));
	printf("%d\n", (22 && 25 && 22));
	if (i > 5) {
		printf("i > 5\n");
	} 
	else if (i <= 5 && i > 0) {
		printf("0 < i <= 5\n");
	}
	else {
		printf("i <= 0\n");
	}
	return 0;
}



