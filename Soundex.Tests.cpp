#include <gtest/gtest.h>
#include "Soundex.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>


void testGenerateSoundex() {
    char soundex[5];

    // Test case 1: Basic name
    generateSoundex("SHARAJ", soundex);
    assert(strcmp(soundex, "S200") == 0);

    // Test case 2: Name with repeated codes
    generateSoundex("Bottle", soundex);
    assert(strcmp(soundex, "B340") == 0);

    // Test case 3: Name with mixed vowels and consonants
    generateSoundex("Raj", soundex);
    assert(strcmp(soundex, "R300") == 0);

    // Test case 4: Short name
    generateSoundex("Ram", soundex);
    assert(strcmp(soundex, "R500") == 0);

    // Test case 4: Short name
    generateSoundex("Tha", soundex);
    assert(strcmp(soundex, "T000") == 0);

        // Test case 4: Short name
    generateSoundex("Bat", soundex);
    assert(strcmp(soundex, "B630") == 0);
    printf("All test cases passed successfully!\n");

}

int main() {
    testGenerateSoundex();
    return 0;
}
