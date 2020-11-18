#include "io.h"
#include "stdio.h"

double ask_number() {
	double number;
	printf("Enter a double: ");
	scanf("%lf", &number);
	return number;
}

void print_result(double result) {
	printf("f(x) = %f\n", result);
}
