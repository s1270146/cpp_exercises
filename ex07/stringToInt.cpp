// stringToInt.cpp
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int stringToInt(const string &input)
{
  stringstream instream;
  instream << input;
  int number;
  instream >> number;

  if (instream.fail())
  {
    // Error: the input can not be converted
    throw invalid_argument("input can not be converted to an int" );
    //return -1;
  }

  char left;
  instream >> left;
  if (!instream.fail())
  {
    // Error: there are some characters left after the int
    //cerr << "input can not be converted to an int" << endl;
    //return -1;
    throw invalid_argument("input can not be converted to an int" );
  }

  // everything went fine: returns the int
  return number;
}

int main(void)
{
  try
  {
    string test1 = "11";
    cout << stringToInt(test1) << endl;
  }
  catch (const exception &e)
  {
    cerr << e.what() << '\n';
  }

  try
  {
    string test2 = "cc11";
    cout << stringToInt(test2) << endl;
  }
  catch (const exception &e)
  {
    cerr << e.what() << '\n';
  }

  try
  {
    string test3 = "11cc";
    cout << stringToInt(test3) << endl;
  }
  catch (const exception &e)
  {
    cerr << e.what() << '\n';
  }

  return 0;
}