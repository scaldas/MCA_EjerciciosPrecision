#include <stdio.h>

int main(void){
	unsigned int current_integer;
	unsigned int previous_integer;
	unsigned int max;
	float current_float;
	float previous_float;

	max = 100000002;

	current_integer = 2;
	previous_integer = 1;

  	do {
    	current_float = (*(float*)&current_integer);
    	previous_float = (*(float*)&previous_integer);

    	printf("%d\t%.20e\t%.20e\n", previous_integer, current_float, current_float - previous_float);

    	current_integer += 1000;
    	previous_integer += 1000;
	} while (current_integer <= max);

  return 0;
}
