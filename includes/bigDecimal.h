//
// Created by noi7 on 7/21/17.
//

#ifndef ABSTRACTVM_2016_BIGDECIMAL_H
#define ABSTRACTVM_2016_BIGDECIMAL_H

#include "IOperand.h"

class bigDecimal : public IOperand<bigDecimal>
{
public:
    bigDecimal(const std::string &value);
    ~bigDecimal();
};

#endif //ABSTRACTVM_2016_BIGDECIMAL_H
