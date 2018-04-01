#include "dataIn.h"
#include "fomula.cpp"
#include<cstring>
#include<sstream>
#include<fstream>
#include<iostream>
using namespace std;

void data::setStart() {
    string tmp;
    fstream file;
    int line = 0;
    file.open("file.in", ios::in);
    file.read(buffer, sizeof(buffer));

    for(int i=0; i<sizeof(buffer); i++) {
        if((int)buffer[i] < 0)
            break;
        if((int)buffer[i] == 10) {
            buffer[i] = ' ';
            line ++;
        }
        tmp += buffer[i];
    }
    win.resize(line-1, 0.0);
    stringstream ss;
    ss << tmp;
    ss >> k >> ra >> rb ;
    for(int i=0; i<line-1; i++)
        ss >> win[i];
    file.close();
}

void data::fileOut() {
    int line = win.size() + 1;
    fstream file;
    file.open("file.out", ios::out);
    for(int i=0; i<line ; i++) {
        ra = (int)(ra + 0.5);
        rb = (int)(rb + 0.5);
        file << ra << " " << rb << endl;
        float tmp = ra;
        ra = ra + k * (win[i] - ea(ra, rb));
        rb = rb + k * ((1-win[i]) - eb(tmp, rb));
    }
    file.close();
}

