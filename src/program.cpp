#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;

#include <filesystem> //require C++17
namespace fs = std::filesystem;

#include "list/listheader.h"
#include "graph/AbstractGraph.h"
#include "graph/IGraph.h"
#include "graph/DGraphModel.h"
#include "graph/UGraphModel.h"

#include "graph/DGraphDemo.h"
#include "graph/UGraphDemo.h"

int main(int argc, char** argv) {
    //dataloader:
    //case_data_wo_label_1();
    //case_data_wi_label_1();
    //case_batch_larger_nsamples();
    
    //Classification:
    // twoclasses_classification();
    //threeclasses_classification();

    runAllDGraphDemos();
    runAllUGraphDemos();

    return 0;
}
