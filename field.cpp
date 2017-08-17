#include "field.h"
Field::Field()
{
    unsigned a=0;
    for(unsigned k=0; k<121; k=k+1)
    {
        matrix[k]=0;
    }
for(unsigned i=1; i<11; i=i+1)
{
    matrix[i]=i;
}
for(unsigned j=1; j<11; j=j+1)
{

    a=a+11;
    matrix[a]=j;
}
}

void Field::output(void)
{

    OutPut(&matrix[0]);
}
unsigned MyField::shot(unsigned num)
{

    return 1;
}
bool OppField::test(unsigned num)
{
    return true;
}
void OppField::resshot(unsigned num, unsigned result)
{

}
void MyField::init(void)
{
   Init(&matrix[0]);
}
OppField::OppField()
{
    unsigned a=0;
    for(unsigned k=0; k<121; k=k+1)
    {
        matrix[k]=5;
    }
for(unsigned i=1; i<11; i=i+1)
{
    matrix[i]=i;
}
for(unsigned j=1; j<11; j=j+1)
{

    a=a+11;
    matrix[a]=j;
}
matrix[0]=0;
}
