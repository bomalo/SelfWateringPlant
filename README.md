# Self Watering Plant
Arduino sketch to operate a pump based on soil resistance measurements, and also to display strings on a 7 segment display. 

## Seven Segment Display
  SegA:  pin12
  SegB:  pin11
  SegC:  pin3
  SegD:  pin8
  SegE:  pin2
  SegF:  pin9
  SegG:  pin7
  SegDp: pin5

---
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
