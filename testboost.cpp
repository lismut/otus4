#define BOOST_TEST_MODULE test_version

#include "lib.h"
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(test_boost)

BOOST_AUTO_TEST_CASE(test_valid_version)
{
    BOOST_CHECK(3 > 0);
}

}
