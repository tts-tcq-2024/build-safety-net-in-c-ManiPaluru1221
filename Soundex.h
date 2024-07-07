#ifndef SOUNDEX_H
#define SOUNDEX_H

#include "Soundex.h"
#include <ctype.h>
#include <string.h>

void generateSoundex(const char *name, char *soundex) {
    int len = strlen(name);
    soundex[0] = toupper(name[0]);
    int sIndex = 1;
    char arr[128];
    arr['B'] = '1';
    arr['F'] = '1';
    arr['P'] = '1';
    arr['V'] = '1';
    arr['C'] = '2';
    arr['G'] = '2'; arr['J'] = '2'; arr['K'] = '2'; arr['Q'] = '2'; arr['S'] = '2'; arr['X'] = '2'; arr['Z'] = '2';
    arr['D'] = '3'; arr['T'] = '3';
    arr['L'] = '4';
    arr['M'] = '5'; arr['N'] = '5';
    arr['R'] = '6';
    arr['A'] = '0'; arr['E'] = '0'; arr['I'] = '0'; arr['O'] = '0'; arr['U'] = '0'; arr['H'] = '0'; arr['W'] = '0'; arr['Y'] = '0';
    
    for (int i = 1; i < len && sIndex < 4; i++) {
        char code = arr[toupper(name[i])];
        if (code != '0' && code != soundex[sIndex - 1]) {
            soundex[sIndex++] = code;
        }
    }
    
    while (sIndex < 4) {
        soundex[sIndex++] = '0';
    }

    soundex[4] = '\0';
}

#endif // SOUNDEX_H
