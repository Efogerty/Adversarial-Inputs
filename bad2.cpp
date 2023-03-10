//This code intends to break the hash table. This is done by hashing every input to the same cell, making the table identical to a normal 1d array

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

  // Generate and print bad input of size N for prog1
  // (currently just generates an input of N random numbers)
  cout << N << "\n";
  int indexInHash=0;
  for (int i=0; i<N; i++)
  {
    cout <<indexInHash << "\n";
    indexInHash+=10000;
  }
  return 0;
}
