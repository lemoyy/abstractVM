//
// Created by noi7 on 7/21/17.
//

#include "includes/Parser.h"

Parser::Parser() {
}

Parser::~Parser() {
}

void    Parser::exec(std::vector <std::string> vec) {
    std::string line;
    std::string buf;
    std::size_t found;

    for (int i = 0; i < vec.size(); i++) {
        if (vec[i][0] != ';') {
            this->finalVec.push_back(vec[i]);
        }
    }
    for (auto it = finalVec.begin(); it != finalVec.end(); it++) {
        line = (*it);

        if ((found = line.find(";")) != std::string::npos)
            line.erase(found, line.size());
        std::stringstream iss(line);
        while (iss >> buf)
            this->tok.push_back(buf);
    }
    for (auto it = this->tok.begin(); it != this->tok.end(); ++it) {
        std::cout << *it << std::endl;
        if ((*it).compare("exit") == 0)
            return;
    }
}

void    Parser::parseOutput() {
    std::string tmp;

    while (this->_outputLine != ";;") {
        getline(std::cin, this->_outputLine);
        this->vecOutput.push_back(this->_outputLine);
    }
    vecOutput.erase(vecOutput.end());
    exec(this->vecOutput);
}

void    Parser::parseFile(int ac, char **av) {
    std::ifstream file (av[1]);

    if (file.is_open())
    while (getline(file, this->_fileLine))
        this->vecFile.push_back(this->_fileLine);
    exec(this->vecFile);
    file.close();
}

int main(int ac, char **av) {
    Parser parse;
    if (ac == 1)
        parse.parseOutput();
    else if (ac == 2)
        parse.parseFile(ac, av);
    return (0);
}