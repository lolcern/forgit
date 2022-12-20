#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));

	for (int i = 0; i < 10;) {
		int a = rand() % 19 + 1;
		int b = rand() % 19 + 1;
		int c;
		int sa = rand() % 4;
		printf("\n[%d/10]", i);
		switch (sa) {
		case 0: printf("%d + %d = ", a, b);
			scanf("%d", &c);
			if (a + b == c) {
				printf("Correct!");
				i++;
				break;
			}
			else {
				printf("Wrong!");
				break;
			}
		case 1: printf("%d - %d = ", a, b);
			scanf("%d", &c);
			if (a - b == c) {
				printf("Correct!");
				i++;
				break;
			}
			else {
				printf("Wrong!");
				break;
			}
		case 2: printf("%d * %d = ", a, b);
			scanf("%d", &c);
			if (a * b == c) {
				printf("Correct!");
				i++;
				break;
			}
			else {
				printf("Wrong!");
				break;
			}
		case 3:printf("%d / %d = ", a, b);
			scanf("%d", &c);
			if (a / b == c) {
				printf("Correct!");
				i++;
				break;
			}
			else {
				printf("Wrong!");
				break;
			}
		}
	}
}