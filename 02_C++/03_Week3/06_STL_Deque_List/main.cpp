#include <deque>
#include <iostream>
#include <iterator>
#include <list>

template <typename T> 
void display(T S) { 
    for(auto i : S)
    {
        std::cout<<i<<" , ";
    }
    std::cout<<std::endl;
}

int main(int argc, const char** argv) {
    std::list<int>l{1,10,5,6};
    std::deque<int>q{5,6,8,9,2};
    q.push_front(10);
    q.push_back(5);
    l.push_back(5);
    l.push_front(0);
    // std::advance()
    display(l);
    display(q);
    std::list<int>::iterator erasepos = l.begin();
    std::deque<int>::iterator erasepos2 = q.begin();
    std::advance(erasepos,2);
    l.erase(erasepos);
    display(l);
    erasepos = l.end();
    erasepos2 = q.end();
    std::advance(erasepos,-1);
    std::advance(erasepos2,-3);
    l.erase(erasepos);
    display(l);
    q.erase(erasepos2);
    // q.erase(q.begin() + 5);  // this works also 
    display(q);
    erasepos2 = q.begin();
    std::advance(erasepos2,1);
    q.insert(erasepos2,100);
    // l[2];   // we can't access list by index
    q[2];      // we cann access deque by index
    display(l);
    display(q);

    return 0;
}