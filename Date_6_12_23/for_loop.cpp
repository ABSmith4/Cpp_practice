#include<iostream>
//this program will utilize for loops to create multiplication, addition, division and subtraction tables respectively.
int main() {
  int num;
  int stop;
  std::cout<<"Number of table\n";
  std::cin>>num;
  std::cout<<"Stopping number\n";
  std::cin>>stop;
  std::cout<<"\n";

  //for addition
  for(int i = 1; i<=stop; i++) {
    std::cout<<i<<"+"<<num<<"="<<i+num<<"\n";
  }

  std::cout<<"\n";
  //for multiplication
  for(int i = 1; i<=stop; i++) {
    std::cout<<i<<"*"<<num<<"="<<i*num<<"\n";
  }

  std::cout<<"\n";
  //for subtraction
  for(int i = 1; i<=stop; i++) {
    std::cout<<i<<"-"<<num<<"="<<i-num<<"\n";
  }

  std::cout<<"\n";
  //for division
  for(int i = 1; i<=stop; i++) {
    std::cout<<i<<"/"<<num<<"="<<i/num<<"\n";
  }
};


