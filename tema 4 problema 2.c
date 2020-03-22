#include <stdio.h>
#include <stdlib.h>
void sum(int a[], int n, int* s)
{
	int i;
	*s = 0;
	for (i = 0; i < n; i++)
		*s = *s + a[i];

}
int main()
{
	int a[20], n, i, s;
	printf("dati nr de elem:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	sum(a, n, &s);
	printf("suma este : %d\n", s);
	system("pause");
	return 0;
}