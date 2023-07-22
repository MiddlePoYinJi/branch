#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>





int main() {
	int age = 60;
	if (age < 18) {
		printf("未成年\n");
	}
	else if (age >= 18 && age < 28) {
		printf("青年\n");
	}
	else if (age >= 28 && age < 50) {
		printf("壮年\n");
	}
	else {
		printf("老年\n");
	}
	return 0;
}

