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

// NOTE: Để chạy demo, mở terminal chạy WSL, sau đó gõ vào lệnh "./compilation-command.sh" và đợi G++ compile. 
//       Gõ "./program" để chạy demo sau khi đã compile xong

int main(int argc, char** argv) {

    runAllDGraphDemos();
 
    return 0;
}
