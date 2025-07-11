
#include<iostream>

std::string global_str;
int global_int;

int main(int argc , char** argv){

    int input_value;
    double i = {3.14};
    //std::cout<<i<<std::endl;
    //std::cout<<"\x32\x4D\n";
    //std::cout<<"\x32\t\x4D\n";

    double salary  = 999.99;
    double wages = salary;

    std::string local_str;
    int local_int;

    int ii = 3.14;
    // First declare then use the value to get input from user    
   // std::cin>>input_value;
   //std::cout<<ii;

   std::cout<<local_str<<local_int<<std::endl;

   //std::cout<<global_str<<global_int<<std::endl;


   extern int ix = 1024;
   int iy;
   extern int iz;


    return 0;
}