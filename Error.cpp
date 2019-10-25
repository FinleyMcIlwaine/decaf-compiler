

#include "Error.hpp"

void Error::print() {
  cout << line << ":" << column << " : " << lineStr << endl;
  cout << printStr << endl;
}
