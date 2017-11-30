//
// parser.cpp for parser in /home/noi7/Lab/synthesis_pool/abstractVM_2016
// 
// Made by thomas
// Login   <noi7@epitech.net>
// 
// Started on  Fri Jul 21 11:30:07 2017 thomas
// Last update Fri Jul 21 11:30:08 2017 thomas
//

#include "includes/Parser.h"

Parser::Parser(){

}

Parser::~Parser(){
}
/*
std::string   Parser::getFile() {
    return (this->_file);
}
*/
void    Parser::parseOutput() {
    while (1) {
         getline(std::cin, this->_outputLine);
         std::cout << "output: " << this->_outputLine << std::endl;
        }
}

void    Parser::parseFile(char *av) {
    /*getFile().open(av);*/
    ofstream file;
    if (file.open(av, std::ios::in))
        while (getline(std::cin, this->_fileLine)) {
            std::cout << "line: " << this->_fileLine << std::endl;
        }
    this->getFile().close;
}

void    Parser::setParse(int ac, char **av) {
    if (ac == 1)
        parseOutput();
    else if (ac == 2)
        parseFile(av[1]);
}