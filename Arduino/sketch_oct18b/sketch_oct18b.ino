//加速度センサの値を取得するプログラム
void setup()
{
  Serial.begin(9600) ; // シリアルモニターの初期化をする
}
void loop()
{
  long x, y, z ;
  x = y = z = 0 ;
  x = analogRead(3) ; // Ｘ軸
  y = analogRead(4) ; // Ｙ軸
  z = analogRead(5) ; // Ｚ軸
  Serial.print("X:") ;
  Serial.print(x) ;
  Serial.print(" Y:") ;
  Serial.print(y) ;
  Serial.print(" Z:") ;
  Serial.println(z) ;
  delay(100) ;
}
