#include<iostream>
#include<cmath>
using namespace std;

float ea(int ra, int rb) {
    float ans = 1/(1+pow(10.0, (rb-ra)/400.0));
    return (float)((int)(ans*1000)/1000.0);
}

float eb(int ra, int rb) {
    float ans = 1/(1+pow(10.0, (ra-rb)/400.0));
    return (float)((int)(ans*1000)/1000.0);
}
