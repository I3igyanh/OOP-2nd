#include <stdio.h>
int main() {
 int i, j, k, n;
 float a[20][20], x[20]; 

 double s, p;
 // Input: Number of equations
 printf("Enter the number of equations: ");
 scanf("%d", &n);

 // Input: Coefficients of the equations
 printf("\nEnter the coefficients of the equations:\n\n");
 for (i = 0; i < n; i++) {
 for (j = 0; j < n; j++) {
 printf("a[%d][%d] = ", i, j);
 scanf("%f", &a[i][j]);
 }
 printf("b[%d] = ", i + 1); 

 scanf("%f", &a[i][n]);
 }
 // Gaussian Elimination: Forward Elimination
 for (k = 0; k <= n - 1; k++) {
 for (i = k + 1; i < n; i++) {
 p = a[i][k] / a[k][k]; 

 for (j = k; j <= n; j++) {
 a[i][j] = a[i][j] - (p * a[k][j]); 
 }
 }
 }
 // Back Substitution: Solving for 'x'
 x[n - 1] = a[n - 1][n] / a[n - 1][n - 1]; 
 for (i = n - 2; i >= 0; i--) {
 s = 0;
 for (j = i + 1; j < n; j++) {
 s += (a[i][j] * x[j]); 
 }
 x[i] = (a[i][n] - s) / a[i][i]; 

 }
 // Display the solutions
 printf("\nThe result is:\n");
 for (i = 0; i < n; i++) {
 printf("x[%d] = %.2f\n", i + 1, x[i]);
 }
 return 0;
}

