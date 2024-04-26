#include "lib.h"
#include "MKL25Z4.h"

void pinIO(int pin, char IO){
    PORTA -> PCR[pin] |= PORT_PCR_MUX (IO);
     if(IO=='i'){
         PORTA -> PCR[pin] |= PORT_PCR_MUX(0);
    }else if(IO=='o'){
        PORTA -> PCR[pin] |= PORT_PCR_MUX(1);
     }

}
int estado (int pin){
    int estado = PTA -> PDIR & (1u<<pin);
    return estado;

}
char pinAoI(int pin){
    if(estado(pin)==1){
        return 'A';
    }else if (estado(pin)==0){
        return 'I';
    
}
}
int establecer(int pin, int est){
        PTA -> PSOR |= (est<<pin);
    
}
