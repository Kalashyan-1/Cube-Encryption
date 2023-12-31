#ifndef ENC_
#define ENC_

#include <iostream>
#include <fstream>
#include <random>
#include <sstream>
#include <algorithm>
#include <map>
#include <functional>


class Encryption {
private:
    std::string cube;
    std::map<char, std::function<void(std::string& vec)>> map;

private:
    void rotateLeft(std::string& vec);
    void rotateRight(std::string& vec);
    void rotateUp(std::string& vec);
    void rotateDown(std::string& vec);
    int randNumGen();
    void initMap();
    
public:
    Encryption(const std::string& str);
    std::string encript();
    std::string decript();
};

#endif  //ENC_