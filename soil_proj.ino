const int moisture_sensor = A0;
const int relay = 5;

const int moisture_threshold = 259;

float moist_val;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(moisture_sensor, INPUT);
  pinMode(relay, OUTPUT);
} 

void loop() {
  // put your main code here, to run repeatedly:
  moist_val = analogRead(moisture_sensor);
  Serial.println(moist_val);
  delay(1000);
  if (moist_val > moisture_threshold){
    // pump water in increments of 1 sec as it takes sensor ~1 sec to read
    digitalWrite(relay, HIGH);
    delay(1000);
    digitalWrite(relay, LOW);
    delay(1000);
    Serial.println(moist_val);
    Serial.println("water pumped for 1 sec");
  }
    
}