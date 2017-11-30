//
// Created by noi7 on 7/21/17.
//

#ifndef ABSTRACTVM_2016_FLOAT_H
#define ABSTRACTVM_2016_FLOAT_H

#include "IOperand.h"

class Float : public IOperand<Float>
{
public:
    Float(const std::string &value);
    ~Float();
};

#endif //ABSTRACTVM_2016_FLOAT_H
