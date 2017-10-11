void setup() {
Serial.begin(9600) ; // パソコンとシリアル通信の準備を行う
}
void loop() {
char c ;
if (Serial.available() > 0) { // データをIDEから受信したら処理開始
c = Serial.read() ; // データを１バイト読込む
Serial.write(c) ; // そのままデータを送り返す
}
}
