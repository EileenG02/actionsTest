//
// Created by egarc on 2/18/2022.
//

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char** argv) {
    std::ifstream input(argv[1]);
    std::string inputFilePath(argv[1]);
    inputFilePath = inputFilePath.substr(0, inputFilePath.find_last_of('.'));

    //use inputFilePath to create output file in the input file's directory

    if (!input.is_open()){
        std::cout << "Input File not Found." << std::endl;
        return -1;
    }

    //read a line from the input file
    std::string firstLine;
    std::getline(input, firstLine);

    //output this firstLine to the output file
    std::ofstream outputFile;
    std::string outputFileName = inputFilePath + "-output.txt";
    std::cout << outputFileName << std::endl;
    outputFile.open(outputFileName);
    if (!outputFile.is_open()) {
        std::cout << "Output File not found." << std::endl;
        return -1;
    }
    //write to output file
    outputFile << firstLine;
    outputFile.close();

    return 0;
}