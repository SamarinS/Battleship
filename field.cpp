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
unsigned key=matrix[num];
switch (key)
{
case 0:
    return 10;
    break;
case 1:
    matrix[num]=2;
    return 11;
    break;
case 2:
    return 10;
    break;
case 3:
    return 10;
    break;
default:
    return 100;
    break;
}

}
bool OppField::test(unsigned num)
{
    if(matrix[num]==4)
    {
    return true;
    }
    return quas();
}
void OppField::resshot(unsigned num, unsigned result)
{
switch (result)
{
case 10:
    matrix[num]=7;
    break;
case 11:
    matrix[num]=5;
    break;
case 12:
    matrix[num]=6;
            break;

default:

    break;
}
}
void MyField::init(void)
{
   //Init(&matrix[0]);
    InitMas(&matrix[0]);
}
OppField::OppField()
{
    unsigned a=0;
    for(unsigned k=0; k<121; k=k+1)
    {
        matrix[k]=4;
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
