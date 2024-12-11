#include <math.h>
#include <assert.h>
#include <stdio.h>

int is_prime(int n)
{
	if(n <= 1)
		return (0);
	
	int i = 2;
	int sqrt_of_n = (int)sqrt(n) + 1;
	while(i < sqrt_of_n)
		if(n % i++ == 0)
			return (0);
	return (1);
}

int get_next_prime(int n)
{
	while(!is_prime(++n));
	return n;
}

void fprime(int n)
{
	int current_prime = 2;
	while(n != 1) {
		if(n % current_prime == 0) {
			printf("%d\n", current_prime);
			n /= current_prime;
		}
		else	
			current_prime = get_next_prime(current_prime);
	}
}

int main(void)
{
	assert(is_prime(2) == 1);
	assert(is_prime(1) == 0);
	assert(is_prime(0) == 0);
	assert(is_prime(3) == 1);
	assert(is_prime(5) == 1);
	assert(is_prime(7) == 1);
	assert(is_prime(11) == 1);
	assert(is_prime(13) == 1);
	assert(get_prime_by_index(1) == 2);
	assert(get_prime_by_index(2) == 3);
	assert(get_prime_by_index(3) == 5);
	assert(get_prime_by_index(4) == 7);

	fprime(42);
	return(0);
}
