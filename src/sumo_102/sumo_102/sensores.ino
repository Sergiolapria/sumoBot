void laser_scan(){
  distance=laser.readRangeContinuousMillimeters();
  if(laser.timeoutOccurred()){
    Serial.println("TIMEOUT");
  }
  if(distance<distance_thresh){
    laser_status=true;
  }
  else{
    laser_status=false;
  }
}
void floor_scan(){
  val_floor_right=analogRead(analog_right);
  val_floor_left=analogRead(analog_left);
  if(val_floor_right<floor_thresh){
    floor_right_status=true;
  }
  else{
    floor_right_status=false;
  }
  if(val_floor_left<floor_thresh){
    floor_left_status=true;
  }
  else{
    floor_left_status=false;
  }
}
void report_serial(){
  Serial.print("DISTANCIA : ");
  Serial.print(distance);
  Serial.print(" | ");
  Serial.print("IR DERECHO : ");
  Serial.print(val_floor_right);
  Serial.print(" | ");
  Serial.print("IR IZQUIERDO : ");
  Serial.print(val_floor_left);
  Serial.println("");
}
