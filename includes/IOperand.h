/*
** IOperand.h for IOperand in /home/noi7/Lab/synthesis_pool/abstractVM_2016/includes
** 
** Made by thomas
** Login   <noi7@epitech.net>
** 
** Started on  Fri Jul 21 09:29:34 2017 thomas
** Last update Fri Jul 21 09:31:07 2017 thomas
*/

#ifndef IOPERAND_H_
#define IOPERAND_H_

#include <iostream>
#include <string>
#include "Parser.h"

enum 		eOperandType
{
    INT8 = 0,
    INT16,
    INT32,
    FLOAT,
    DOUBLE
};

class IOperand
{
 public:
    virtual std::string toString() const = 0;
    /* virtual eOperandType getType() = 0; */

    virtual IOperand* operator+(const IOperand &rhs) const = 0;
    virtual IOperand* operator-(const IOperand &rhs) const = 0;
    virtual IOperand* operator*(const IOperand &rhs) const = 0;
    virtual IOperand* operator/(const IOperand &rhs) const = 0;
    virtual IOperand* operator%(const IOperand &rhs) const = 0;

    virtual ~IOperand() {}
};

#endif
