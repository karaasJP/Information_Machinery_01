void setup() {
Serial.begin(9600) ; // パソコン(ArduinoIDE)とシリアル通信の準備
}
void loop() {
int ans , temp , tv ;
ans = analogRead(0) ; // アナログ０番ピンからセンサー値を読込む
tv = map(ans,0,1023,0,5000) ; // センサー値を電圧に変換する
temp = map(tv,300,1600,-30,100) ; // 電圧から温度に変換する
// Serial.println(ans) ; // ansの値をパソコン(ＩＤＥ)に送る
// Serial.println(tv) ;　// tvの値をパソコンに送る
Serial.println(temp) ;  // tempの値をパソコンに送る
if (temp >= 30){
  digitalWrite(13,HIGH);
} else {
  digitalWrite(13,LOW);
}
delay(1000) ; // １秒毎に繰り返す
}
