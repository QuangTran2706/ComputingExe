#include <stdio.h>
void main() {
    int n, i, input, sum = 0, max, min;
    printf("Enter an amount of number you want to type:");
    scanf("%d",&n);
    printf ("enter your number: ");
    for (i = 1; i <= n; i++ ) {
        scanf("%d", &input);
        sum = sum + input;
        min = input;
        (min<input)? min == min : min == input;
        max = input;
        (max<input)? max == max : max == input;
    }
    printf("Total of the numbers you type = %d\n", sum );
    printf("maximum number = %d\n", max);
    printf("minimum number = %d\n", min);
}
