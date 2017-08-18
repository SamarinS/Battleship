#include "field.h"

int main(int argc, char *argv[])
{
MyField F1;
F1.init();
F1.output();
cout << endl;
F1.shot(15);
F1.shot(20);
F1.shot(59);
F1.shot(74);
F1.shot(114);
F1.output();
//bool a=quas();
    return 0;
}
