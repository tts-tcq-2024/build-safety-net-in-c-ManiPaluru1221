#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 //AAA
  char soundex[5];
  generateSoundex("AX", soundex);
 // ASSERT_EQ(soundex,"A200");
  char soundex[5];
  generateSoundex("", soundex);
  char soundex[5];
  generateSoundex("A", soundex);
  char soundex[5];
  generateSoundex("AEIOU", soundex);
  char soundex[5];
  generateSoundex("AEIOUY", soundex);
  char soundex[5];
  generateSoundex("BCDFG]HJKLMNPQRSTVWXYZY", soundex);
  char soundex[5];
  generateSoundex("Robert", soundex);
  char soundex[5];
  generateSoundex("Rupert", soundex);
  char soundex[5];
  generateSoundex("Tymczak", soundex);
  char soundex[5];
  generateSoundex("RoBert", soundex);
  char soundex[5];
  generateSoundex("AehioU", soundex);
  char soundex[5];
  generateSoundex("Aehea", soundex);
}
