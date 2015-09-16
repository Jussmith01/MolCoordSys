// Standary Library
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

// Error Handlers
#include "../errorhandlers.h"

// GLM Vector Mathematics
#include <glm/glm.hpp>

// Namespace header
#include "distancematrixcoordinate.h"

#define rad 180.0/M_PI; /*radians to degrees*/

/*---------Store Distance Matrix------------

------------------------------------------*/
void coord::distanceMatrixCoordinates::m_builddistanceindex(const std::vector< glm::vec3 > &xyz) {
    unsigned na(xyz.size());
    unsigned nd((na*na-na)/2.0);
    didx.reserve(nd);

    for (unsigned i=0;i<xyz.size();++i) {
        for (unsigned j=i+1;j<xyz.size();++j) {
            didx.push_back(glm::ivec2(i,j));
            std::cout << "(" << didx.back().x << "," << didx.back().y << ")" << std::endl;
        }
    }
};

/*---------Store Distance Matrix------------

------------------------------------------*/
void coord::distanceMatrixCoordinates::m_calculateinitialdistances(const std::vector< glm::vec3 > &xyz) {
    for (auto& di :didx) {
        xyz[di.x]
    }
};
