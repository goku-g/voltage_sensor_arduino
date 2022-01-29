// code for measuring voltage by using voltage sensor and arduino.
//goku-g

float v_out = 0.0;
float v_in = 0.0;
float r1 = 30000.0;
float r2 = 7500.0;
int value = 0;

const int sensor_pin = A1;

void setup()
{
//  pinMode(sensor_pin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  value = analogRead(sensor_pin);
  Serial.println(value);
  v_out = (value * 5.0) / 1024.0;
  v_in = v_out / (r2/(r1+r2));
  Serial.print("Input = ");
  Serial.println(v_in);
  delay(100);
}
