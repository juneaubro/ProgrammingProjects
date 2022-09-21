#include <iostream>
#include <string>

int main(){
    std::string msg;
    std::cout<<"Message to repeat: ";
    std::getline(std::cin,msg);
    std::cout<<msg<<"\n";
    return 0;
}
// comment testing