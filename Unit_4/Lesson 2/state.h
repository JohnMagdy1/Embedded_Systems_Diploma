#ifndef _Stat_H
#define _Stat_H

#include <stdio.h>
#include <stdlib.h>

#define STATE_define(_stateFunc_) void ST_##_stateFunc_()
#define STATE(_stateFunc_) ST_##_stateFunc_

void US_distance_set(int d);
void DC_motor_speed(int s);

#endif