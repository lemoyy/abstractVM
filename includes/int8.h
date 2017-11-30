//
// Created by noi7 on 7/21/17.
//

#ifndef ABSTRACTVM_2016_INT8_H
#define ABSTRACTVM_2016_INT8_H

#include "IOperand.h"

class Int8 : public IOperand<int8_t>
{
public:
    Int8(const std::string &value);
    ~Int8();
};


#endif //ABSTRACTVM_2016_INT8_H
