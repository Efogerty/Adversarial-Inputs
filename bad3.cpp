//This code intends to break the quicksort algorithm innate to C++.

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
  if (argc != 2) {
    cout << "Usage: bad1 <input size>\n";
    return 0;
  }

  int N = atoi(argv[1]);  // get first command-line argument
  if (N<1 || N>100000) {
    cout << "Invalid input size!\n";
    return 0;
  }

//generates a generally time consuming, somewhat inefficient quicksort input
  cout << N << "\n";
  for (int i=0; i<N; i++)
    cout << rand() % 1000000 << "\n";

  return 0;
}
