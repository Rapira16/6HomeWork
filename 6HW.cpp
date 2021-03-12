#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    ofstream out_file("1file.txt");
    for(int i = 0; i < 60; i++){
        out_file << i << " ";
    }
    ofstream out_file("2file.txt");
    for(int j = 0; j < 65; j++){
        out_file << j << " ";
    }
    out_file.close();

    return 0;
}
