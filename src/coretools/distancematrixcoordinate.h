#ifndef COORDS_H
#define COORDS_H

// Random
#include "../utils/randnormflt.h"
#include <glm/glm.hpp>
#include <fstream>

namespace coord {

/*--------Internal Coordinates Class----------


This class stores the indexes for the bonds,
angles and dihedrals of the molecule.
----------------------------------------------*/
class distanceMatrixCoordinates {

    std::vector<glm::ivec2> didx;

    void m_builddistanceindex(const std::vector< glm::vec3 > &xyz);
    void m_calculatedistances(const std::vector< glm::vec3 > &xyz);

public:

    // Class index constructor
    distanceMatrixCoordinates (const std::vector< glm::vec3 > &xyz) {
    try {

        m_builddistanceindex(xyz);

    } catch (std::string error) errorHandler(error);
    };


    // Destructor
    ~distanceMatrixCoordinates() {
        didx.clear();
    };
};

};
#endif
