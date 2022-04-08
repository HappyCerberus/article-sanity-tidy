#include <iostream>

class my_class {
 public:
  void my_method() { std::cout << "Value is " << data_member << "\n"; }
  int data_member;
};

int main() {
  my_class x;
  x.my_method();
  return 0;
}
