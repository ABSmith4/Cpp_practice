#include<iostream>
#include <fstream> //header needed for file handling
int main() {

  std::ofstream ofile;
  ofile.open("pokemon.txt");
  ofile<<"POKEMON! GOTTA CATCH EM ALL!"; //insert text into pokemon.txt
  ofile.close(); //must close file after opening it

}