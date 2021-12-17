#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "csv.hpp"

using namespace std;
using namespace csv;

int main(int argc, char** argv) {
    CSVReader reader(argv[1]);

    for (CSVRow& row: reader) {
        std::cout << row[argv[2]].get<string>() << "\n";
    }

    return 0;
}