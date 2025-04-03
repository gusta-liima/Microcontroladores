// ISSO É SÓ UM TESTE DE CONFIGURAÇÃO

#include <xc.h>

// Configuração dos bits de configuração do PIC18F4550
#pragma config FOSC = HSPLL_HS // Oscilador em alta velocidade
#pragma config PLLDIV = 5      // Divisor do PLL
#pragma config CPUDIV = OSC1_PLL2
#pragma config VREGEN = ON     // Regulador de tensão USB ativado
#pragma config WDT = OFF       // Watchdog Timer desligado
#pragma config PBADEN = OFF    // Port B configurado como digital
#pragma config LVP = OFF       // Desabilita programação em baixa voltagem

#define _XTAL_FREQ 48000000  // Define a frequência do oscilador (48MHz)

void main(void) {
    TRISBbits.TRISB0 = 0; // Configura RB0 como saída

    while (1) {
        LATBbits.LATB0 = 1; // Liga o LED
        __delay_ms(500);    // Espera 500ms
        LATBbits.LATB0 = 0; // Desliga o LED
        __delay_ms(500);    // Espera 500ms
    }
}
