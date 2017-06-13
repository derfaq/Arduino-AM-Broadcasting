//#include <Tone.h>  // the core tone()/noTone() are used.
#include <rtttl.h>

#define ANTENNA  9
const int octave = 0;

// this solution is recommended:
// the song is stored in program memory only
const char song_P1[] PROGMEM =
		"Indiana:d=4,o=5,b=250:e,8p,8f,8g,8p,1c6,8p.,d,8p,8e,1f,p.,g,8p,8a,8b,8p,1f6,p,a,8p,8b,2c6,2d6,2e6,e,8p,8f,8g,8p,1c6,p,d6,8p,8e6,1f.6,g,8p,8g,e.6,8p,d6,8p,8g,e.6,8p,d6,8p,8g,f.6,8p,e6,8p,8d6,2c6";

const char song_P2[] PROGMEM =
     "bomberman:d=4,o=5,b=125:16b4,16b4,16b,16b4,16d,16p,16f#,16g#,16a,16p,16a,16p,8g#,8p,16a4,16a4,16a,16a4,16c#,16p,16e,16f#,16g,16p,16f#,16g,16a4,16g#4,8a4,16f#4,16f#4,16f#,16f#4,16e,16p,16d#,16e,16f#4,16p,16f#,16p,8f#.4,16p,16f#4,16f#4,16f#,16f#4,16e,16p,16d#,16e,16f#4,16p,16f#,16p,16f#4,16f#4,16g#4,16a#4";

const char song_P3[] PROGMEM =
     "korobyeyniki:d=4,o=5,b=160:e6,8b,8c6,8d6,16e6,16d6,8c6,8b,a,8a,8c6,e6,8d6,8c6,b,8b,8c6,d6,e6,c6,a,2a,8p,d6,8f6,a6,8g6,8f6,e6,8e6,8c6,e6,8d6,8c6,b,8b,8c6,d6,e6,c6,a,a";

const char song_P4[] PROGMEM =
     "smb:d=4,o=5,b=100:16e6,16e6,32p,8e6,16c6,8e6,8g6,8p,8g,8p,8c6,16p,8g,16p,8e,16p,8a,8b,16a#,8a,16g.,16e6,16g6,8a6,16f6,8g6,8e6,16c6,16d6,8b,16p,8c6,16p,8g,16p,8e,16p,8a,8b,16a#,8a,16g.,16e6,16g6,8a6,16f6,8g6,8e6,16c6,16d6,8b,8p,16g6,16f#6,16f6,16d#6,16p,16e6,16p,16g#,16a,16c6,16p,16a,16c6,16d6,8p,16g6,16f#6,16f6,16d#6,16p,16e6,16p,16c7,16p,16c7,16c7,p,16g6,16f#6,16f6,16d#6,16p,16e6,16p,16g#,16a,16c6,16p,16a,16c6,16d6,8p,16d#6,8p,16d6,8p,16c6";

const char song_P5[] PROGMEM =
     "smb_under:d=4,o=6,b=100:32c,32p,32c7,32p,32a5,32p,32a,32p,32a#5,32p,32a#,2p,32c,32p,32c7,32p,32a5,32p,32a,32p,32a#5,32p,32a#,2p,32f5,32p,32f,32p,32d5,32p,32d,32p,32d#5,32p,32d#,2p,32f5,32p,32f,32p,32d5,32p,32d,32p,32d#5,32p,32d#";

const char song_P6[] PROGMEM =
     "smbdeath:d=4,o=5,b=90:32c6,32c6,32c6,8p,16b,16f6,16p,16f6,16f.6,16e.6,16d6,16c6,16p,16e,16p,16c";

const char song_P7[] PROGMEM =
      "danzamirl:d=4,o=5,b=90:8c2,8#a1,8a1,8g1,8f1,16p,16c1,16a1,16g1,16f1,16p,16g1,16p,8a1,8p,16c1,16a1,16g1,16f1,16p,16g1,16p,16f1,4d1,4p,16c1,16g1,16f1,16g1,16f1,16g1,16f1,16g1,16f1,16g1,16p,16f1,8g1,8p,16d1,16g1,16f1,16g1,16f1,16a1,16p,16g1,8f1";

const char song_P8[] PROGMEM =
      "Zelda1:d=4,o=5,b=125:a#,f.,8a#,16a#,16c6,16d6,16d#6,2f6,8p,8f6,16f.6,16f#6,16g#.6,2a#.6,16a#.6,16g#6,16f#.6,8g#.6,16f#.6,2f6,f6,8d#6,16d#6,16f6,2f#6,8f6,8d#6,8c#6,16c#6,16d#6,2f6,8d#6,8c#6,8c6,16c6,16d6,2e6,g6,8f6,16f,16f,8f,16f,16f,8f,16f,16f,8f,8f,a#,f.,8a#,16a#,16c6,16d6,16d#6,2f6,8p,8f6,16f.6,16f#6,16g#.6,2a#.6,c#7,c7,2a6,f6,2f#.6,a#6,a6,2f6,f6,2f#.6,a#6,a6,2f6,d6,2d#.6,f#6,f6,2c#6,a#,c6,16d6,2e6,g6,8f6,16f,16f,8f,16f,16f,8f,16f,16f,8f,8f";

const char song_P9[] PROGMEM =
      "ZeldaDung:d=4,o=5,b=80:16g,16a#,16d6,16d#6,16g,16a#,16d6,16d#6,16g,16a#,16d6,16d#6,16g,16a#,16d6,16d#6,16f#,16a,16d6,16d#6,16f#,16a,16d6,16d#6,16f#,16a,16d6,16d#6,16f#,16a,16d6,16d#6,16f,16g#,16d6,16d#6,16f,16g#,16d6,16d#6,16f,16g#,16d6,16d#6,16f,16g#,16d6,16d#6,16e,16g,16d6,16d#6,16e,16g,16d6,16d#6,16e,16g,16d6,16d#6,16e,16g,16d6,16d#6,16d#,16g,16c6,16d6,16d#,16g,16c6,16d6,16d#,16g,16c6,16d6,16d#,16g,16c6,16d6,16d,16g,16c6,16d6,16d,16g,16c6,16d6,16d,16g,16c6,16d6,16d,16g,16c6,16d6,16c,16f#,16a";

const char song_P10[] PROGMEM =
      "ZeldaOvrGB:d=4,o=5,b=140:8c.,16g4,g.4,8c,16c,16d,16d#,16f,g.,16a,16a#,8a.,8g.,8f,8g.,16c,1c6,8p,8g,8d#6,8d6,8d#6,8f6,8g6,16c6,16g6,c.7,8g6,8f6,8d#6,8f6,16a#,16f6,a#.6,8f6,8d#6,8d6,8d#.6,16g,g.,16g,16f,8d#,8f,1g,8c.6,16g,g.,8c6,16c6,16d6,16d#6,16f6,g.6,16g#6,16a#6,8g#6,g6,8f6,8d#.6,16c6,g.6,8d#6,8c7,8g6,d#.7,8d7,8c7,8d7,8d#7,8f7,8g7,16f7,16g7,g#.7,a#7,8g#7,g7,8d7,8d#7,8f7,8d#7,8d7,2c.7";


Rtttl player;

void setup(void)
{
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

	player.begin(ANTENNA);
}

void loop(void)
{

  for(int i = 0; i<6;i++){
    player.play_P(song_P8, octave);
  }
  delay(500);

  player.play_P(song_P9, octave);

  delay(500);

  for(int i = 0; i<6;i++){
    player.play_P(song_P10, octave);
  }

  delay(500);
}
