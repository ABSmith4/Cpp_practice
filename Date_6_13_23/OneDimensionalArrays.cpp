#include<iostream>
int main() {
  int arr[5];

  //input
  std::cout<<"Enter 5 numbers one by one\n";
  for(int i = 0; i<5; i++) {
    std::cin>>arr[i];
  }
  
  //output
  std::cout<<"\n";
  std::cout<<"Your output\n";
  for(int j = 0; j<5; j++) {
    std::cout<<arr[j]<<" ";
  }
  
  //c strings (must be done with single quotes)
  char array[7] = {'C', 'l', 'e', 'v', 'e', 'r'};
  std::cout<<array<<"\n";
};