/* 11-2-2025 7:45 pm*/
#include <iostream>


int main(){
        float a = 3.14;
        int b = 64;
        std::cout<<int(a)+int(b)<<std::endl; 
        /*
                ^|
                |
                |
                |
                |
                |
                |
                |
                |
                _ Equivalent


        */
        std::cout<<(int)a+(int)b<<std::endl;



        return 0;
}