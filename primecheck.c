#include <stdio.h>

int main() {
  int n, i, flag = 0;

  // Integer Input 
  printf("Enter a positive integer! ");
  scanf("%d", &n);

  // Prime Checking 
  // i = divisor;
  // n / 2 = half the input integer;
  for (i = 2; i <= n / 2; i++) {
    // Condition for non-prime
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  // Check Flag & Print Check Result;
  if (n == 1) {
    printf("1 is neither prime nor composite"); 
  } else {
    if (flag == 0) 
      printf("%d is a prime number.", n);
    else  
      printf("%d is a composite number.", n);
  }

  return 0;
}