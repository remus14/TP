#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

void push(int x, int* st, int* vf)
{
	if ((*vf) == MAX_SIZE - 1)
	{
		printf("Stiva este plina!\n");
		return;
	}
	else
	{
		++(*vf);
		*(st + *vf) = x;
	}
}

void reset(int* st, int* vf)
{
	*vf = -1;
}

int verificare(int* st, int* vf)
{
	int i;
	for (i = 0; i <= (*vf) / 2; i++)
	{
		if (*(st + i) != *(st + *vf - i))
		{
			return 0;
		}
	}
	return 1;
}

void afisare(int* st, int* vf)
{
	int i;
	for (i = 0; i <= *vf; i++)
	{
		printf("%d ", *(st + i));
	}
	printf("\n");
}

int main()
{
	int n, i, x, * st1, * vf1, * st2, * vf2, aux;

	printf("n="); scanf("%d", &n);

	st1 = (int*)malloc(MAX_SIZE * sizeof(int));
	vf1 = (int*)malloc(sizeof(int));
	*vf1 = -1;

	st2 = (int*)malloc(MAX_SIZE * sizeof(int));
	vf2 = (int*)malloc(sizeof(int));
	*vf2 = -1;

	for (i = 0; i < n; i++)
	{
		printf("x="); scanf("%d", &x);
		aux = x;
		reset(st1, vf1);

		while (x)
		{
			push(x % 10, st1, vf1);
			x /= 10;
		}
		
		if (verificare(st1, vf1))
		{
			push(aux, st2, vf2);
		}
	}

	printf("\n");
	afisare(st2, vf2);

	system("pause");
	return 0;
}