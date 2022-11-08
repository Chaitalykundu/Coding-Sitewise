/* Sum and Difference of Two Numbers */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a, b;
    float c, d;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    int sum_of_ints = a + b;
    int diff_of_ints = a - b;
    float sum_of_floats = c + d;
    float diff_of_floats = c - d;
    printf("%d %d\n", sum_of_ints, diff_of_ints);
    printf("%.1f %.1f", sum_of_floats, diff_of_floats); /* here .1 means the no of digit after point(.) is 1 */
    
    return 0; 
}
