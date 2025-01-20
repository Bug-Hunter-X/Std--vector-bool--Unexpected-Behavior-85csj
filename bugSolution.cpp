#include <vector>
#include <iostream>
int main() {
  std::vector<bool> vec;
  vec.push_back(true);
  vec.push_back(false);
  bool b = vec[0];
  bool c = vec[1];
  std::cout << "b: " << b << std::endl; //This will print unexpected result due to specialization
  std::cout << "c: " << c << std::endl; //This will print unexpected result due to specialization

  //Correct way
  std::vector<bool> vec2; //Or use std::bitset
  vec2.push_back(true);
  vec2.push_back(false);
  bool b2 = vec2[0];
  bool c2 = vec2[1];
  std::cout << "b2: " << b2 << std::endl;
  std::cout << "c2: " << c2 << std::endl; 
  return 0;
}