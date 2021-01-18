#ifndef _MATHUTIL_H_
#define _MATHUTIL_H_

#include <cmath>

inline double random_double() {
    // Returns a random real in [0,1).
    return rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max) {
    // Returns a random real in [min,max).
    return min + (max-min)*random_double();
}

#endif // !_MATHUTIL_H_
