#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 //AAA
  char soundex[5];
  generateSoundex("AX", soundex);
 // ASSERT_EQ(soundex,"A200");
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 
  char soundex[5];
  generateSoundex("", soundex);
 
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 
  char soundex[5];
  generateSoundex("A", soundex);
 
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 
  char soundex[5];
  generateSoundex("F", soundex);
 
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 
  char soundex[5];
  generateSoundex("AEIOU", soundex);
 
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 
  char soundex[5];
  generateSoundex("AEIOUY", soundex);
 
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 
  char soundex[5];
  generateSoundex("BCDFG]HJKLMNPQRSTVWXYZY", soundex);
 
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 
  char soundex[5];
  generateSoundex("Robert", soundex);
 
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 
  char soundex[5];
  generateSoundex("Rupert", soundex);
 
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 
  char soundex[5];
  generateSoundex("Tymczak", soundex);
 
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 
  char soundex[5];
  generateSoundex("RoBert", soundex);
 
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 
  char soundex[5];
  generateSoundex("AehioU", soundex);
 
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 
  char soundex[5];
  generateSoundex("Aehea", soundex);
 
}
