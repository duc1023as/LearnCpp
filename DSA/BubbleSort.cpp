#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

void BubbleSort(std::vector<int> &vec){
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec.size();j++){
            if(vec[j] > vec[j+1]){
                std::swap(vec[j],vec[j+1]);
            }
        }
    }
}

int main(){
    int number;
    std::cout<<"Size of vector:";
    std::cin>>number;
    std::vector<int> vec;
    std::srand(time(NULL));
    for(int i=0;i<number;i++){
        vec.push_back(std::rand()%100+1);
    }
    BubbleSort(vec);
    for(auto x : vec){
        std::cout<<x<<" ";
    }
    std::cout<<"\n";
    return 0;
}