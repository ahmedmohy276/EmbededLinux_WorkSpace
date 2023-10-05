#include <iostream>
#include <iterator>
#include <list>
#include <vector>



template <typename T> 
void display(T S) { 
    for(auto i : S)
    {
        std::cout<<i<<" , ";
    }
    std::cout<<std::endl;
 }

void print(int x) { std::cout<<x<<std::endl;}

int main(int argc, const char** argv) 
{
    std::vector<int>v1{1,2,3,4,5,6,7};
    std::vector<int>v2{8,9,10,11,12,13,14};
    std::vector<int>v3{8,4,3,1,2,6,9};
    display(v3);
    v3.pop_back();
    display(v3);
    v3.push_back(3);
    display(v3);
    std::vector<int>v4(v1);
    display(v4);
    std::cout<<(v1 == v4? "equal" : "not equal")<<std::endl;
    v4.pop_back();
    v4.push_back(2);
    v4.at(4) = 3;
    display(v4);
    std::cout<<(v1 == v4? "equal" : "not equal")<<std::endl;
    v4.assign(v3.begin(),v3.end());
    display(v4);
    v4.assign(4,5);
    display(v4);
    v4.assign({1,2,3,4,5,6});
    display(v4);
    v4.erase(v4.begin()+2,v4.begin()+4);
    display(v4);
    v4.resize(8,3);
    display(v4);
    v4.resize(10,5);
    display(v4);
    v4.resize(12,9);
    display(v4);
    print(v4.capacity());
    v4.reserve(8);
    display(v4);
    v4.shrink_to_fit();
    print(v4.capacity());
    print(*(v4.data()));
    v4.insert(v4.begin()+3,{8,7,10});
    display(v4);
    print(v4.capacity());
    std::vector<std::pair<int,std::string>>v5{{2,"a"},{3,"b"}};
    for(auto i : v5)
    {
        std::cout<<"{"<<i.first<<" , "<<i.second<<"}";;
    }
    std::cout<<std::endl;
    v5.emplace_back(5,"c");
    v5.emplace(v5.begin()+1,7,"g");
    for(auto i : v5)
    {
        std::cout<<"{"<<i.first<<" , "<<i.second<<"}";;
    }
    std::cout<<std::endl;
    std::vector<std::pair<int,std::string>>v6;
    v6 = v5;
    for(auto i : v5)
    {
        std::cout<<"{"<<i.first<<" , "<<i.second<<"}";;
    }

    std::cout<<std::endl;  
    return 0;
}