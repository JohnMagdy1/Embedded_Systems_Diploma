#ifndef _DC_H
#define _DC_H

#include "state.h"

enum
{
    DC_Idle,
    DC_Busy
} DC_state_id;
STATE_define(DC_Idle);
STATE_define(DC_Busy);

extern void (*DC_state)();

void DC_init();

#endif