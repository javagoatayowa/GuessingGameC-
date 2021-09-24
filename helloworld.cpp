#include <iostream>//including packages to use everythign in them
#include <cstring>
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
      if (guess == num) {//if they are right
        count++;
        cout << "Aye you got it right! You took " << count << " tries!";
        cout << "Want to play again?";
        char input[80];
	cin >> input;
      if (strcmp(input,"yes") == 0) {
	count = count - count;
	num = rand()%100+1;
	cout<< "Lets play again! Guess a number!";
      }
      else {
	b = 1;
	a = 1;
      }    
   

      }
      else {// if they are wrong
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
