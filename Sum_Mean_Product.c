#include <stdio.h>

main()
{
float x1, x2, x3, x4, x5;
float sum;
float mean;
float product;

        printf("Enter five floating-point numbers:\n");
        scanf("%f %f %f %f %f", &x1, &x2, &x3, &x4, &x5);
        sum = x1+x2+x3+x4+x5;
        mean = sum/5;
        product = x1*x2*x3*x4*x5;
        printf("Sum is %.4f\n", sum);
        printf("Mean is %.4f\n", mean);
        printf("Product is %.4f\n", product);
return 0;
}
