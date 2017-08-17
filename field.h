#ifndef FIELD_H
#define FIELD_H
#include "inout.h"
class Field
{
public:
    Field();
    unsigned matrix[121];
void output();
};
class MyField : public Field
{
public:
    unsigned shot(unsigned num);
    void init(void);
};
class OppField : public Field
{
public:
    OppField();
    bool test(unsigned num);
    void resshot(unsigned num, unsigned result);
};
#endif // FIELD_H
