const int LDR = A0;      // LDR connected to A0
const int LED = 8;      // LED connected to pin 13

void setup() {
  pinMode(LED, OUTPUT);
    Serial.begin(9600);
    }

    void loop() {
      int light = analogRead(LDR);
        Serial.println(light);

          if (light < 500) {      // Dark
              digitalWrite(LED, HIGH);
                } else {                // Bright
                    digitalWrite(LED, LOW);
                      }

                        delay(100);
                        }