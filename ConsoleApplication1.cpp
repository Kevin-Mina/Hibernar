#include <Windows.h>
#include <PowrProf.h>

#pragma comment(lib, "PowrProf.lib")

#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")


int main() {
    // Hibernar o sistema
    BOOL result = SetSuspendState(TRUE, FALSE, FALSE);

    if (!result) {
        // Falha ao hibernar o sistema
        DWORD error = GetLastError();
        // imprima uma mensagem de erro, etc.
        return 1;
    }

    return 0;
}
