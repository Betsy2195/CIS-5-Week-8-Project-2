#include <iostream>
#include <cstdlib>
#include <ctime>

 const int scoreAt0 = 47;

// Project 2 — Betsy Caudel
// CIS 5 Week 08
using std::cout;
using std::endl;

int main() {
  const int N = 30;
  int scores[N];
  const int scoreAt10 = 90;

  // Generates random numbers.
  srand(static_cast<unsigned>(time(nullptr)));

  const int scoreAt20 = 75;

  for (int i = 0; i < N; ++i) {
    scores[i] = rand() % 100;
  }

  scores[0] = scoreAt0;
  const int scoreAt27 = 84;
  scores[10] = scoreAt10;
  scores[20] = scoreAt20;
  scores[27] = scoreAt27;

  // Prints index and score
  for (int i = 0; i < N; ++i) {
    cout << "[" << i << "] " << scores[i] << endl;
  }

  // Variables to count how many scores in each letter.
  int a_scores = 0;
  int b_scores = 0;
  int c_scores = 0;
  int d_scores = 0;
  int f_scores = 0;

  // Checks scores and assigns them to letter grade.
  for (int i = 0; i < N; ++i) {
    if (scores[i] >= 90) {
      a_scores += 1;
    } else if (scores[i] >= 80) {
      b_scores += 1;
    } else if (scores[i] >= 70) {
      c_scores += 1;
    } else if (scores[i] >= 60) {
      d_scores += 1;
    } else {
      f_scores += 1;
    } 
  }

  // Prints amount of scores in each letter.
  cout << "A: " << a_scores << ", B: " << b_scores << ", C: " << c_scores << ", D: ";
  cout << d_scores << ", F: " << f_scores << endl;

  // Checks which students need to go to office hours.
  int i = 0;
  while (i < N) {
    if (scores[i] < 60) {
      cout << "Student at index " << i << " needs to come to office hours." << endl;
    }
    ++i;
  }

  return 0;
}
