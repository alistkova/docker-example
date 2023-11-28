#include <iostream>

int main(int argc, char* argv[]) {
  std::cout << "Hello world from Docker!" << std::endl << "Now I'll print all command line arguments";
  for (int i = 0; i < argc; ++i) {
    std::cout << argv[i] << std::endl;
  }
  return 0;
}
