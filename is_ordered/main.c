#include <stdio.h>

int is_ordered(int *vet, int size)
{

	for(int n = size - 1; n > 0 && vet; n--)
		if(vet[n] < vet[n-1])
			return(0);
	return(1);
}

int main(void)
{
	int size = 5;
	int vet[5] = {1,2,3,4,5};
	int vet2[5] = {1,2,3,5,4};
	int vet3[5] = {3, 1, 3, 4, 5};
	printf("%d\n", is_ordered(vet, size));	
	printf("%d\n", is_ordered(vet2, size));
	printf("%d\n", is_ordered(vet3, size));
	int *vet_null;
	int vet_small[1] = {1};
	int vet_fit[2] = {1,2};
	int vet_wfit[2] = {2,1};
	printf("%d\n", is_ordered(NULL, 3));
	printf("%d\n", is_ordered(vet_fit, 2));
	printf("%d\n", is_ordered(vet_small, 1));
	printf("%d\n", is_ordered(vet_wfit, 2));
	return (0);
}
