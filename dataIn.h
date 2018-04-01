#ifndef datain
#define datain

#include<iostream>
#include<vector>
using namespace std;

class data {
  public:
    void setStart();
    void fileOut();
  private:
    float k;
    float ra;
    float rb;
    char buffer[200];
    vector<float> win;
};
#endif
