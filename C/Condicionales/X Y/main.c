#include <stdio.h>

int main() {
	int x = 10;
	int y = 20;
	int max_value;
	max_value = (x>y) ? x : y;// if x > y is true, max_value gets x, else it gets y
	printf ("The maximum value is %d\n", max_value);
	return 0;
}
