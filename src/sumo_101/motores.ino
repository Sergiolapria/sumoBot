void adelante(int t1){
  bot.forward(150,150,10);
  delay(t1);
  bot.brake(20);
}
void derecha(int t1){
  bot.rotate(50,50,-250);
  delay(t1);
  bot.brake(20);
}
void izquierda(int t1){
  bot.rotate(50,50,250);
  delay(t1);
  bot.brake(20);
}
void atras(int t1){
  bot.reverse(150,150,10);
  delay(t1);
  bot.brake(20);
}
void para(){
  bot.brake(20);
}
