#pragma once

#include "string"

class Data {
private:
  std::string name;
  Data();

public:
  Data(std::string name);
  Data(Data const &rhs);
  Data &operator=(Data const &rhs);
  ~Data();

  std::string const &getName() const;
};
