#include <iostream>
#include <string>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */

string justLowerLetters(string x){

    string f = "";
    for(int i = 0; i < static_cast<int>(x.size()); ++i){
        if(isalpha(x.at(i))){
            f += tolower(x.at(i));
        }
    }
    return f;
}

bool isAnagram(string s1, string s2){

    string letterS1 = justLowerLetters(s1);
    string letterS2 = justLowerLetters(s2);
    sort(letterS1.begin(), letterS1.end());
    sort(letterS2.begin(), letterS2.end());
    return letterS1 == letterS2;
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 * You should provide a recursive solution
 */
bool isPalindrome(const string s1){
    string cleanS1 = justLowerLetters(s1);
    string reverseS1 = "";
    for(int i =cleanS1.size()-1; i >=0; --i){
        reverseS1 += cleanS1.at(i);
    }
    return cleanS1 == reverseS1;
}

