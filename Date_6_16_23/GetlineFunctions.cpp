#include<iostream>
#include<string>
int main() {
  std::string name;
  std::cout<<"Enter your name\n";
  //std::cin>>name; //extraction operator only accepts items in the memory buffer (anything after a space will not be accepted)
  getline(std::cin, name);
  std::cout<<"Welcome Back "<<name;
}
#include<cstring>
  //using c strings
int main() {
  char name2[15];
  std::cout<<"Enter your name\n";
  std::cin.getline(name2, 15); //second parameter must match size of originally named variable
  std::cout<<"Welcome Back\n";
  return 0;
}
