#include <stack.hpp>
#include <iostream>
setlocale(LC_ALL, "Russian");

int main()
{
    stack<int> st;
    std::cout << st.empty() << std::endl;
    for (int i = 0; i < 6; ++i)
    {
        std::cout << "Добавление: " << i << std::endl;
        st.push(i);
    }
    std::cout << st.empty() << std::endl;
    for (int i = 0; i < 6; ++i)
    {
        std::cout << "Удаление: " << st.top() << std::endl;
        st.pop();
        if (!st.empty()) std::cout << "Вершина Stack: " << st.top() << std::endl;
    }
    std::cout << st.empty() << std::endl;
    return 0;
}
