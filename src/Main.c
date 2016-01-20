#include "stdio.h"
#include "TinyStick.h"
#include "Addresses.h"

__declspec(dllexport) int __cdecl Main(
)
{
    TinyGlobal(MAIN_ADDRESS_LOC, BYTE) = 0xE8;
    WriteFunc(MAIN_ADDRESS_LOC,MAIN_ADDRESS_LOC+1);
    return 1337;
}
