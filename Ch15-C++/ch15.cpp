#include<time.h>
#include<string>
#include<stdlib.h>
#include<cmath>
#include<iostream>
#include <vector>
#include "pistol.h"
#include "revolver.h"
using namespace std;

int main() {
    Revolver* r = new Revolver("Smith & Wesson", "0.357", "6 shot", "double action", "hoague grips", "laser", "Trijiicon");
    Pistol* p = new Pistol("Glock", "9mm", "10 rounds", "semi-auto", "manufacturers grips", "no laser", "3 dot sights");
    Gun* gunCabinet[2] = {r,p};

    cout << "My Gun Cabinet Contains:" <<endl;
    for(int i = 0; i < 2; i++) {
        gunCabinet[i]->print();
    }

    system("pause");
    return 0;
}