#ifndef _US_H
#define _US_H

#include "state.h"

enum
{
    US_Busy
} US_state_id;

STATE_define(US_Busy);

void (*US_state)();

void US_init();

#endif