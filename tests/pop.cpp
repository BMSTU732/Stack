#include "catch.hpp"
#include <stack.hpp>


SCENARIO("when popping an element stack must return the last one")
{
    GIVEN("stack")
    {
        stack<int> st;
        st.push(1);
        st.push(2);
        st.push(3);
        WHEN("pop an element")
        {
            auto elem = st.pop();

            THEN("popped element must be equal to 3")
            {
                REQUIRE(elem == 3);
            }
        }
    }
}
    SCENARIO("if stack is empty, pop method must throw an exception")
{
    GIVEN("empty stack")
    {
        stack<int> st;

        WHEN("trying to pop an element")
        {
            THEN("an exception must be thrown")
            {
                REQUIRE_THROWS_AS(st.pop(), std::underflow_error &);
            }
        }
    }
}
