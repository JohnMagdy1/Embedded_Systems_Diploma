#include "state.h"
#include "Dc.h"
#include "US_sensors.h"
#include "CA.h"

void setup()
{
    US_init();
    DC_init();
    CA_state = STATE(CA_waiting);
    US_state = STATE(US_Busy);
    DC_state = STATE(DC_Idle);
    printf("===================================================\n");  
}

void main()
{
    setup();
    while (1)
    {
        US_state();
        CA_state();
        DC_state();
        for (int d = 0; d <= 1000000000; d++);  /* for delay */
    }
}
