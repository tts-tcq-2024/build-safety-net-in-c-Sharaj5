#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 //AAA
  char soundex[5];
  generateSoundex("AB", soundex);
  EXPECT_STREQ(soundex,"A100");
}

TEST(SoudexTestsuite, testcase1) {
 //AAA
  char soundex[5];
  generateSoundex("ABXY", soundex);
  EXPECT_STREQ(soundex,"A120");
}

TEST(SoudexTestsuite, testcase2) {
 //AAA
  char soundex[5];
  generateSoundex("CDLM", soundex);
  EXPECT_STREQ(soundex,"C345");
}

TEST(SoudexTestsuite, testcase3) {
 //AAA
  char soundex[5];
  generateSoundex("PJAY", soundex);
  EXPECT_STREQ(soundex,"P200");
}


TEST(SoudexTestsuite, testcase4) {
 //AAA
  char soundex[5];
  generateSoundex("PJAY", soundex);
  EXPECT_STREQ(soundex,"P200");
}

TEST(SoudexTestsuite, testcase5) {
 //AAA
  char soundex[5];
  generateSoundex("BPDL", soundex);
  EXPECT_STREQ(soundex,"B134");
}

TEST(SoudexTestsuite, testcase6) {
 //AAA
  char soundex[5];
  generateSoundex("U", soundex);
  EXPECT_STREQ(soundex,"U000");
}
TEST(SoudexTestsuite, testcase7) {
 //AAA
  char soundex[5];
  generateSoundex("VM", soundex);
  EXPECT_STREQ(soundex,"V500");
}

TEST(SoudexTestsuite, testcase8) {
 //AAA
  char soundex[5];
  generateSoundex("AEI", soundex);
  EXPECT_STREQ(soundex,"A000");
}
