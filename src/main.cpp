#include <iostream>
#include "SimpleGraph.h"
#include <fstream>
#include <string>

using namespace std;

std::string promptForFile(ifstream & infile, string prompt = "");


void Welcome();

// Main method
int main() {
    Welcome();
    return 0;
}

/* Prints a message to the console welcoming the user and
 * describing the program. */
void Welcome() {
    cout << "Welcome to ViewGraph!" << endl;
    cout << "This program uses a force-directed graph layout algorithm" << endl;
    cout << "to render sleek, snazzy pictures of various graphs." << endl;
    cout << endl;

    ifstream scoresFile;
    promptForFile(scoresFile, "input file:");


}

std::string promptForFile(std::ifstream & infile, std::string prompt){

    while (true)
    {
        std::cout << prompt;
        std::string filename;
        std::getline(std::cin,filename);
        infile.open(filename.c_str());
        if (!infile.fail())
            return filename;
        infile.clear();
        std::cout << "Unable to open file. Try again." << std::endl;
        if (prompt == "")
            prompt = "input file:";
    }
}
