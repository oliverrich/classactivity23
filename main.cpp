#include <iostream>
#include "utils/validate.hpp"
using namespace std;

int main()
{
  string ID;
  cout << "enter ID:" << endl;
  cin >> ID;
  validate(ID);
}
