#include <iostream>
#include <string>
#include <fstream>

void compress(std::string inputfile){

    std::cout << "Compressed output : ";
    std::ifstream infile(inputfile, std::ios::binary ); //input text file 
    if (!infile) {
        std::cout << "Error ::  Make sure it exists in the same folder. \n";
        return;
    }

    char currentChar{};
    char nextChar{};
    int count{1};

    if (infile.get(currentChar)) {

        while (infile.get(nextChar)) {

            if (currentChar == nextChar && count < 256){ // upto 256 to prevent overflow
                count++;
            }
            else {
                std::cout << currentChar << count << " ";
                currentChar = nextChar;
                count = 1;
            }
        }
    std::cout << currentChar << count << '\n';
    }

}