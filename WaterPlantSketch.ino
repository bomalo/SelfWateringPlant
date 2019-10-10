/*
  By Bobby Malone 2017


  Pinout for HP Bubble Display:
  1:  Cathode 1
  2:  Anode E
  3:  Anode C
  4:  Cathode 3
  5:  Anode dp
  6:  Cathode 4
  7:  Anode G
  8:  Anode D
  9:  Anode F
  10: Cathode 2
  11: Anode B
  12: Anode A

  Here is the character map found in the SevSeg.h file for reference
  as to which characters can be displayed and which can't.

  //  ABCDEFG  Segments
  0b1111110, // 0
  0b0110000, // 1
  0b1101101, // 2
  0b1111001, // 3
  0b0110011, // 4
  0b1011011, // 5
  0b1011111, // 6
  0b1110000, // 7
  0b1111111, // 8
  0b1111011, // 9
  0b1110111, // 10  "A"
  0b0011111, // 11  "B"
  0b1001110, // 12  "C"
  0b0111101, // 13  "D"
  0b1001111, // 14  "E"
  0b1000111, // 15  "F"
  0b0000000, // 16  NO DISPLAY
  0b0000000, // 17  NO DISPLAY
  0b0000000, // 18  NO DISPLAY
  0b0000000, // 19  NO DISPLAY
  0b0000000, // 20  NO DISPLAY
  0b0000000, // 21  NO DISPLAY
  0b0000000, // 22  NO DISPLAY
  0b0000000, // 23  NO DISPLAY
  0b0000000, // 24  NO DISPLAY
  0b0000000, // 25  NO DISPLAY
  0b0000000, // 26  NO DISPLAY
  0b0000000, // 27  NO DISPLAY
  0b0000000, // 28  NO DISPLAY
  0b0000000, // 29  NO DISPLAY
  0b0000000, // 30  NO DISPLAY
  0b0000000, // 31  NO DISPLAY
  0b0000000, // 32 ' '
  0b0000000, // 33 '!'  NO DISPLAY
  0b0100010, // 34 '"'
  0b0000000, // 35 '#'  NO DISPLAY
  0b0000000, // 36 '$'  NO DISPLAY
  0b0000000, // 37 '%'  NO DISPLAY
  0b0000000, // 38 '&'  NO DISPLAY
  0b0100000, // 39 '''
  0b1001110, // 40 '('
  0b1111000, // 41 ')'
  0b0000000, // 42 '*'  NO DISPLAY
  0b0000000, // 43 '+'  NO DISPLAY
  0b0000100, // 44 ','
  0b0000001, // 45 '-'
  0b0000000, // 46 '.'  NO DISPLAY
  0b0000000, // 47 '/'  NO DISPLAY
  0b1111110, // 48 '0'
  0b0110000, // 49 '1'
  0b1101101, // 50 '2'
  0b1111001, // 51 '3'
  0b0110011, // 52 '4'
  0b1011011, // 53 '5'
  0b1011111, // 54 '6'
  0b1110000, // 55 '7'
  0b1111111, // 56 '8'
  0b1111011, // 57 '9'
  0b0000000, // 58 ':'  NO DISPLAY
  0b0000000, // 59 ';'  NO DISPLAY
  0b0000000, // 60 '<'  NO DISPLAY
  0b0000000, // 61 '='  NO DISPLAY
  0b0000000, // 62 '>'  NO DISPLAY
  0b0000000, // 63 '?'  NO DISPLAY
  0b0000000, // 64 '@'  NO DISPLAY
  0b1110111, // 65 'A'
  0b0011111, // 66 'B'
  0b1001110, // 67 'C'
  0b0111101, // 68 'D'
  0b1001111, // 69 'E'
  0b1000111, // 70 'F'
  0b1011110, // 71 'G'
  0b0110111, // 72 'H'
  0b0110000, // 73 'I'
  0b0111000, // 74 'J'
  0b0000000, // 75 'K'  NO DISPLAY
  0b0001110, // 76 'L'
  0b0000000, // 77 'M'  NO DISPLAY
  0b0010101, // 78 'N'
  0b1111110, // 79 'O'
  0b1101111, // 80 'P'
  0b1110011, // 81 'Q'
  0b0000101, // 82 'R'
  0b1011011, // 83 'S'
  0b0001111, // 84 'T'
  0b0111110, // 85 'U'
  0b0000000, // 86 'V'  NO DISPLAY
  0b0000000, // 87 'W'  NO DISPLAY
  0b0000000, // 88 'X'  NO DISPLAY
  0b0111011, // 89 'Y'
  0b0000000, // 90 'Z'  NO DISPLAY
  0b1001110, // 91 '['
  0b0000000, // 92 '\'  NO DISPLAY
  0b1111000, // 93 ']'
  0b0000000, // 94 '^'  NO DISPLAY
  0b0001000, // 95 '_'
  0b0000010, // 96 '`'
  0b1110111, // 97 'a' SAME AS CAP
  0b0011111, // 98 'b' SAME AS CAP
  0b0001101, // 99 'c'
  0b0111101, // 100 'd' SAME AS CAP
  0b1101111, // 101 'e'
  0b1000111, // 102 'f' SAME AS CAP
  0b1011110, // 103 'g' SAME AS CAP
  0b0010111, // 104 'h'
  0b0010000, // 105 'i'
  0b0111000, // 106 'j' SAME AS CAP
  0b0000000, // 107 'k'  NO DISPLAY
  0b0110000, // 108 'l'
  0b0000000, // 109 'm'  NO DISPLAY
  0b0010101, // 110 'n' SAME AS CAP
  0b0011101, // 111 'o'
  0b1100111, // 112 'p' SAME AS CAP
  0b1110011, // 113 'q' SAME AS CAP
  0b0000101, // 114 'r' SAME AS CAP
  0b1011011, // 115 's' SAME AS CAP
  0b0001111, // 116 't' SAME AS CAP
  0b0011100, // 117 'u'
  0b0000000, // 118 'b'  NO DISPLAY
  0b0000000, // 119 'w'  NO DISPLAY
  0b0000000, // 120 'x'  NO DISPLAY
  0b0000000, // 121 'y'  NO DISPLAY
  0b0000000, // 122 'z'  NO DISPLAY
  0b0000000, // 123 '0b'  NO DISPLAY
  0b0000000, // 124 '|'  NO DISPLAY
  0b0000000, // 125 ','  NO DISPLAY
  0b0000000, // 126 '~'  NO DISPLAY
  0b0000000, // 127 'DEL'  NO DISPLAY
*/
//this library can be found here https://github.com/sparkfun/SevSeg.git
#include "SevSeg.h"

//Create an instance of the object.
SevSeg myDisplay;

unsigned long timer;
unsigned long prevTime = 0;
//this is for how often we will check the soil, currently set for every 10 minutes
unsigned const long interval = 600000;
//make this a smaller number to speed up the dynamic string display (also change it on line 291 too)
int stringSpeed = 15;
//just to check the soil on the first run and not using the interval
bool firstLoop = true;
int consecutiveWaterCount = 0;
bool outOfWater = false;

//soil sensor global variables
int sensorPin = A0;
int sensorValue = 0;
int percent = 0;
int ones = 0;
int tens = 0;
int hundreds = 0;
//track number of times displayed
int messageCount = 0;

//motor gate pin
int turnOnMotorPIN = A1;
int turnOnSoilPIN = A2;

void setup()
{
  //set this pin to output for turning on the pump
  pinMode(turnOnMotorPIN, OUTPUT);
  //use this for powering the soil sensor
  pinMode(turnOnSoilPIN, OUTPUT);
  //off until we need it
  digitalWrite(turnOnMotorPIN, LOW);
  digitalWrite(turnOnSoilPIN, LOW);

  //Your display is either common cathode or common anode
  int displayType = COMMON_CATHODE;

  Serial.begin(9600);
  //This pinout is for a bubble dispaly
  //Declare what pins are connected to the GND pins (cathodes)
  int digit1 = 38; //Pin 1
  int digit2 = 40; //Pin 10
  int digit3 = 42; //Pin 4
  int digit4 = 44; //Pin 6

  //Declare what pins are connected to the segments (anodes)
  int segA = 22; //Pin 12
  int segB = 24; //Pin 11
  int segC = 26; //Pin 3
  int segD = 28; //Pin 8
  int segE = 30; //Pin 2
  int segF = 32; //Pin 9
  int segG = 34; //Pin 7
  int segDP = 36; //Pin 5

  int numberOfDigits = 4; //Do you have a 1, 2 or 4 digit display?

  myDisplay.Begin(displayType, numberOfDigits, digit1, digit2, digit3, digit4, segA, segB, segC, segD, segE, segF, segG, segDP);

  //Set the display to 100% brightness level
  myDisplay.SetBrightness(100);
}

void loop()
{
  timer = millis();

  //this value is experimental
  if (percent < 50 && !outOfWater) {
    //turn on the pump by pulling +5V high
    digitalWrite(turnOnMotorPIN, HIGH);
    delay(20000);
    digitalWrite(turnOnMotorPIN, LOW);

    //check the soil again
    digitalWrite(turnOnSoilPIN, HIGH);
    //give it a sec
    delay(1000);
    //check soil sensor value
    sensorValue = analogRead(sensorPin);
    percent = convertToPercent(sensorValue);
    digitalWrite(turnOnSoilPIN, LOW);
    consecutiveWaterCount++;
  }
  else {
    consecutiveWaterCount = 0;
  }
   //a message to friends :) 
  if (messageCount % 3 == 0)
  {
    while (stringDisplay4('H', 'E', 'L', 'O')) {}
    while (stringDisplay4('J', 'O', 'H', 'N')) {}
    while (stringDisplay4('A', 'N', 'D', '.')) {}
    while (stringDisplay6('R', 'A', 'C', 'H', 'E', 'L')) {}
  }

  //is the tank out of water?
  if (consecutiveWaterCount > 12)
  {
    while (stringDisplay4('F', 'I', 'L', 'L')) {}
    while (stringDisplay4('H', 2, 'O', '.')) {}
    while (stringDisplay4('t', 'h', 'e', 'n')) {}
    while (stringDisplay6('r', 'e', 's', 'e', 't', '.')) {}
    outOfWater = true;
  }

  while (stringDisplay4('T', 'H', 'E', '.')) {}
  while (stringDisplay4('S', 'O', 'I', 'L')) {}
  while (stringDisplay7('P', 'E', 'R', 'C', 'E', 'N', 'T')) {}
  while (stringDisplay4('I', 'S', '.', '.')) {}

  //we other wait for the set interval to check or ELSE use the already set percent to display
  if ((timer - prevTime > interval) || firstLoop) {
    digitalWrite(turnOnSoilPIN, HIGH);
    //give it a sec
    delay(1000);
    //check soil sensor value
    sensorValue = analogRead(sensorPin);
    percent = convertToPercent(sensorValue);
    digitalWrite(turnOnSoilPIN, LOW);
    while (printSoilPercent(percent)) {}
    firstLoop = false;
    printValuesToSerial();
    prevTime = timer;
  }

  else {
    while (printSoilPercent(percent)) {}
  }

  stringSpeed = 10;
  //lets get pretty
  while (stringDisplay7('-', '-', '-', '-', '-', '-', '-')) {}
  while (stringDisplay7('0', '1', '2', '3', '4', '5', '6')) {}
  while (stringDisplay7('5', '4', '3', '2', '1', '0', '.')) {}

  stringSpeed = 15;

  messageCount++;
  //end of loop
}


int convertToPercent(int value)
{
  int percentValue = 0;
  percentValue = map(value, 1005, 465, 0, 100);
  return percentValue;
}

//TODO remove later? just for debugging
void printValuesToSerial()
{
  Serial.print("\n\nAnalog Value: ");
  Serial.print(sensorValue);
  Serial.print("\nPercent: ");
  Serial.print(percent);
  Serial.print("% \n");
}

bool printSoilPercent(int Percent)
{
  //kind of a data massage and it shouldn't go over, but if it does we don't want to print anything over a 100% for display purpose
  if (Percent > 100)
  {
    Percent = 100;
  }
  ones = (Percent % 10);
  tens = ((Percent / 10) % 10);
  hundreds = ((Percent / 100) % 10);

  char printString[4];

  for (int i = 0; i < stringSpeed + 10; i++)
  {
    if (hundreds == 0 && tens != 0)
    {
      printString[0] = tens;
      printString[1] = ones;
      printString[2] = '.';
      printString[3] = '.';
    }
    else if (tens == 0 && hundreds == 0)
    {
      printString[0] = ones;
      printString[1] = '.';
      printString[2] = '.';
      printString[3] = '.';
    }
    else {
      printString[0] = hundreds;
      printString[1] = tens;
      printString[2] = ones;
      printString[3] = '.';
    }

    myDisplay.DisplayString(printString, 0);
    delay(10);
  }

  return false;
}

bool stringDisplay4(char one, char two, char three, char four)
{
  char tempString[11] = {'.', '.', '.', '.', one, two, three, four, '.', '.', '.'};
  char printString[4];


  for (int j = 0; j < 8; j++)
  {
    for (int i = 0; i < stringSpeed; i++)
    {
      printString[0] = tempString[j];
      printString[1] = tempString[j + 1];
      printString[2] = tempString[j + 2];
      printString[3] = tempString[j + 3];
      myDisplay.DisplayString(printString, 0);
      delay(10);
    }
  }

  return false;
}

bool stringDisplay6(char one, char two, char three, char four, char five, char six)
{
  char tempString[13] = {'.', '.', '.', '.', one, two, three, four, five, six, '.', '.', '.'};
  char printString[6];

  for (int j = 0; j < 10; j++)
  {
    for (int i = 0; i < stringSpeed; i++)
    {
      printString[0] = tempString[j];
      printString[1] = tempString[j + 1];
      printString[2] = tempString[j + 2];
      printString[3] = tempString[j + 3];
      printString[4] = tempString[j + 4];
      printString[5] = tempString[j + 5];
      myDisplay.DisplayString(printString, 0);
      delay(10);
    }
  }

  return false;
}

bool stringDisplay7(char one, char two, char three, char four, char five, char six, char seven)
{
  char tempString[14] = {'.', '.', '.', '.', one, two, three, four, five, six, seven, '.', '.', '.'};
  char printString[7];

  for (int j = 0; j < 10; j++)
  {
    for (int i = 0; i < stringSpeed; i++)
    {
      printString[0] = tempString[j];
      printString[1] = tempString[j + 1];
      printString[2] = tempString[j + 2];
      printString[3] = tempString[j + 3];
      printString[4] = tempString[j + 4];
      printString[5] = tempString[j + 5];
      printString[6] = tempString[j + 6];
      myDisplay.DisplayString(printString, 0);
      delay(10);
    }
  }

  return false;
}

