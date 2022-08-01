#ifndef _CA_H
#define _CA_H

#include "state.h"

enum
{
    CA_waiting,
    CA_driving
} CA_state_id;

STATE_define(CA_waiting);
STATE_define(CA_driving);

extern void (*CA_state)();

#endif