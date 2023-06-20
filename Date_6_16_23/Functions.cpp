#include <iostream>
int mult(int a, int b); //declaration
int main() {
  int num1 = 100;
  int num2 = 200;
  std::cout<<mult(num1, num2);
  return 0;
}

int mult(int a, int b) { //definition
  return a*b;
}