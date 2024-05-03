#ifndef SD_STATE_MACHINE_H
#define SD_STATE_MACHINE_H

#include <Arduino.h>
#include <SD.h>
#include <Ticker.h>
#include "hardware_defs.h"
#include "can_defs.h"
#include "packets.h" 

void pinConfig(void); // Hardware and Interrupt Config
void setupVolatilePacket(mqtt_packet_t t); // volatile packet default values

/* SD definitions */
bool start_SD_device(void);
bool sdConfig(void);
int countFiles(File dir);
void sdSave(bool set); 
String Title_of_each_colum(void);
void Check_SD_for_storage(mqtt_packet_t packet);

/* Ticker definitions */
void setup_SD_ticker(void);
/* Ticker interrupts */
void ticker40HzISR(void);

#endif