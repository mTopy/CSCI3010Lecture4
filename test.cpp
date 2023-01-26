#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <vector>

extern int RemoveTwos(int original);

extern int Product(std::vector<int> nums);

extern double Sum(std::vector<double> nums);

TEST_CASE("Remove twos testing","[RemoveTwos]"){
    REQUIRE(RemoveTwos(16)==1);
    REQUIRE(RemoveTwos(10)==5);
    REQUIRE(RemoveTwos(9)==9);
}

TEST_CASE("Product of ints","[Product]") {
    std::vector<int> a={1,2,3,4,5,6,7};
    std::vector<int> b={1,2,3,4,5,6,7,8};
    std::vector<int> c={1,2,3};
    REQUIRE(Product(a)==5040);
    REQUIRE(Product(b)==40320);
    REQUIRE(Product(c)==6);
}

TEST_CASE("Sum of doubles","[Sum]") {
    std::vector<double> a={2.8,3.2};
    std::vector<double> b={1.3,0.3};
    std::vector<double> c={0.1,2.2,3.3};
    REQUIRE(Sum(a)==static_cast<double>(6));
    REQUIRE(Sum(b)==static_cast<double>(1.6));
    REQUIRE(Sum(c)==static_cast<double>(5.6));
}