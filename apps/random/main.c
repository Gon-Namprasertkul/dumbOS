#include <stdio.h>
#include <stdlib.h>

void printRandoms(int lower, int upper, 
                             int count)
{
    int i;
    for (i = 0; i < count; i++) {
        int num = (rand() %
           (upper - lower + 1)) + lower;
        printf("%d\n", num);
    }
}


int main() {
	printf("Enter lowest number: ");
	int lower;
	scanf("%d", &lower);
	printf("Enter highest number: ");
	int upper;
	scanf("%d", &upper);
	printf("The number is: ");
	printRandoms(lower, upper, 1);
	return 0;
}
