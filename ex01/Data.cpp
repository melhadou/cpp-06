#include "Data.hpp"

Data::Data(std::string name) : name(name) {}

Data::Data(Data const &rhs) { *this = rhs; }

Data &Data::operator=(Data const &rhs) {
  if (this != &rhs)
    this->name = rhs.name;
  return *this;
}

Data::~Data() {}

std::string const &Data::getName() const { return this->name; }
