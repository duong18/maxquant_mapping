#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "csv.hpp"

using namespace std;
using namespace csv;

void split(const std::string &s, char delim, std::vector<std::string> &elems) {
    std::stringstream ss;
    ss.str(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        elems.push_back(item);
    }
}

int main() {
    CSVReader reader("/Users/db/Downloads/maxquant_output_Muscle_T_MBR_True/combined/txt/allPeptides.txt");

    for (CSVRow& row: reader) { // Input iterator
        for (CSVField& field: row) {
            // By default, get<>() produces a std::string.
            // A more efficient get<string_view>() is also available, where the resulting
            // string_view is valid as long as the parent CSVRow is alive
            std::cout << field.get<>() << "," ;
        }
    }

    /*
    std::ifstream infile ("/Users/db/Downloads/maxquant_output_Muscle_T_MBR_True/combined/txt/allPeptides.txt");

    std::string line;



    while (std::getline(infile, line))
    {
        //cout << line;

        vector<string> row_values;

        split(line, '\t', row_values);
        //cout << row_values[0] << row_values[1];
        for (int i = 0; i < row_values.size()-1; i++)
        {
            cout << row_values[i] << ',';
        }
        cout << row_values[row_values.size()-2];

        for (string v: row_values) {
            cout << v;
        }




        cout << endl;
    }
    */

    std::cout << "I am Duong. Hello, World!" << std::endl;
    return 0;
}