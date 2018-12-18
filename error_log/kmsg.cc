//#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;
  myfile.open ("/dev/kmsg", ios::app);
  myfile << "Written to /dev/kmsg using C++ filestream.\n";
  myfile.close();
  return 0;
}