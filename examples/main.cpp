#include <stack.hpp>


int main()
{
    try
    {
        stack<int> st;
        std::cout << st.count() << std::endl;
        st.push(0);

        for (int i = 1; i < 6; ++i)
        {
            st.push(i);
            std::cout << st.count() << std::endl
        }
        for (int i = 0; i < 6; ++i)
        {
            std::cout << "Poped: " << st.pop() << std::endl;
            std::cout << "Count = " << st.count() << std::endl;
        }

    }
    catch (std::underflow_error& error)
    {
        std::cout << error.what() << std::endl;
    }
    return 0;
}
