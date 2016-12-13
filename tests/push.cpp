#include "catch.hpp"
#include <stack.hpp>


SCENARIO("push() must add value to the top of the stack")
{
    GIVEN("Empty stack")
    {
        stack<int> st;
        WHEN("Adding an element")
        {
            st.push(0);
            THEN("push() must add value 0 to the top of the stack")
            {
                REQUIRE(st.count() == 1);
                REQUIRE(st.top() == 0);
            }
        }
    }
    GIVEN("Filled stack")
    {
        stack<int> st;
        st.push(0);
        st.push(1);
        WHEN("Adding an element")
        {
            st.push(2);
            THEN("Value 2 must be at the top of the stack and number of elements must be 3")
            {
                REQUIRE(st.count() == 3);
                REQUIRE(st.top() == 2);
            }
        }
    }
    GIVEN("Full stack")
    {
        stack<int> st;
        st.push(0);
        size_t size = st.size();
        st.push(1);
        st.push(2);
        st.push(3);
        st.push(4);
        WHEN("Adding an element")
        {
            st.push(5);
            THEN("push() must reallocate memory by doubling previous and add value 5 to the top of the stack")
            {
                REQUIRE(st.size() == (size*2));
                REQUIRE(st.count() == 6);
                REQUIRE(st.top() == 5);
            }
        }
    }
}
