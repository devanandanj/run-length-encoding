#include "funcs.h"
#include <fstream>
#include <iostream>
#include <string>

void decompress(std::string inputfile) {

  std::cout << "Decompress -> \n";
  std::ifstream infile(inputfile, std::ios::binary);
  if (!infile) {
    std::cout << "Error:: could not open the input file. Make sure it exists "
                 "in the same folder. \n";
    return;
  }

  char currentChar{};
  char charCount{};

  while (infile.get(currentChar) && infile.get(charCount)) {
    int count = static_cast<unsigned char>(charCount);
    count = charCount - '0';
    for (int i{}; i < count; i++) {
      std::cout << currentChar;
    }
  }
  std::cout << '\n';
}