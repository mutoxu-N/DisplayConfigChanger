// デュアルモニター設定を「PC画面のみ」に設定する
// 2023/09/14 mutoxu=N

#include <windows.h>
#include <winuser.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int nCmdShow) {
    SetDisplayConfig(0,NULL,0,NULL,SDC_TOPOLOGY_INTERNAL|SDC_APPLY);
    return 0;
}
