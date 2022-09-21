#include <stdio.h>
void fib(int num_terms) {

  int i;

  // initialize first and second terms
  int t1 = 0, t2 = 1;


  int nextTerm = t1 + t2;


  // print the first two terms t1 and t2
  printf("Fibonacci Series: %d, %d, ", t1, t2);


  // print 3rd to nth terms
  for (i = 3; i <= num_terms; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
  printf("\n");

}

