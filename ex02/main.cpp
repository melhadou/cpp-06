#include "Base.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <ostream>

class A : public Base {};
class B : public Base {};
class C : public Base {};

// generate
Base *generate(void) { //
  srand(time(0));

  switch (rand() % 3) {
  case 0:
    return new A();
  case 1:
    return new B();
  case 2:
    return new C();
  }

  return new A();
}

void identify(Base *p) {
  if (dynamic_cast<A *>(p))
    std::cout << "A" << std::endl;
  else if (dynamic_cast<B *>(p))
    std::cout << "B" << std::endl;
  else if (dynamic_cast<C *>(p))
    std::cout << "C" << std::endl;
  else
    std::cout << "Unknown" << std::endl;
}

void identify(Base &p) {
  try {
    A a = dynamic_cast<A &>(p);
    std::cout << "A" << std::endl;
  } catch (std::exception &e) {
  }
  try {
    B b = dynamic_cast<B &>(p);
    std::cout << "B" << std::endl;
  } catch (std::exception &e) {
  }
  try {
    C c = dynamic_cast<C &>(p);
    std::cout << "C" << std::endl;
  } catch (std::exception &e) {
  }
}

int main(void) {

  Base *random = generate();
  Base *random2 = generate();
  Base *random3 = generate();

  std::cout << "=========== Identify By &ptr =============" << std::endl;

  identify(*random);
  identify(*random2);
  identify(*random3);

  std::cout << "=========== Identify By *ptr =============" << std::endl;

  identify(random);
  identify(random2);
  identify(random3);

  std::cout << "=====================  End  ========================="
            << std::endl;

  return 0;
}
