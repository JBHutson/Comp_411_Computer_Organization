#include <stdio.h>

main()
{
  int A[3][3];

  int B[3][3];

  int C[3][3];

  int i, j, k, l, m, o, p, q, n, x, y, z, d, e, f;

  printf("Please enter the values for A[0..2][0..2], one row per line:\n");
        for (l = 0; l < 3; l++){
                int a = 0;
                scanf("%d %d %d", &o, &p, &q);
                        A[l][a] = o;
                        a++;
                        A[l][a] = p;
                        a++;
                        A[l][a] = q;
                }

  printf("Please enter the values for B[0..2][0..2], one row per line:\n");
         for (m = 0; m < 3; m++){
                 int b = 0;
                 scanf("%d %d %d", &d, &e, &f);
                         B[m][b] = d;
                         b++;
                         B[m][b] = e;
                         b++;
                         B[m][b] = f;
                 }
        printf("A=\n");
        for (n = 0; n < 3; n++){
                printf("   %3i   %3i   %3i\n", A[n][0], A[n][1], A[n][2]);
        }
        printf("B=\n");
    for (x = 0; x < 3; x++){
                printf("   %3i   %3i   %3i\n", B[x][0], B[x][1], B[x][2]);
        }
  
  /* multiply C = A.B: */
  
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
    {
    C[i][j] = 0;
      for (k =0; k < 3; k++)
        C[i][j] += A[i][k] * B[k][j];
    }
  printf("C=A.B=\n");
  for (y = 0; y < 3; y++){
                printf("   %3i   %3i   %3i\n", C[y][0], C[y][1], C[y][2]);
          }
  
  /* multiply C = B.A: */
  
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
    {
      C[i][j] = 0;
      for (k =0; k < 3; k++)
        C[i][j] += B[i][k] * A[k][j];
    }
  printf("C=B.A=\n");
  for (z = 0; z < 3; z++){
                printf("   %3i   %3i   %3i\n", C[z][0], C[z][1], C[z][2]);
        }
}
