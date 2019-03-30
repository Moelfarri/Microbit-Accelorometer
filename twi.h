#ifndef TWI_H
#define TWI_H
#define TWI0 ((NRF_TWI_REG*)0x40003000)
#include <stdint.h>
void twi_init();

typedef struct {
//Tasks
volatile uint32_t STARTRX;
volatile uint32_t WASTE[1];
volatile uint32_t STARTTX;
volatile uint32_t WASTE1[2];
volatile uint32_t STOP;
volatile uint32_t WASTE2[1];
volatile uint32_t SUSPEND;
volatile uint32_t RESUME;
volatile uint32_t WASTE3[56];
//Events
volatile uint32_t STOPPED;
volatile uint32_t RXDREADY;
volatile uint32_t WASTE4[4];
volatile uint32_t TXDSENT;
volatile uint32_t WASTE5[1];
volatile uint32_t ERROR;
volatile uint32_t WASTE6[4];
volatile uint32_t BB;
volatile uint32_t WASTE7[49];
//Registers
volatile uint32_t SHORTS;
volatile uint32_t WASTE8[63];
volatile uint32_t INTEN;
volatile uint32_t INTENSET;
volatile uint32_t INTENCLR;
volatile uint32_t WASTE9[110];
volatile uint32_t ERRORSRC;
volatile uint32_t WASTE10[14];
volatile uint32_t ENABLE;
volatile uint32_t WASTE11[1];
volatile uint32_t PSELSCL;
volatile uint32_t PSELDA;
volatile uint32_t WASTE12[2];
volatile uint32_t RXD;
volatile uint32_t TXD;
volatile uint32_t WASTE13[1];
volatile uint32_t FREQUENCY;
volatile uint32_t WASTE14[24];
volatile uint32_t ADDRESS;
} NRF_TWI_REG;

void twi_multi_read(
uint8_t slave_address,
uint8_t start_register,
int registers_to_read,
uint8_t * data_buffer
);
#endif