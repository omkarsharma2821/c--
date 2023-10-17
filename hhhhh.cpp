#include <iostream>
#include <string>

using namespace std;

// Finds the smallest possible good integer.
//
// Args:
//   n: The given integer.
//   k: The lower bound for the good integer.
//
// Returns:
//   The smallest possible good integer.
string smallest_possible_good_integer(string n, int k) {
  // Initialize the smallest possible good integer.
  string smallest_good_integer = n;

  // Iterate over the digits of n in reverse order.
  for (int i = n.length() - 1; i >= 0; i--) {
    // If the current digit is less than or equal to k, delete it.
    if (n[i] <= k + '0') {
      smallest_good_integer.erase(i, 1);
    }
    // Otherwise, break the loop.
    else {
      break;
    }
  }

  // Return the smallest possible good integer.
  return smallest_good_integer;
}

int main() {
  // Declare the variables n and k.
  string n;
  int k;

  // Get the input integer.
  cin >> n;

  // Get the lower bound for the good integer.
  cin >> k;

  // Find the smallest possible good integer.
  string smallest_good_integer = smallest_possible_good_integer(n, k);

  // Print the smallest possible good integer.
  cout << smallest_good_integer << endl;

  return 0;
}

