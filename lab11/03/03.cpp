#include <vector>

void dosome1(const std::vector<int> &V) {};
//void dosome2(std::vector<int> &V) {};
void dosome3(const std::vector<int> V) {};
void dosome4(std::vector<int> V) {};

int main() {
  dosome1({1, 2, 3});
  //dosome2({1, 2, 3});
  dosome3({1, 2, 3});
  dosome4({1, 2, 3});
}
