//programa 101 para sumo de MAKERSATURIAS
//Realiza una estrategia basica de escaneo y ataque
//(CC) 2019 Sergio Lopez .@SergioPria
#include "L9110.h"
#include <VL53L0X.h>
#include <Wire.h>

#define analog_right 0
#define analog_left 1
//Variables
int distance=0;
int val_floor_right=0;
int val_floor_left=0;
int distance_thresh=300;
int floor_thresh=100;

bool laser_status=false;
bool floor_right_status=false;
bool floor_left_status=false; 

//Constructores
L9110 bot(6,9,10,11);
VL53L0X laser; 
void setup() {
  Serial.begin(9600); //seria para comprobar el funcionamiento del robot, debugg que dicen los estudiaos
  Wire.begin();// inicializamos Wire, el protocolo i2c
  laser.init();//inicializamos laser
  laser.setTimeout(500);
  laser.startContinuous();
  delay(1000);//retraso de 5 sg
}

void loop() {
//    bot.forward(100,100,10); //0?
    bot.rotate(128,128,-20);// si t<0 gira para un dcha y si t>0 gira pal otru
    delay(1000);
    bot.rotate(128,128,20);
    delay(1000);
}
