#include <iostream>
#include <fstream>
#include <vector>

int fileSum(){
    std::string filePath;
    int number, sum;
    number = sum = 0;
    std::cout<<"input path"<<std::endl;
    std::cin>>filePath;
    std::cout<<"\n";
    auto fileToSum = std::fstream(filePath);
    while(fileToSum>>number){
        sum+=number;
    }
    std::cout<<sum;
}

template<typename Function>

void repeat(int n, Function zupka) {
    while(n!=0){
        zupka;
        n--;
    }
}

template<typename FunctionAllElems>

void  printVector(std::vector<FunctionAllElems> what){
    for(auto super:what){
        std::cout<<super<<" ";
    }
}

void eraseRanges(){
    std::string filePath;
    std::cout<<"input path"<<std::endl;
    std::cin>>filePath;
    std::cout<<"\n";
    auto fileToSum = std::fstream(filePath);
    int start, end;
    while(start&end!=-1){
        
    }
}

int main() {
    fileSum();
    return 0;
}