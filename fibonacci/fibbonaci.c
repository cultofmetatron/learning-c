#include <stdio.h>

int fibonacci(int n);
//this program computes fibbonacci numbers

int main() {
  int fib9 = fibonacci(9);
  printf("fibbonacci 9 is %d, \n", fib9);

  return 0;
}

int fibonacci(int n) {
  int counter = 1;
  int F1 = 1;
  int F2 = 1;
  int acc;
  while(counter < n) {
    acc = F2;
    F2 = F2 + F1;
    F1 = acc;
    counter++;
  }
  return F2;
};

