
#include <iostream>
#include <cstdlib>
#include <string>
#include "funcs.h"


void usageInstruction (int argc, char *argv[]){
        if (argc != 3) {
        std::cout << "Usage Instruction : " << argv[0] << " [ compress | decompress ] [ file name ]\n";
        exit(-1);
    }

    std::string mode{argv[1]};
    std::string inputfile{argv[2]};

    if (mode == "compress" ) {
        compress(inputfile);
    }
    else if ( mode == "decompress" ){
        decompress(inputfile);
    }
    else {
        std::cout << "Usage Instruction :" << argv[0] << "[ compress | decompress ] [ file name ]\n";
        exit(-1);
    }

}
