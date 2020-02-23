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
  val_floor_right=analogRead(0);
  val_floor_left=analogRead(1);
  if(val_floor_right>floor_thresh){
    floor_right_status=false;
  }
  else{
    floor_right_status=true;
  }
  if(val_floor_left>floor_thresh){
    floor_left_status=false;
  }
  else{
    floor_left_status=true;
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
  Serial.print(" | ");
  if(laser_status==true){
    Serial.print("ADELANTE");
  }
  else{
    Serial.print("SCAN");
  }
  Serial.println("");
}
