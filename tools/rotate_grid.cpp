#include <bits/stdc++.h>
using namespace std;

double rotateX(double orgX, double orgY, double posX, double posY, double angle)
{
  double x, y; // (orgX, orgY) を原点とした場合の (posX, posY) 座標位置 
  double rotX; // (x, y) を angle (ラジアン)回転させた座標位置（の X 成分）
  x = posX - orgX;
  y = posY - orgY;
  rotX = x * cos(angle) - y * sin(angle);
  return rotX + orgX; // 戻り値には orgX の値を加えておく
}

double rotateY(double orgX, double orgY, double posX, double posY, double angle)
{
  double x, y; // (orgX, orgY) を原点とした場合の (posX, posY) 座標位置 
  double rotY; // (x, y) を angle (ラジアン)回転させた座標位置（の Y 成分）
  x = posX - orgX;
  y = posY - orgY;
  rotY = x * sin(angle) + y * cos(angle);
  return rotY + orgY; // 戻り値には orgX の値を加えておく
}
