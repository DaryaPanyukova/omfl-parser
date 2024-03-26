#include "lib/parser.h"


int main(int, char**) {
    std::string data = R"(
        key = true
        key1 = ["1", "2", "3"])";

    const auto root = omfl::parse(data);
    std::cout << root.Get("key1").AsStringOrDefault("Hello");
    /*
    ASSERT_TRUE(root.valid());

    ASSERT_EQ(root.Get("level1.key1").AsInt(), 1);
    ASSERT_EQ(root.Get("level1.level2-1.key2").AsInt(), 2);
    ASSERT_EQ(root.Get("level1.level2-2.key3").AsInt(), 3);*/
}
