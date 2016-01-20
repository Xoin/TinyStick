#include "TinyStick.h"

void WriteFunc(INT Address, INT Value)
{
    TinyGlobal(Address, BYTE) = 0xE8;
    TinyGlobal(Address+1, INT) = Value;
}
