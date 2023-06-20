#include<iostream>
#include<fstream>

int main() {

  std::ifstream ifile("test.text");
  if(!ifile.is_open()) {
    std::cout<<"Error\n";
    exit(0);

  }


}

