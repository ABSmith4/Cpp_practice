#include<iostream>
#include<fstream>
int main() {
  std::string filename;
  std::cin>>filename;
  std::ifstream ifile;
  ifile.open(filename.c_str());
  char c;
  while(ifile.good()) { //good function means it will run until it reaches the end of the file marker
    ifile.get(c);
    std::cout<<c;
  }

}
