#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{

	int s = 0, c = 0;
	int copu(int s);
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
}