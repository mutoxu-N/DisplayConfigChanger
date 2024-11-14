// デュアルモニター設定を「拡張」に設定する
// 2023/09/14 mutoxu=N

#include <windows.h>
#include <winuser.h>

int main() {
    SetDisplayConfig(0, NULL, 0, NULL, SDC_TOPOLOGY_EXTEND | SDC_APPLY);
    return 0;
}
