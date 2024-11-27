#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;

#include <filesystem> //require C++17
namespace fs = std::filesystem;

#include "list/listheader.h"

// XXX DEMO DGraphModel
#include "graph/DGraphDemo.h"
// TODO Add new functions and classes to run UGraphDemo
// #include "demo/graph/UGraphDemo.h" 

int main(int argc, char** argv) {

    runAllDGraphDemos();
 
    return 0;
}
