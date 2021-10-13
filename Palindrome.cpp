#include <iostream>
#include <cstring>//including cstring and iostream to do inputting and cstrings
using namespace std;//so that we dont have to write std every time
int main() {
  char input[81];//input
  cout<<"Enter your word";
  cin.getline(input,80,'\n');
  int count = 0;
  char input2[81];//modified input without nonalpha
  int count2 = 0;
  for (int a = 0; a < strlen(input);a++) {//removing all nonalphas
    if(isalpha(input[a])) {
      input2[count2] = tolower(input[a]);
      count2++;
    }
  }
  input2[count2] = '\0';//inserting null character so array works
  int strlenth = strlen(input2);//the length of modified array
  for (int a = 0, b = strlenth-1; a < strlenth; a++, b--) {
    if (input2[a] == input2[b]) {
      count++;
    }
  }//counting all equal characters
  if (count == strlenth) {//if they are
    cout<<"palindrome";
  }
  else {//if they arent
    cout<<"not palindrome";
  }
  return 0;
}