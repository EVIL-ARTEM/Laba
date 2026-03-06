#include <iostream>
#include <cmath>
using namespace std;
int main(){
double dlina;
double shirina;
cin >> dlina;
cin >> shirina;
if (dlina <= 0 || shirina <= 0){
cout << "Error";
return 0;
}
else{
double diagonal = sqrt((dlina*dlina) + (shirina*shirina));
double P = (dlina* 2) + (shirina * 2);
double S = dlina * shirina;
cout << diagonal << endl;
cout << P << endl;
cout << S << endl;
}
return 0;
}
