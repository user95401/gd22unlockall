#include "ModUtils.hpp"
#include "HooksUtils.hpp"
using namespace cocos2d;
using namespace extension;

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    if (ul_reason_for_call != DLL_PROCESS_ATTACH) return TRUE;
    //why we create new thread for that even?
    ModUtils::write_bytes(gd::base + 0x120170, { 0xb0, 0x01, 0xc2, 0x08, 0x00, 0x68, 0xb8, 0x1d });
    ModUtils::write_bytes(gd::base + 0x120670, { 0xb0, 0x01, 0xc2, 0x08, 0x00, 0x68, 0xb8, 0x1d });
    return TRUE;
}
