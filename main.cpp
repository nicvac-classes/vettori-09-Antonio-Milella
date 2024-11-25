#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand(time(0));
  int n, imH, imV, i;
  float tmH, tmV, sH, sV;

  cin >> n;
  float h[n], v[n];

  sH = 0;
  sV = 0;
  for (i = 0; i <= n - 1; i++) {
    h[i] = (float)(rand() % 60000) / 1000;
    sH = sH + h[i];
    v[i] = (float)(rand() % 60000) / 1000;
    sV = sV + v[i];
  }
  imH = (int)h[0];
  imV = (int)v[0];
  for (i = 0; i <= n - 1; i++) {
    if (h[i] < imH) {
      tmH = h[i];
      imH = i;
    }
    if (v[i] < imV) {
      tmV = v[i];
      imV = i;
    }
  }
  if (sH > sV) {
    cout << "Il vincitore è Verstappen!" << endl;
  } else {
    cout << "Il vincitore è Hamilton!" << endl;
  }
  if (tmH < tmV) {
    cout << "Quello che ha fatto il giro più veloce è stato Hamilton! Giro n: "
         << imH << " con il tempo: " << tmH << endl;
  } else {
    cout
        << "Quello che ha fatto il giro più veloce è stato Verstappen! Giro n: "
        << imV << " con il tempo: " << tmV << endl;
  }
  return 0;
}