#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MASCA 255
#define MAX_SIZE 100

int st[100], vf = -1;

void push(int x)
{
	if (vf == MAX_SIZE - 1)
	{
		printf("Stiva este plina!\n");
		return;
	}
	else
	{
		st[++vf] = x;
	}
}

int ConversieBinar(int n)
{
	int nb = 0, p = 1;
	while (n)
	{
		nb += (n % 2) * p;
		p *= 10;
		n /= 2;
	}
	return nb;
}

int Inversare(int n)
{
	return n ^ MASCA;
}
void afisare()
{
	int i;
	for (i = 0; i <= vf; i++)
	{
		printf("%d ", st[i]);
	}
	printf("\n");
}

int main()
{
	int n, v[100], i, nb;

	printf("n="); scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("v[%d]=", i); scanf("%d", &v[i]);
	}

	printf("\n");

	for (i = 0; i < n; i++)
	{
		printf("Forma zecimala: %d\n", v[i]);
		nb = ConversieBinar(v[i]);
		printf("Forma binara: %d\n", nb);
		push(ConversieBinar(Inversare(v[i])));
		printf("Forma binara inversata: %d\n", st[i]);
		printf("\n");
	}

	

	system("pause");
	return 0;
}