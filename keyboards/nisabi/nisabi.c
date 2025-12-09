#include "nisabi.h"

#include "print.h"

void matrix_scan_user(void) {
    #ifdef CONSOLE_ENABLE
    static uint32_t last_print = 0;
    uint32_t current_time = timer_read32();

    if (current_time - last_print > 1000) {  // 1秒ごとに状態を出力
        last_print = current_time;

    // 現在のマスター/スレーブの状態を出力
        if (is_keyboard_master()) {
            uprintf("Master side active\n");
        } else {
            uprintf("Slave side active\n");
        }
    }
    #endif
}

