#include "Data.hpp"
#include "iostream"
#include "stdint.h"

class Serialize {
private:
  Serialize();
  ~Serialize();

public:
  static uintptr_t serialize(Data *ptr);
  static Data *deserialize(uintptr_t raw);
};

uintptr_t Serialize::serialize(Data *ptr) {
  return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serialize::deserialize(uintptr_t raw) {
  return reinterpret_cast<Data *>(raw);
}

int main(void) {
  Data data("mohamed");

  uintptr_t before = Serialize::serialize(&data);
  Data after = *Serialize::deserialize(before);

  std::cout << data.getName() << std::endl;

  std::cout << before << std::endl;

  std::cout << after.getName() << std::endl;

  return 0;
}
