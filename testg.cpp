#include <gtest/gtest.h>
#include <list>
#include <string>
#include "lib.h"

TEST(GOOGLE_TEST2, test3)
{
    ASSERT_TRUE(print_view_ip(char{-1}) == "255.255.255.255");
}

TEST(GOOGLE_TEST3, test4)
{
    ASSERT_TRUE(print_view_ip(short{0}) == "0.0.0.0");
}

TEST(GOOGLE_TEST4, test5)
{
    ASSERT_TRUE(print_view_ip(int{2130706433}) == "127.0.0.1");
}

TEST(GOOGLE_TEST5, test6)
{
    ASSERT_TRUE(print_view_ip<long long>(8875824491850138409) == "123.45.67.89.101.112.131.41");
}

TEST(GOOGLE_TEST6, test7)
{
    ASSERT_TRUE(print_view_ip(std::string{"trololo"}) == "trololo");
}

TEST(GOOGLE_TEST7, test8)
{
    ASSERT_TRUE(print_view_ip(std::vector{0, 1, 2, 3}) == "0.1.2.3");
}

TEST(GOOGLE_TEST8, test9)
{
    ASSERT_TRUE(print_view_ip(std::list{10, 20, 30, 40}) == "10.20.30.40");
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}