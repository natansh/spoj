#include <stdio.h>
#include <math.h>

double calculate_volume(int U, int V, int W, int u, int v, int w) {
  double X = (w - U + v) * (U + v + w);
  double x = (U - v + w) * (v - w + U);
  double Y = (u - V + w) * (V + w + u);
  double y = (V - w + u) * (w - u + V);
  double Z = (v - W + u) * (W + u + v);
  double z = (W - u + v) * (u - v + W);
  double a = sqrt(x * Y * Z);
  double b = sqrt(y * Z * X);
  double c = sqrt(z * X * Y);
  double d = sqrt(x * y * z);

  return sqrt((-a + b + c + d) * (a - b + c + d) * (a + b - c + d) * (a + b + c -d))/(192.0 * u * v * w);
}

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    double AB, AC, AD, BC, BD, CD;
    scanf("%lf %lf %lf %lf %lf %lf", &AB, &AC, &AD, &BC, &BD, &CD);
    printf("%.4lf\n", calculate_volume(AB, BC, AC, CD, AD, BD));
  }
  return 0;
}
