#include <bits/stdc++.h>

using namespace std;

int main() {
  int h, d, day;
  double dist, u, f;
  while(1) {
    cin >> h >> u >> d >> f;
    if(h == 0) return 0;
    f = (1 - (f * 0.01));
    for(day = 1, dist = 0; ; day++, u = u * f) {
      printf("day: %d, initial height: %f, climbed: %f, after climb: %f, after slide: %f, percentage factor: %f\n", day, dist, u, dist + u, dist + u - d, f);
      dist += u; //cralws u during day
      if(dist > h) 
        break;
      dist -= d; // fall d during night
      if(dist < 0) 
        break;
    }
    if(dist < 0) 
      printf("failure on day %d\n", day);
    else 
      printf("success on day %d\n", day);
  }
  return 0;
}