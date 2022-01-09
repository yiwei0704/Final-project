#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int input(int t);
int copu(int s);
int main()
{
	int a;
	int tol = 0;

	printf("* * * * * * * *catch thirty* * * * * * * \n");
	printf("Game Begin\n");
	srand((unsigned)time(NULL));
	while (tol <= 30)
	{
		tol = input(tol);
		if (tol == 30)
		{
			printf("You Win!!\n");
			break;
		}
		tol = copu(tol);
		if (tol == 30)
		{
			printf("Com Win!!\n");
			break;
		}
	}

	printf(" * * * * * * * *Game Over * * * * * * * *\n");
	return 0;
}


int input(int t)
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

int copu(int s)
{
	int c;
	do {
		if (s == 28)
		{
			c = 2;
		}
		else if (s == 29)
		{
			c = 1;
		}
		else
		{
			c = rand() % 2 + 1;
		}
		printf("Computer count:%d\n", c);
		s = s + c;
		printf("Sum %d\n\n", s);
	} while (c > 2 || c < 1);

	return s;
}
