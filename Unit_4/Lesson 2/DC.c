#include "Dc.h"

void (*DC_state)();
int speed;


void DC_init(){
    printf("Motor is initialized\n");
}

extern unsigned int distance, CA_speed, threshold;

void DC_motor_speed(int s){
    speed = s;
    DC_state = STATE(DC_Busy);
    printf("CA -------------- speed = %d ---------------> DC\n", speed);
}

void print_state(){
    char *name = (CA_speed)? "Driving":"Waiting";
    printf("CA_%s state :   distance = %d    CA_speed = %d \n", name, distance, CA_speed);
    printf("===================================================\n");    
}

STATE_define(DC_Idle)
{
    // state action
    DC_state_id = DC_Idle;
    DC_state = STATE(DC_Idle);
    printf("DC_Idle state :   speed = %d \n", speed); 
}

STATE_define(DC_Busy)
{
    // state action
    DC_state_id = DC_Busy;
    DC_state = STATE(DC_Idle);
    printf("DC_Busy state :   speed = %d \n", speed); 
    print_state();
}
