//
// Created by noi7 on 7/21/17.
//

#ifndef ABSTRACTVM_2016_DOUBLE_H
#define ABSTRACTVM_2016_DOUBLE_H

#include "IOperand.h"

class Double: public IOperand<Double>
{
public:
    Double(const std::string &value);
    ~Double();
};

#endif //ABSTRACTVM_2016_DOUBLE_H
