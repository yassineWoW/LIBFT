#include <stdarg.h>

int sum_integers(int num, ...) {
    va_list args;
    va_start(args, num);
	va_arg(args, int);
	printf("%d\n", args);
    int sum = 0;
    va_end(args);

    return sum;
}

int main() {
    // Call the variadic function with different numbers of arguments
    sum_integers(3, 10, 20, 30);

    // Print the results

    return 0;
}