#ifndef NOTES_H
#define NOTES_H

#define SAMPLES 50

#define BPM 200

#define WHOLE_NOTE 240 * 1000 / BPM
#define HALF_NOTE 120 * 1000 / BPM
#define QUARTER_NOTE 60 * 1000 / BPM
#define EIGHTH_NOTE 30 * 1000 / BPM
#define SIXTEENTH_NOTE 15 * 1000 / BPM
#define DOT_QUART_NOTE 90 * 1000 / BPM
#define DOT_EIGHTH_NOTE 45 * 1000 / BPM
#define DOT_SIXTEENTH_NOTE 22.5 * 1000 / BPM
#define TRIP_QUARTER_NOTE 40 * 1000 / BPM
#define TRIP_EIGHTH_NOTE 20 * 1000 / BPM
#define TRIP_SIXTEENTH_NOTE 10 * 1000 / BPM


#define REST 0
#define NOTE_B0 (48000000 / (31 * SAMPLES)) - 1
#define NOTE_C1 (48000000 / (33 * SAMPLES)) - 1
#define NOTE_CS1 (48000000 / (35 * SAMPLES)) - 1
#define NOTE_D1 (48000000 / (37 * SAMPLES)) - 1
#define NOTE_DS1 (48000000 / (39 * SAMPLES)) - 1
#define NOTE_E1 (48000000 / (41 * SAMPLES)) - 1
#define NOTE_F1 (48000000 / (44 * SAMPLES)) - 1
#define NOTE_FS1 (48000000 / (46 * SAMPLES)) - 1
#define NOTE_G1 (48000000 / (49 * SAMPLES)) - 1
#define NOTE_GS1 (48000000 / (52 * SAMPLES)) - 1
#define NOTE_A1 (48000000 / (55 * SAMPLES)) - 1
#define NOTE_AS1 (48000000 / (58 * SAMPLES)) - 1
#define NOTE_B1 (48000000 / (62 * SAMPLES)) - 1
#define NOTE_C2 (48000000 / (65 * SAMPLES)) - 1
#define NOTE_CS2 (48000000 / (69 * SAMPLES)) - 1
#define NOTE_D2 (48000000 / (73 * SAMPLES)) - 1
#define NOTE_DS2 (48000000 / (78 * SAMPLES)) - 1
#define NOTE_E2 (48000000 / (82 * SAMPLES)) - 1
#define NOTE_F2 (48000000 / (87 * SAMPLES)) - 1
#define NOTE_FS2 (48000000 / (93 * SAMPLES)) - 1
#define NOTE_G2 (48000000 / (98 * SAMPLES)) - 1
#define NOTE_GS2 (48000000 / (104 * SAMPLES)) - 1
#define NOTE_A2 (48000000 / (110 * SAMPLES)) - 1
#define NOTE_AS2 (48000000 / (117 * SAMPLES)) - 1
#define NOTE_B2 (48000000 / (123 * SAMPLES)) - 1
#define NOTE_C3 (48000000 / (131 * SAMPLES)) - 1
#define NOTE_CS3 (48000000 / (139 * SAMPLES)) - 1
#define NOTE_D3 (48000000 / (147 * SAMPLES)) - 1
#define NOTE_DS3 (48000000 / (156 * SAMPLES)) - 1
#define NOTE_E3 (48000000 / (165 * SAMPLES)) - 1
#define NOTE_F3 (48000000 / (175 * SAMPLES)) - 1
#define NOTE_FS3 (48000000 / (185 * SAMPLES)) - 1
#define NOTE_G3 (48000000 / (196 * SAMPLES)) - 1
#define NOTE_GS3 (48000000 / (208 * SAMPLES)) - 1
#define NOTE_A3 (48000000 / (220 * SAMPLES)) - 1
#define NOTE_AS3 (48000000 / (233 * SAMPLES)) - 1
#define NOTE_B3 (48000000 / (247 * SAMPLES)) - 1
#define NOTE_C4 (48000000 / (262 * SAMPLES)) - 1
#define NOTE_CS4 (48000000 / (277 * SAMPLES)) - 1
#define NOTE_D4 (48000000 / (294 * SAMPLES)) - 1
#define NOTE_DS4 (48000000 / (311 * SAMPLES)) - 1
#define NOTE_E4 (48000000 / (330 * SAMPLES)) - 1
#define NOTE_F4 (48000000 / (349 * SAMPLES)) - 1
#define NOTE_FS4 (48000000 / (370 * SAMPLES)) - 1
#define NOTE_G4 (48000000 / (392 * SAMPLES)) - 1
#define NOTE_GS4 (48000000 / (415 * SAMPLES)) - 1
#define NOTE_A4 (48000000 / (440 * SAMPLES)) - 1
#define NOTE_AS4 (48000000 / (466 * SAMPLES)) - 1
#define NOTE_B4 (48000000 / (494 * SAMPLES)) - 1
#define NOTE_C5 (48000000 / (523 * SAMPLES)) - 1
#define NOTE_CS5 (48000000 / (554 * SAMPLES)) - 1
#define NOTE_D5 (48000000 / (587 * SAMPLES)) - 1
#define NOTE_DS5 (48000000 / (622 * SAMPLES)) - 1
#define NOTE_E5 (48000000 / (659 * SAMPLES)) - 1
#define NOTE_F5 (48000000 / (698 * SAMPLES)) - 1
#define NOTE_FS5 (48000000 / (740 * SAMPLES)) - 1
#define NOTE_G5 (48000000 / (784 * SAMPLES)) - 1
#define NOTE_GS5 (48000000 / (831 * SAMPLES)) - 1
#define NOTE_A5 (48000000 / (880 * SAMPLES)) - 1
#define NOTE_AS5 (48000000 / (932 * SAMPLES)) - 1
#define NOTE_B5 (48000000 / (988 * SAMPLES)) - 1
#define NOTE_C6 (48000000 / (1047 * SAMPLES)) - 1
#define NOTE_CS6 (48000000 / (1109 * SAMPLES)) - 1
#define NOTE_D6 (48000000 / (1175 * SAMPLES)) - 1
#define NOTE_DS6 (48000000 / (1245 * SAMPLES)) - 1
#define NOTE_E6 (48000000 / (1319 * SAMPLES)) - 1
#define NOTE_F6 (48000000 / (1397 * SAMPLES)) - 1
#define NOTE_FS6 (48000000 / (1480 * SAMPLES)) - 1
#define NOTE_G6 (48000000 / (1568 * SAMPLES)) - 1
#define NOTE_GS6 (48000000 / (1661 * SAMPLES)) - 1
#define NOTE_A6 (48000000 / (1760 * SAMPLES)) - 1
#define NOTE_AS6 (48000000 / (1865 * SAMPLES)) - 1
#define NOTE_B6 (48000000 / (1976 * SAMPLES)) - 1
#define NOTE_C7 (48000000 / (2093 * SAMPLES)) - 1
#define NOTE_CS7 (48000000 / (2217 * SAMPLES)) - 1
#define NOTE_D7 (48000000 / (2349 * SAMPLES)) - 1
#define NOTE_DS7 (48000000 / (2489 * SAMPLES)) - 1
#define NOTE_E7 (48000000 / (2637 * SAMPLES)) - 1
#define NOTE_F7 (48000000 / (2794 * SAMPLES)) - 1
#define NOTE_FS7 (48000000 / (2960 * SAMPLES)) - 1
#define NOTE_G7 (48000000 / (3136 * SAMPLES)) - 1
#define NOTE_GS7 (48000000 / (3322 * SAMPLES)) - 1
#define NOTE_A7 (48000000 / (3520 * SAMPLES)) - 1
#define NOTE_AS7 (48000000 / (3729 * SAMPLES)) - 1
#define NOTE_B7 (48000000 / (3951 * SAMPLES)) - 1
#define NOTE_C8 (48000000 / (4186 * SAMPLES)) - 1
#define NOTE_CS8 (48000000 / (4435 * SAMPLES)) - 1
#define NOTE_D8 (48000000 / (4699 * SAMPLES)) - 1
#define NOTE_DS8 (48000000 / (4978 * SAMPLES)) - 1


#endif
