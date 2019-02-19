#include <iostream>
#include "stack.h"
#include <limits>


void stack::ensure_capacity(size_t c)
{
    if (current_capacity < c)
    {
        if (c < 2 * current_capacity)
            c = 2 * current_capacity;

        double* newtab = new double[c];
        for (size_t  i = 0; i < current_capacity; i++)
            newtab[i] = tab[i];

        current_capacity = c;
        delete [] tab;
        tab = newtab;
    }

}


stack::stack()
    : current_size(0),
      current_capacity(1),
      tab(new double[1])
{

}


stack::stack(std::initializer_list<double> d)
    : current_size(d.size()),
      current_capacity(current_size),
      tab(new double[current_capacity])
{
    size_t pos = 0;
    for (double x : d){
        tab[pos++] = x;
    }
}


stack::stack(const stack& s)
    : current_size(s.current_size),
      current_capacity(s.current_size),
      tab(new double[current_capacity])
{
    std::cout << "Copy constructor\n";
    for (size_t i = 0; i < s.current_size; i++)
        tab[i] = s.tab[i];
}


void stack::operator = (const stack& s)
{
    std::cout << "Assigment\n";
    if (tab != s.tab)
    {
        current_size = s.current_size;
        current_capacity = current_size;
        delete [] tab;
        tab = new double[current_capacity];
        for (size_t i = 0; i < s.current_size; ++i)
        {
            tab[i] = s.tab[i];
        }
    }
}

stack::~stack()
{
    delete [] tab;
}


std::ostream& operator << (std::ostream& stream, const stack& s)
{
    stream << "[ ";
    for (size_t i = 0; i < s.current_size; i++)
    {
        stream << s.tab[i] << " ";
    }
    stream << "]\n";

    return stream;
}


void stack::push(double d)
{
    ensure_capacity(current_size + 1);
    tab[current_size++] = d;
}

void stack::pop()
{
    //if (!empty())
        current_size--;
    //else
     //   std::cerr << "EMPTY STACK!\n";
}

void stack::reset(size_t s)
{
    //if( s <= current_size)
    {
        current_size = s;
    }

}

double& stack::top()
{
    if (!empty())
    {
        return tab[--current_size];
    }
    std::cerr << "EMPTY STACK!\n";

//    return

}

double stack::top() const
{
    if (!empty())
    {
        return tab[current_size - 1];
    }
    //return std::numeric_limits<double>::max();
}
