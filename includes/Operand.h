//
// Created by noi7 on 7/24/17.
//

#ifndef ABSTRACTVM_2016_OPERAND_H
#define ABSTRACTVM_2016_OPERAND_H

namespace		AbstractVM
{
    namespace 	Operand
    {
        template <typename T>
        class 	Operand : public IOperand
        {
        protected:
            eOperandType	_type;
            std::string 	_str;

        public:
            virtual std::string const & toString() const;

            virtual int getPrecision() const;
            virtual eOperandType getType() const;

            virtual IOperand * operator+(const IOperand &rhs) const;
            virtual IOperand * operator-(const IOperand &rhs) const;
            virtual IOperand * operator*(const IOperand &rhs) const;
            virtual IOperand * operator/(const IOperand &rhs) const;
            virtual IOperand * operator%(const IOperand &rhs) const;

            Operand(eOperandType type, const std::string & value);
            virtual ~Operand();
        };
    }
}

#endif //ABSTRACTVM_2016_OPERAND_H
