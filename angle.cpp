#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double v1[3]={1,2,3};
	double v2[3]={4,5,6};

//ベクトルv1,v2の内積を計算する
double naiseki=v1[0]*v2[0]+v1[1]*v2[1]+v1[2]*v2[2];

//ベクトルv1,v2の大きさをそれぞれ計算する
double norm1=sqrt(v1[0]*v1[0]+v1[1]*v1[1]+v1[2]*v1[2]);
double norm2=sqrt(v2[0]*v2[0]+v2[1]*v2[1]+v2[2]*v2[2]);

//ベクトルv1,v2のなす角を計算する
double angle=acos(naiseki/(norm1*norm2));
//計算結果を表示する
cout<<"ベクトルv1,v2のなす角は"<<angle<<"ラジアンです"<<endl;

return 0;
}
