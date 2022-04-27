#include <iostream>

class MyClass {
 public:
  void MyMethod() const { std::cout << "Value is " << data_member << "\n"; }
  int data_member;
};

int main() {
  MyClass x;
  x.MyMethod();
  return 0;
}
