#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include "Grade.h"

int main(int argc, char*argv[]) {
    std::string fileName = argv[1];
    std::ifstream file(fileName);
    std::string line;
    
    std::string category;
    std::string name;
    double grade;

    while(std::getline(file, line)) {
        std::istringstream data(line);

        data >> category >> name >> grade;
    }
    
    return 0;
}
