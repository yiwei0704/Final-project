#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int t = 0, a = 0;//t->total in main
	int input(int t);
	{
		int a;
		do {
			printf("Please count:");
			scanf_s("%d", &a);
			if (a > 2 || a < 1 || t + a>30)
				printf("Error input,again!\n\n");
			else
				printf("Sum:%d\n", t + a);
		} while (a > 2 || a < 1);
		return t + a;
	}
}