#include<stdio.h>

int factorial (int p);

main()
{

int x, y;

do {
   printf("Enter a number:");
   scanf("%d", &x);
   if (x == 0){
      printf(" 0! = 1\n");
      return;
   } else {
      printf(" %d! ", x);
      y = factorial(x);
      printf("= %i\n", y);
   }
} while (x > 0);

}

int factorial (int p){

if (p == 1) return 1;
return p * factorial(p-1);
}
