#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* vector, numar_elemente, suma, i;
	suma = 0;
	printf("Numarul de elemente in vector: ");
	scanf("%d", &numar_elemente);
	vector = (int*)malloc(numar_elemente * sizeof(int));
	printf("Introduceti elementele vectorului: \n");
	for (i = 0; i < numar_elemente; i++)
	{
		scanf("%d", (vector + i));
		suma = suma + *(vector + i);
	}
	free(vector);
	printf("Suma este %d\n", suma);
	free(vector);
	return 0;
}