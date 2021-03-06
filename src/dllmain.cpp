/*
    CONTRIBUTORS:
        Sean Pesce

*/

#include "dllmain.h"


BOOL APIENTRY DllMain(HMODULE h_module, DWORD ul_reason_for_call, LPVOID lp_reserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        return dll::on_process_attach(h_module, lp_reserved);
        break;

    case DLL_THREAD_ATTACH:
        return dll::on_thread_attach(h_module, lp_reserved);
        break;

    case DLL_THREAD_DETACH:
        return dll::on_thread_detach(h_module, lp_reserved);
        break;

    case DLL_PROCESS_DETACH:
        return dll::on_process_detach(h_module, lp_reserved);
        break;
    }
    return TRUE;
}

