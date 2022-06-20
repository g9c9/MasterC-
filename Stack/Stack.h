#ifndef STACK_H
#define STACK_H

#include <initializer_list>
#include <iostream>

template<typename T>
class Stack
{
private:
    int m_array_length{};
    int m_length{};
    T* m_data{};

    Stack(int length) : m_length {length}, m_array_length {length}
    {
        m_data = new T[m_length]{};
    }

public:
    Stack() : Stack(0)
    {
    }

    Stack(std::initializer_list<T> list) : Stack(static_cast<int>(list.size()))
    {
        int idx {0};
        for (auto element : list)
        {
            m_data[idx] = element;
            ++idx;
        }
    }

    ~Stack()
    {
        delete [] m_data;
    }

    void push(const T& value)
    {
        ++m_length;
        if(m_length > m_array_length)
        {
            T* newArray {new T[m_length]};
            for(int i = 0; i < m_array_length; i++)
                newArray[i] = m_data[i];
            delete [] m_data;
            m_data = newArray;
            m_array_length = m_length;
        }
        m_data[m_length-1] = value;
    }

    T pop()
    {
        if(m_length > 0)
            return m_data[(m_length--) - 1];
        return static_cast<T>(NULL);
    }

    T peek() const
    {
        if(m_length > 0)
            return m_data[m_length - 1];
        return static_cast<T>(NULL);
    }

    int getSize() const {return m_length;}

    friend std::ostream& operator<<(std::ostream &out, const Stack &stack)
    {
        out << "Stack {";
        for (int i = 0; i < stack.m_length; i++)
        {
            out << " " << stack.m_data[i];
        }
        if(stack.m_length == 0) out << " Empty";
        out << " }";
        return out;
    }
};

#endif