#include "tddFuncs.h"
#include "strFuncs.h"

using namespace std;

int main() {

  
  string s1 = "Eleven plus two";
  string s2 = "Twelve plus one";
  assertEquals(true,
               isAnagram(s1, s2),
               "isAnagram(s1, s2)");

  string s3 = "Rats and Mice";
  string s4 = "in cat’s dream";
  assertEquals(true,
               isAnagram(s3, s4),
               "isAnagram(s3, s4)");

  string s5 = "Rats and Mice";
  string s6 = "in cat’s house";
  assertEquals(false,
               isAnagram(s5, s6),
               "isAnagram(s5, s6)");

  string s7 = "detartrated";
  assertEquals(true,
               isPalindrome(s7),
               "isPalindrome(s7)");

  string s8 = "Madam, I’m Adam.";
  assertEquals(true,
               isPalindrome(s8),
               "isPalindrome(s8)");

  string s9 = "gorgon I am oregon";
  assertEquals(false,
               isPalindrome(s9),
               "isPalindrome(s9)");

  return 0;
}

