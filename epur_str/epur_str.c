#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int is_space(char c) {
    return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r');
}

int str_len(char *str)
{
	if (str == NULL) {
		return (0);
	}
	int i = 0;
	while(*str++ != '\0')
		i++;
	return i;
}



int main(int argc, char **argv)
{
	if (argc != 2)
		exit(1);

	assert(str_len("oi") == 2);
	printf("%s\n", argv[1]);

	char *input_str = argv[1];
	int len = str_len(input_str);
	char *new_str = malloc(sizeof(char) * len + 1);
	new_str[len] = '\0';
	
	char *new_str_start = new_str;
	char prev = ' ';
	while(*input_str != '\0')
	{
		if(is_space(*input_str) && is_space(prev)) {
			input_str++;
			continue;
		}
		*new_str = *input_str;
		prev = *new_str;
		new_str++;
		input_str++;
	}
	*new_str = '\0';
	printf("%s|\n", new_str_start );
	//todo: i still need to trim this, because spaces in the end are still possible


	return(0);
}
