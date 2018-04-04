#include <iostream>
#include <tuple>

#include <gtest/gtest.h>

using namespace std;


tuple<int, double, bool, string> foo(){
    return std::make_tuple(1, 1.0, false, "hello world");
}



TEST(HelloWorldTest, ReturnATuple){
    auto t = foo();
    EXPECT_EQ(1, get<0>(t));
    EXPECT_EQ(1.0, get<1>(t));
    EXPECT_FALSE(get<2>(t));
    EXPECT_STREQ("hello world", get<3>(t).c_str());
}

int main(int argc, char* argv[])
{
   ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
