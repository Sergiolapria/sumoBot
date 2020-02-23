void laser_scan(){
  distance=laser.readRangeContinuousMillimeters();
  Serial.print("DISTANCIA : ");
  Serial.println(distance);
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
  Serial.print(val_floor_right);
  Serial.print(" : ");
  Serial.println(val_floor_left);
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
