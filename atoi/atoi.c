#include <stdio.h>

int myAtoi(char* s) {
    int positive = 1;

    long result = 0;
    while(*s != '\0') {
        if(*s == ' ') {
            s++;
            continue;
        }
        else if(*s == '+' || *s == '-')
            positive = (*s - 43) / 2;
        else
            result = result * 10 + *s - '0';
        s++;
    }
    return result;
}

int main(void) {
	printf("%d\n", myAtoi("42"));
	return (0);
}


