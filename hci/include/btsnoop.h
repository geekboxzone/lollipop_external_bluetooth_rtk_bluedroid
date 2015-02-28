#pragma once

#include <stdbool.h>

#include "bt_hci_bdroid.h"

void btsnoop_open(const char *p_path, const bool save_existing);
void btsnoop_close(void);

void btsnoop_capture(const HC_BT_HDR *p_buf, bool is_rcvd);
