#include <iostream>
int global_var = 3;
void func(){
    std::cout<<global_var<<"\n";
}
int main(){
    std::cout<<global_var<<"\n";
    int global_var = 9;
    std::cout<<global_var<<"\n";
    func();

    return 0;
}