  
#define ARR_SIZE 16

typedef union
{
 float number;
 uint8_t bytes[4];
} FLOATUNION_t;

float voltage_array[ARR_SIZE] = {0, 1.0, 2.0, 3.0, 4, 5, 6, 7, 8, 9, 10, 11, 12 , 63, 14, 15};
String arr_string = "";

void setup() {
  Serial.begin(9600);
  for(int i; i<ARR_SIZE);i++) {
    int len = 'A'+i;
    pinMode(len, INPUT);
  }
}

void loop() {
  arr_string = "";
  
  //Read voltages from each battery
  for(int i=0; i<16; i++) {
    voltage_array[i] = ((analogRead('A'+i) * 5) / 1024.0);
  }

  for(int i=0;i<ARR_SIZE;i++) {
    Serial.println(voltage_array[i]);
  }
  Serial.println(-2);
  delay(1000);
  x++;
}
