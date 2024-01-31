#include "Data.hpp"
#include "iostream"
#include "stdint.h"

uintptr_t serialize(Data *ptr) { return reinterpret_cast<uintptr_t>(ptr); }

Data *deserialize(uintptr_t raw) { return reinterpret_cast<Data *>(raw); }

int main(void) {
  Data data("mohamed");

  uintptr_t before = serialize(&data);
  Data after = *deserialize(before);

  std::cout << data.getName() << std::endl;

  std::cout << before << std::endl;

  std::cout << after.getName() << std::endl;

  return 0;
}
