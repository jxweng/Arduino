
 const int INPUT_PIN = A0;    // 入力ピンをA0に固定
 int VOLUME;                  // 変数を整数型で宣言
 
 
 void setup(){
 
   Serial.begin(9600);  // シリアル通信の開始
  
}
 
 
 void loop(){
 
   VOLUME = analogRead(INPUT_PIN);  // アナログ値の読み取り
   Serial.println(VOLUME);
 
   delay(100);
 
}
 
