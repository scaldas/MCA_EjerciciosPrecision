#include <stdio.h>

int main(void){
	unsigned long long current_integer;
	unsigned long long previous_integer;
	unsigned long long max;
	double current_double;
	double previous_double;

	max = 100000002;

	current_integer = 2;
	previous_integer = 1;

  	do {
    	current_double = (*(double*)&current_integer);
    	previous_double = (*(double*)&previous_integer);

    	printf("%lld\t%.20e\t%.20e\n", previous_integer, current_double, current_double - previous_double);

    	current_integer += 1000;
    	previous_integer += 1000;
	} while (current_integer <= max);

  return 0;
}
