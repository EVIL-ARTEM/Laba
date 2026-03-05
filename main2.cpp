#include <iostream>
using namespace std;
int main(){
int dlina = 4;
int shirina = 8;
int S = dlina * shirina;
int P = (dlina* 2) + (shirina * 2);
int diagonal = (((dlina*dlina) + (shirina*shirina))^0.5);
cout << diagonal << endl;
cout << P << endl;
cout << S << endl;
return 0;
}
