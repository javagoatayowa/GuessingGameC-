#include <iostream>//including packages to use everythign in them
#include <string>
using namespace std;//Without this you have to write std::cout

int main() {//the function
  int a = 0;//for while loop
  while (a == 0) {
    srand(time(NULL)); //Setting random seed
    cout << "Hey there! This is the guessing game game! The computer here will choose a number from 1-100, and you have to guess it!";//printing opening message
    int num = rand()% 100 + 1; //generating random num  
    int count = 0;//the count of guesses
    int b = 0;//another variable for while loop. A and b were used to break the while loops when i wanted. 
    while (b == 0) {//
      int guess;
      cin >> guess;
      if (guess == num) {
        count++;
        string count2 = to_string(count);
        cout << "Aye you got it right! You took " + count2 + " tries!";
        cout << "Want to play again?";
        string x;
        cin >> x;
      if (x == "yes") {
        continue;
      }
      else {
        a = 1;
        b = 1;
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
