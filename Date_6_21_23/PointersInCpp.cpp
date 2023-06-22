#include<iostream>
using namespace std;

int main() {
  //pointers store the address hexadecimal into the data type, pointers take 4 bytes of memory

  int num = 100;


  cout<<&num;  //evalutes to address value 0x6ffe1c
  int* ptr = &num; 
  cout<<ptr<<endl; //ptr evalutes to 0x6ffe1c now
  cout<<*ptr<<endl; //dereferencing operator now causes ptr to "point to value" (100) once again
  cout<<num //num evaulates to 100

  //int* ptr = nullptr; //pointers MUST be assigned an address or any random address in the cpu will me selected
  //cout<<ptr<<endl; //will evaulate to 0 due to nullptr
 

}