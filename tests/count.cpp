#include "catch.hpp"
#include <stack.hpp>


SCENARIO("count() must return number of elements in the stack")
{
    GIVEN("Empty stack")
    {
        stack<int> st;
        WHEN("Calling count()")
        {
            THEN("count() must return 0")
            {
                REQUIRE(st.count() == 0);
            }
        }
    }

    GIVEN("Filled stack")
    {
        stack<int> st;
        st.push(0);
        st.push(1);
        st.push(2);
        WHEN("Calling count()")
        {
            THEN("count() must return 3")
            {
                REQUIRE(s.count() == 3);
            }
        }
    }
}
