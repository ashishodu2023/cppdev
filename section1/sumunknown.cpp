//Program to read numbers and print the sum

#include<iostream>

int main(){

    int sum =0, value =0;

    while(std::cin>>value)  {

        sum+=value;
    }

    std::cout<<"The sum is :"<<sum<<std::endl;

}