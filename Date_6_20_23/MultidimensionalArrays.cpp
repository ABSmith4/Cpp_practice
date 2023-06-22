#include<iostream>
using namespace std;
int main() {
  int ProgrammingFundamentals[3][2]; //2d arrary
  //size is 6
  //4 bytes => 4 * 6 = 24 bytes
  cout<<sizeof(ProgrammingFundamentals);
}

int main2() {
  int Fundamentals2[3][2];
  cout<<"Enter values in the 2d array one-by-one\n";
  for(int i = 0; i<3; i++) {
      for(int j = 0; j < 2; j++) {
          cin>>Fundamentals2[i][j];
      }
  }

  cout<<"\n";
  cout<<"row-major order";
  //row-major order
  for(int i = 0; i<3; i++) {
      for(int j = 0; j < 2; j++) {
          cout<<Fundamentals2[i][j]<<" ";
      }
      cout<<endl;
  }

  cout<<"\n";
  cout<<"column-major order";
  //column-major order
  for(int j = 0; j < 3; j++) {
      for(int i = 0; i < 2; i++) {
          cout<<Fundamentals2[i][j]<<" ";
      }
      cout<<endl;
};