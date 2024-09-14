#include<iostream>
#include<vector>

int main(int argc, char** argv){
    std::vector<int> myvector;
    myvector.push_back(argc);
    std::cout<<myvector.at(0)<<std::endl;
    std::vector<char*> myvector2;
    myvector2.push_back(*argv);
    std::cout<<myvector2.at(0)<<std::endl;

    for(int i=0; i<argc; i++){
        std::cout<<*(argv+i)<<std::endl;
    }
    system("pause");
    return 0;
}