#include "lib.h"
#include "MKL25Z4.h"

int main(){
    SIM -> SCGC5 |= SIM_SCGC5_PORTA_MASK;
    pinIO(9,'i'); //enabled
    pinIO(0,'i'); //e0
    pinIO(1,'i'); //e1
    pinIO(4,'o'); //s0
    pinIO(5,'o'); //s1
    pinIO(6,'o'); //s2
    pinIO(7,'o'); //s3

    while(1){

        if(pinAoI(9)=='A'){
            if((pinAoI(0) && pinAoI(1)) == 'A'){ //s4
                establecer(7,'A');
            }elseif((pinAoI(0) && pinAoI(1) == 'I')) { //s0
                establecer(4,'A');
            }elseif((pinAoI(0)=='I') && (pinAoI(1)=='A')){ //s1
                establecer(5,'A');
            }elseif((pinAoI(0)=='A') && (pinAoI(1)=='I')){ //s2
                establecer(6,'A');
            }
        }elseif(pinAoI(9)=='I'){
            establecer(4,'I');
            establecer(5,'I');
            establecer(6,'I');
            establecer(7,'I');
        }
    }return 0;
}
