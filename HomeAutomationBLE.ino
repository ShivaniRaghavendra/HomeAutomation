#include <BluetoothSerial.h>

BluetoothSerial SerialBT; 

String voice;
int light = 4, fan = 33, tv = 5;

void allon() {
  digitalWrite(light, HIGH);
  digitalWrite(fan, HIGH);
  digitalWrite(tv, HIGH);
}

void alloff() {
  digitalWrite(light, LOW);
  digitalWrite(fan, LOW);
  digitalWrite(tv, LOW);
}

void setup() {
  Serial.begin(9600);
  SerialBT.begin("abcd"); 
  
  pinMode(light, OUTPUT);
  pinMode(fan, OUTPUT);
  pinMode(tv, OUTPUT);
}
void lightOn() {
  digitalWrite(light, HIGH);
}

void lightoff() {
  digitalWrite(light, LOW);
}
void fanOn() {
  digitalWrite(fan, HIGH);
}

void fanOff() {
  digitalWrite(fan, LOW);
}
void tvOn() {
  digitalWrite(tv, HIGH);
}

void tvOff() {
  digitalWrite(tv, LOW);
}
void loop() {
 
  while (SerialBT.available()) {
    delay(10); 
    char c = SerialBT.read(); 
    if (c == '#') { 
      break;
    }
    voice += c;  
  }

  if (voice.length() > 0) { 
    Serial.println(voice); 

    if (voice == "everything on") {
      allon(); 
    } else if (voice == "everything off") {
      alloff(); 
    } else if (voice == "light on") {
      lightOn(); 
    }  else if (voice == "light off") {
      lightoff(); 
    }  else if (voice == "fan on") {
      fanOn(); 
    }  else if (voice == "fan off") {
      fanOff(); 
    }  else if (voice == "tv on") {
      tvOn(); 
    }  else if (voice == "tv off") {
      tvOff(); 
    } else {
      Serial.println("Unknown command");
    }

    voice = ""; 
  }
}
