#include <iostream>

using namespace std;

void slots1() { cout << "slots1 call" << endl; }

void slots2() { cout << "slots2 call" << endl; }

struct Hello {
  void operator()() const { std::cout << "Hello"; }
};

int main(int, char**) { std::cout << "Hello, world!\n"; }
