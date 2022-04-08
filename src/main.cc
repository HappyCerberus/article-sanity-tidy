#include <iostream>
#include <vector>

struct my_struct {
  void my_method() {}
};

int main() {
  int x = 1;

  if (x) std::cout << "Yes!\n";

  if (true) std::cout << "Always printed.\n";

  std::vector<int> data;
  if (data.size() == 0) std::cout << "Is empty.\n";

  return 0;
}
