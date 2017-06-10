/*
  Melody

 Plays a melody

 circuit:
 * 1 wire attach to pin 9

 created 21 Jan 2010
 modified 30 Aug 2011
 by Tom Igoe

 modifed 10 Jun 2017 by Facundo Daguerre (derfaq) for AM Broadcasting

This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/Tone

 */
#include "pitches.h"

#define ANTENNA  9
// notes in the melody:
int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

void setup() {
  //AM setup
  TCCR1A = _BV (COM1A0);  // toggle OC1A on Compare Match (Pin 9 on Arduino Uno)
  TCCR1B = _BV(WGM12) | _BV(CS10);   // CTC, no prescaler
  /*
   The OCR1A variable is related to the frequency.
   The OCR1A variable is one less than the actual divisor.
   OCR1A - Frequency
   15 - 500 khz
   14 - ~530 khz
   13 - ~570 khz   
   12 - ~610 khz
   11 - ~670 khz
   10 - ~730 khz
    9 - 800 khz
    8 - ~890 khz
    7 - 1000 khz   (Good for test)
    6 - ~1140 khz
    5 - ~1330 khz
    4 - 1600 khz* 
  */
  OCR1A =  7;
  
  pinMode(ANTENNA,OUTPUT);
  
}

void loop() {
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 8; thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(ANTENNA, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(ANTENNA);
  }
}
