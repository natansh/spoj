#include <string>
#include <iostream>
#include <sstream>

std::string generate_string(long n) {
  if(n == 0) return "(0)";
  if(n == 2) return "(2)";
  if(n == 1) return "";

  std::stringstream s;
  bool first_case = true;
  for(int i = 33; i >= 0; --i) {
    if(((n >> i) & 1) == 1) {
      if(!first_case) { 
        s << "+";
      }
      s << "2";
      if(i > 2) {
        s << "(";
      }
      s << generate_string(i);
      if(i > 2) {
        s << ")";
      }
      first_case = false;
    }
  }
  return s.str();
}

int main() {
  for(int i = 0; i < 7; ++i) {
    long n;
    std::cin >> n;
    std::cout << n << "=" << generate_string(n) << std::endl;
  }
  return 0;
}
