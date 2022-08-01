#include "CA.h"

void (*CA_state)();
unsigned int distance, CA_speed, threshold = 50;

void US_distance_set(int d){
    distance = d;
    CA_state = (distance <= threshold) ? STATE(CA_waiting): STATE(CA_driving);
    printf("US -------------- distance = %d ------------> CA\n", distance);
}

STATE_define(CA_waiting)
{
    // state action
    CA_state_id = CA_waiting;
    CA_speed = 0;
    DC_motor_speed(CA_speed);
}

STATE_define(CA_driving)
{
    // state action
    CA_state_id = CA_driving;
    CA_speed = 30;
    DC_motor_speed(CA_speed);
}

