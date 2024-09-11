#ifndef SOUNDEX_H
#define SOUNDEX_H

#include "Soundex.h"
#include <ctype.h>
#include <string.h>

// Lookup table for Soundex codes
static const char soundexTable[26] = {
    '0', '1', '2', '3', '0', '1', '2', '0', '0', '2', // A-J
    '2', '4', '5', '5', '0', '1', '2', '6', '2', '3', // K-T
    '0', '1', '0', '2', '0', '2'  // U-Z
};

// Get the Soundex code using the lookup table
char getSoundexCode(char c) {
    c = toupper(c);  // Convert to uppercase to handle both cases
    if (c >= 'A' && c <= 'Z') {
        return soundexTable[c - 'A'];  // Map character to Soundex code using lookup table
    }
    return '0';  // Default return value for non-alphabet characters
}
// Helper function to add a character to soundex if it's valid
 void addSoundexChar(char *soundex, int *sIndex, char code) 
 {
       if (code != '0' && code != soundex[*sIndex - 1])
       {
          soundex[(*sIndex)++] = code;
      }
 }

void generateSoundex(const char *name, char *soundex) {
    int len = strlen(name);
    soundex[0] = toupper(name[0]);  // Convert the first letter to uppercase
    int sIndex = 1;  // Start filling the code from the second position

    // Generate the Soundex code for the rest of the name
    for (int i = 1; i < len && sIndex < 4; i++) {
        addSoundexChar(soundex, &sIndex, getSoundexCode(name[i]));
    }

    // Pad with '0's if the Soundex code is less than 4 characters
    memset(&soundex[sIndex], '0', 4 - sIndex);  // Fill remaining with '0's
    soundex[4] = '\0';  // Null-terminate the Soundex code
}


#endif // SOUNDEX_H
