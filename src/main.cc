#include <iostream>
#include <vector>

struct MyStruct {
  void MyMethod() {}
};

int main() {
  int x = 1;

  if (x != 0) {
    std::cout << "Yes!\n";
  }

  std::cout << "Always printed.\n";

  std::vector<int> data;
  if (data.empty()) {
    std::cout << "Is empty.\n";
  }

  return 0;
}
