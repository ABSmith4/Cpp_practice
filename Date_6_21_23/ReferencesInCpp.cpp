#include<iostream>
using namespace std;

/*
int main() {

  int &num = 10; //reference operator
  cout<<&num; //address-OF operator

  
  int num = 10;
  int &num1 = num;

  num1 =  1000; //if one variable changes, both will change (both num and num1 print 1000)

  cout<<num<<endl; //prints 10
  cout<<num1<<endl; //prints 10, references are just a secondary alias to a variable

  return 0;
}
*/

void swap(int &num1, int &num2) {
  
  int temp = num1;
  num1 = num2;
  num2 = temp; //In order for num1 to equal num2, num2 has to cycle back into the original "temporary" variable
}

int main() {
  
  int a = 100;
  int b = 200;

  swap(a, b);
  cout<<"A is "<<a<<endl;
  cout<<"B is "<<b<<endl;

  return 0;
}