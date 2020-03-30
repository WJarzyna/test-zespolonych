#include "test.hh"

bool set_test (const char *name, std::ifstream &file)
{
  file.open(name);
  return file.is_open();
}

bool getq(std::ifstream &file, WZesp &wyr)
{
  file>>wyr;
  return !file.eof();
}
