// Standary Library
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <iomanip>
#include <vector>

// Error Handling
#include "errorhandlers.h" // Contains the error handlers.

// Classes
#include "coretools/internalcoordinate.h"
#include "coretools/distancematrixcoordinate.h"

int main(int argc, char *argv[]) {

    std::vector< glm::vec3 > atms;
    atms.push_back(glm::vec3(0,1,0));
    atms.push_back(glm::vec3(0,2,1));
    atms.push_back(glm::vec3(1,2,0));

    coord::distanceMatrixCoordinates ctest(atms);

    return 0;
};
