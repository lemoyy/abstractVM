//
// Created by noi7 on 7/21/17.
//

#ifndef ABSTRACTVM_2016_INT32_H
#define ABSTRACTVM_2016_INT32_H

#include "IOperand.h"

class   Int32 : public IOperand
{
public:
    int32(const std::string &value);
    ~int32();
};


#endif //ABSTRACTVM_2016_INT32_H
