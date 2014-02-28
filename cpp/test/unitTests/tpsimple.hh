#ifndef TPSIMPLE_HH
#define TPSIMPLE_HH

/// simple track parameter initialization and read back test
#include "trackParameters.hh"

#include "UnitTest.hh"
#include <vector>

class tpsimple : public UnitTesting::UnitTest
{
    public:
        tpsimple();
        void run();

    private:
        // the test calls in different blocks
        // the distinctions are arbitrary:
        void _test();

        aidaTT::trackParameters* _one;
        typedef const double cdbl;
        cdbl a, b, c, d, e;

        std::vector<double> _covmatrix;
        std::vector<double> _refpoint ;
        std::vector<double> _helix ;

};
#endif // TPSIMPLE_HH
