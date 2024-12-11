#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int number_size(long n)
{
	long i = 10;
	int res = 1;

	while(n / i) {
		i *= 10;
		res++;
	}

	return res;
}

char *ft_itoa(int n)
{
	long num = n;
	int is_negative = 0;
	if (n < 0) {
		is_negative = 1;
		num *= -1;
	}
	int size = number_size(num);
	int str_size = sizeof(char) * size + 1 + is_negative;
	char *str_num = (char *) malloc (str_size);
	str_num[str_size - 1] = '\0';

	int i = 0;
	while(i < str_size - (1 + is_negative) ) {
		str_num[str_size - i - 2] = (num % 10) + '0';
		num /= 10;
		i++;
	}
	if(is_negative)
		str_num[0] = '-';
	return str_num;
}

void test_number_size(void)
{
	assert(number_size(1) == 1);
	assert(number_size(0) == 1);
	assert(number_size(-1) == 1);
	assert(number_size(11) == 2);
	assert(number_size(2147483647) == 10);
	assert(number_size(-2147483648) == 10);
}

int main(void)
{
	test_number_size();
	printf("%s\n", ft_itoa(1));
	printf("%s\n", ft_itoa(-1));
	printf("%s\n", ft_itoa(0));	
	printf("%s\n", ft_itoa(2147483646));
	printf("%s\n", ft_itoa(-2147483647));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(52345));
	printf("%s\n", ft_itoa(-4135));
	printf("%s\n", ft_itoa(612612));
	return (0);
}	
