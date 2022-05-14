#include "stdio.h"

int fib(n) {
  if(n<2){
    return n;
  } else {
    return fib(n-2) + fib(n-1);
  }
}

int main (void) {
  int result = 0;
  result = fib(40);
  printf("%d\n",result);
  return 0;
}