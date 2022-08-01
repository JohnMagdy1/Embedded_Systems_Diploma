#include "US_Sensors.h"

extern void (*US_state)();

int US_distance;

int generate_random(int l, int r) { return l + rand()%(r-l+1); }

void US_init(){
    printf("Sensors are initialized\n");
}

extern int speed, distance, threshold;

STATE_define(US_Busy)
{
    // state action
    US_state_id = US_Busy;
    
    US_distance = generate_random(45, 55);
    // check event

    printf("US_Busy state :   distance = %d\n", US_distance);
    
    if(speed != 0 && US_distance <= threshold) printf("\n\t\tDriving =====> Waiting \n\n");
    else if(speed == 0 && US_distance > threshold) printf("\n\t\tWaiting =====> Driving \n\n");
    else printf("\n\t\t No State Change \n\n");
    

    US_distance_set(US_distance);

    US_state = STATE(US_Busy);

}