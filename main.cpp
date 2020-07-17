#include <iostream>
#include "txtadv.hpp"
using namespace std;

int main() {
  string first;
  string last;
  int tries = 4;

  cout << "Welcome to the simulation." << endl;
  cout << "You have been chosen to endeavour into the" << endl << "Mafia 5 FBI case back in 1974." << endl;
  cout << "To begin we need your first name: ";
  cin >> first;
  cout << "And last name: ";
  cin >> last;
  cout << "You have " << tries << " tries to solve this case." << endl;
  cout << "Now, let the simulation begin." << endl;
  beginning(first, last, tries);
  return 0;
}

