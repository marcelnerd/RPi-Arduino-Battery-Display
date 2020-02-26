#define ARR_SIZE 16

typedef union
{
 float number;
 uint8_t bytes[4];
} FLOATUNION_t;

float voltage_array[ARR_SIZE] = {0, 1.0, 2.0, 3.0, 4, 5, 6, 7, 8, 9, 10, 11, 12 , 63, 14, 15};
String arr_string = "";
int x = 0;

FLOATUNION_t fancyFloat;

void setup() {
  Serial.begin(9600);
}

void loop() {
  double voltage = 0;
  arr_string = "";
  
  //Read voltages from each battery
  for(int i=0; i<16; i++) {
    //TODO Read/calculate voltage
    //voltage_array[i] = ...
  }

  voltage_array[11] = x;

//  for(int i=0; i < ARR_SIZE; i++) {
//    arr_string.concat(voltage_array[i]);
//    if(!(i == ARR_SIZE-1)) {
//      arr_string.concat(",");
//    }
//  }

//  for(int i=0;i<ARR_SIZE;i++) {
//    fancyFloat.number = voltage_array[i];
//    for(int y=0;y<4;y++) {
//      Serial.write(fancyFloat.bytes[y]);
//    }
//    //Serial.println();
//  }

  for(int i=0;i<ARR_SIZE;i++) {
    Serial.println(voltage_array[i]);
  }
  Serial.println(-2);
  delay(1000);
  x++;
}
