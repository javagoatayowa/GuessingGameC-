#include <iostream>
#include <string>
using namespace std;

int main() {
  while (true) {
    srand(time(NULL)); 
    cout << "Hey there! This is the guessing game game! The computer here will choose a number from 1-100, and you have to guess it!";
    int num = rand()% 100 + 1;   
    int count = 0;
    while (true) {
      int guess;
      cin >> guess;
      if (guess == num) {
        count++;
        string count2 = to_string(count);
        cout << "Aye you got it right! You took " + count2 + " tries!";
        cout << "Want to play again?";
        string x;
        cin >> x;
      if (x == "y") {
        continue;
      }
      else {
        break;
      }

      }
      else {
          count++;
          cout << "Dang it your wrong!";
          if (guess > num) {
            cout << "go lower";
          }
          if (guess < num) {
            cout << "go higher";
          }
      }
    }
  }
  return 0;
}

    
