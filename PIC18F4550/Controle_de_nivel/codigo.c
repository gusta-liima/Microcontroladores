#include <pic18f4550.h>

#define BT_on PORTAbits.RA0
#define BT_off PORTAbits.RA1
#define S1_min PORTBbits.RB0
#define S2_max PORTBbits.RB1
#define LED PORTCbits.RC0
#define motor PORTCbits.RC1

void main(){

    //Ajuste da frequencia interna do microcontrolador para 2Mhz com uma fonte de clock interna
    OSCCON = 0x5E;

    //Ajuste dos pinos de saída e entrada
    TRISA = 0x03; //Pinos a são input
    TRISB = 0x03; //Pinos b são input
    TRISC = 0x00; //Pinos c são output

    //Desabilita a função analógica dos pinos ANx
    ADCON1 = 0x0F;

    //Loop do programa
    while (1)
    {
        //Controle automatico ativado
        if (BT_on == 1 && BT_off == 0){
            LED = 1;
            //verifica se o nivel esta abaixo do minimo e então, caso sim, liga o motor
            if(S1_min == 0 && S2_max == 0){
                motor = 1;
            }
            //verifica se o nivel esta acima do maximo e então, caso sim, desliga o motor
            if (S1_min == 1 && S2_max == 1){
                motor = 0;
            }
        }
        //Controle automatico desativado
        if (BT_off == 1){
            motor = 0;
            LED = 0;
        }
    }
}
