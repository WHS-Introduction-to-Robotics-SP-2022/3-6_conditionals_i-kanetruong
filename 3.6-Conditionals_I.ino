int val;
void setup() { //start
pinMode(LED_BUILTIN, OUTPUT);
pinMode(A0, INPUT);
Serial.begin(9600);
}void loop() {
val=analogRead(A0);
if (val>511){ //off
digitalWrite(LED_BUILTIN, LOW);
Serial.println("OFF");
}else{ //on
digitalWrite(LED_BUILTIN, HIGH);
Serial.println("ON");
}delay(100); //end
}
