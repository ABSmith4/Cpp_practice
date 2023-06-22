#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
  
  /*
  fstream //includes input and output processes
  ios::in; //input
  ios::out; //output
  ios::app; //append (prevents files from being overwritten and adds text to end of document)
  ios::ate; //stands for "at-the-end" where end of file marker is located and returns that as true
  ios::binary; //converts text based documents into a binary format
  ios::trunc; //"truncate" - overwrites preexisting data in a file and also used for deleting files
  */

  fstream file;
  int num = 0;
  file.open("HYFR.text", ios::in);
  cout<<"Enter a number: \n";
  cin>>num;
  while(num--) { //end-of-file function

    file<<"Ahmad\n";
    file<<rand()%10+1;
    file<<endl;
  }
  file.close(); //MUST close a file after using

}