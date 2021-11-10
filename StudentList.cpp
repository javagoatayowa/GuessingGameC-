#include <iostream>//include packages
#include <cstring>
#include <vector>
#include <iomanip>//Ehan gave me the iomanip
using namespace std;

struct student {//struct
  char first[20];
  char second[20];
  int id;
  float GPA;
};
void add(vector<student*>&in) {//add function
  student* s = new student();
  char input[20];
  cout<<"Enter first name";
  cin >> input;
  strcpy(s->first, input);
  cout<<"Enter second name";

  cin>> input;
  strcpy(s->second, input);
  cout<<"Enter ID";
  int n;
  cin>> n;
  s-> id = n;
  cout<<"Enter GPA";
  float n2;
  cin>> n2;
  s->GPA = n2;
  in.push_back(s);
}

int main() {//main
  vector <student*> v;
  int a = 0;
  while (a == 0) {
    char input[6];
    cin>>input; 
    if (strcmp(input,"QUIT") == 0) {
      a =1;
    }
    else {
      if(strcmp(input,"ADD") == 0) {
        add(v);
      }
      if(strcmp(input,"PRINT") == 0) {
        //Used https://www.cplusplus.com/reference/vector/vector/begin/ and https://www.cplusplus.com/reference/iomanip/setprecision/ here
        for (vector<student*>::iterator it = v.begin(); it != v.end(); it++) {
          cout << ' ' << (*it)->first;
          cout << ' ' << (*it)->second;
          cout<<  ' ' << (*it)->id;
          cout << ' ' << setprecision(3) << (*it)->GPA;
          cout<< fixed;

        cout << '\n';
        }
      }//delete function
      if(strcmp(input,"DELETE") == 0) {
        cout<<"What id to delete";
        int idremove;
        cin>>idremove;
	
        for (vector<student*>::iterator it = v.begin(); it != v.end(); it++) {
	  cout<< ' ' << (*it)->id << endl;
          if(idremove == (*it)->id) {
	    v.erase(it);
            delete *it;
            break;
          }
        }
      }
    }
  }
  return 0;
} 
