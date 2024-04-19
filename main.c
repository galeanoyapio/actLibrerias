#include "lib.h"
#include "MKL25Z4.h"

int main(){
    SIM -> SCGC5 |= SIM_SCGC5_PORTE_MASK;
    pinIO(0,'i');
    pinIO(1,'i');
    pinIO(4,'o');
    pinIO(5,'o');
    pinIO(6,'o');
    pinIO(7,'o');

    while(1){
        
    }
}