#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 //AAA
  char soundex[5];
  generateSoundex("AX", soundex);
 // ASSERT_EQ(soundex,"A200");
  generateSoundex("A", soundex);

  generateSoundex("AEIOU", soundex);

  generateSoundex("AEIOUY", soundex);

  generateSoundex("BCDFG]HJKLMNPQRSTVWXYZY", soundex);

  generateSoundex("Robert", soundex);

  generateSoundex("Rupert", soundex);
 
  generateSoundex("Tymczak", soundex);

  generateSoundex("RoBert", soundex);
  
  generateSoundex("AehioU", soundex);

  generateSoundex("Aehea", soundex);
}
