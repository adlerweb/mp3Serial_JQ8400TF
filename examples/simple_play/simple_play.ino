/*
* Example for mp3serial_JQ8400TF Library
* by Giovanni Bernardo (www.settorezero.com)
* Simple play the first song on the SD
* Module attached on hardware serial port of
* Arduino Duemilanove (rx:0, tx:1)
* song can be either a WAV or MP3
*/
#include <mp3serial_JQ8400TF.h>

mp3Serial mp3(Serial); // initialize library on serial port 0

void setup(void)
	{
	mp3.begin(); // init module
	mp3.playIndex(1); // play first song
	}
	
void loop(void)
	{
	
	}
