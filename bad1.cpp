//This code intends to break an algorithm that finds the "longest line of sight" algorithm.
//A number can "see" other numbers that are lower than it at any distance so long as its "view" isn't obstructed by a larger number.
//e.g. 5226: The 5 and 6 have vision of each other with a distance of 2.
//e.g. 5725: The 5s cannot "see" each other because the 7 obstructs their view. 7 Has a view of 6 with a distance of 1.

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
  int afterHalf=1;
  for (int i=1; i<=N; i++)
  {
    if(i<N/2)
    {
      cout<<(N/2)-i<<"\n";
    }
    else
    {
      cout<<(afterHalf)<<"\n";
      afterHalf++;
    }
  }
  cout << N << "\n";
  return 0;
}
