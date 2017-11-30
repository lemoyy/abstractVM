//
// Created by noi7 on 7/21/17.
//

#ifndef ABSTRACTVM_2016_INT16_H
#define ABSTRACTVM_2016_INT16_H

#include "IOperand.h"

class   Int16 : public IOperand
{
    public:
        Int16(const std::string &value);
        ~Int16();
};

#endif //ABSTRACTVM_2016_INT16_H
