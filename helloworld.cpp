#include <iostream>   // to include a system header to enable input/output
#include <string>   // to include a system header to enable string type
using namespace std;  // to avoid typing std:: in front of many common keywords

int main() {
  string name;  // string variable called name
  cout << "What is your name? (use one word) "; // display to the screen
  cin >> name;  // read from keyboard input
  cout << "Hello " << name << " " << endl;

  return 0;  // 0 means success, better use EXIT_SUCCESS constant
}


// g++ -std=c++14 helloworld.cpp -o helloworld
// ./helloworld