//                                                                                            
// Created by ner0 on 7/21/17.                                                                
//                                                                                            

#ifndef ABSTRACTVM_2016_PARSER_H
#define ABSTRACTVM_2016_PARSER_H

#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include <regex>
#include <list>
#include <sstream>
#include <regex>
#include <map>
#include <utility>
#include <functional>
#include <locale>
#include "IOperand.h"

class Parser {
public:
    Parser();
    ~Parser();
    void    exec(std::vector <std::string> vec);
    void    parseOutput();
    void    parseFile(int ac, char **av);
private:
    std::vector<std::string> finalVec;
    std::vector<std::string> vecOutput;
    std::vector<std::string> vecFile;
    std::vector <std::string> tok;
    std::string _fileLine;
    std::string _outputLine;
};

#endif //ABSTRACTVM_2016_PARSER_H 
