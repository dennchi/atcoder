#include <bits/stdc++.h>
using namespace std;

double rotateX(double orgX, double orgY, double posX, double posY, double angle)
{
  double x, y; // (orgX, orgY) を原点とした場合の (posX, posY) 座標位置 
  double rotX; // (x, y) を angle 度回転させた座標位置（の X 成分）
  x = posX - orgX;
  y = posY - orgY;
  rotX = x * cos(angle) - y * sin(angle);
  return rotX + orgX; // 戻り値には orgX の値を加えておく
}

double rotateY(double orgX, double orgY, double posX, double posY, double angle)
{
  double x, y; // (orgX, orgY) を原点とした場合の (posX, posY) 座標位置 
  double rotY; // (x, y) を angle 度回転させた座標位置（の Y 成分）
  x = posX - orgX;
  y = posY - orgY;
  rotY = x * sin(angle) + y * cos(angle);
  return rotY + orgY; // 戻り値には orgX の値を加えておく
}

 
int main() {
  double N,x0,y0,x_N2,y_N2;
  cin >> N >> x0 >> y0 >> x_N2 >> y_N2;
  
  double x_org,y_org;
  x_org = (x0 + x_N2) / 2;
  y_org = (y0 + y_N2) / 2;
  
  double angle = (360/N) / 180 * 3.141592; 

  double x1 = rotateX(x_org, y_org, x0, y0, angle);

  double y1 = rotateY(x_org, y_org, x0, y0, angle);

  printf("%12.10f", x1);
  cout << " ";
  printf("%12.10f", y1);
}