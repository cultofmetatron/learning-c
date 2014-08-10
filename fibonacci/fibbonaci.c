#include <stdio.h>
#include <string.h>

int fibonacci(int n);
//this program computes fibbonacci numbers

int main() {
  /* declare an input string */
  char inputLine[100];
  int inputNum;
  printf("please print a number: ");
  fgets(inputLine, sizeof(inputLine), stdin);
  sscanf(inputLine, "%d", &inputNum);
  printf("You entered: %d \n", inputNum);
  printf("fibbonacci 9 is %d, \n", fibonacci(inputNum));

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

