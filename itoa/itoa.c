#include <stdio.h>
#include <stdlib.h>

int number_size(int n)
{
	int i = 1;
	int res = 0;

	while( (n / i) != 0) {
		i *= 10;
		res++;
	}

	return (res == 0) ? 1 : res;
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

int main(void)
{
	printf("%s\n", ft_itoa(1));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-1));
	printf("%s\n", ft_itoa(42));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}	
