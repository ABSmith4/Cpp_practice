#include<iostream>
using namespace std;
struct Person{
    string name;
    int age;
    bool isMale;
};

int main() {
  int num;
  Person p1;
  p1.name = "Billy";
  p1.age = 20;
  p1.isMale = true;

  cout<<p1.name<<endl;
  cout<<p1.age<<endl;
  cout<<p1.isMale<<endl;

}