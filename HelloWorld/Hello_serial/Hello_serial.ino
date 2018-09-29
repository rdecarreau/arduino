String inpString;
String hello = "Hello World";
String bye = "Good Bye";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600, SERIAL_8N1);
  Serial.println("This is printing");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()) {
    inpString = Serial.readStringUntil();
  }
  inpString.trim();
  if(inpString.length() > 0) {
    Serial.println(inpString);
    if(strcmp(hello.c_str(), inpString.c_str())==0) {
      Serial.println("Well Hello!");
    }
    if(strcmp(bye.c_str(), inpString.c_str())==0) {
      Serial.println("Have a good one");
    }
    inpString = "";
  }
}
