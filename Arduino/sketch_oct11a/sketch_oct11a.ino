void setup() {
Serial.begin(9600) ; // パソコンとシリアル通信の準備を行う
}
void loop() {
double ans ;
ans = analogRead(0) ; // アナログ０番ピンから可変抵抗の値を読み込む

ans = ans*5/1023; //0-1023の値から，電圧の値に変換

printf("Hell")

Serial.println(ans) ; // 読み取った値をパソコン(ＩＤＥ)に送る
delay(500) ; // 約１秒間隔で処理を繰り返し実行させる
}
