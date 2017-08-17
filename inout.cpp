#include "inout.h"
void OutPut(unsigned *mat)
{
for(unsigned i=0; i<11; i=i+1)
{

    for(unsigned j=0; j<11; j=j+1)
    {
        cout << *mat << " ";
        mat=mat+1;
    }
cout << endl;
}
}
void Init(unsigned *mat)
{
    unsigned x, y, step;
    cout << "Input sheeps" << endl;
    for(unsigned i=0; i<20; i=i+1)
    {
        cout << "Input x" << endl;
        cin >> x;
        cout << "Input y" << endl;
        cin >> y;
        step=y*11+x;
        mat=mat+step;
        *mat=1;
        mat=mat-step;
    }
}
