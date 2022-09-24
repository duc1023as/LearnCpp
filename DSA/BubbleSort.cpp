#include<iostream>
#include<string>
#include<vector>

void BubbleSort(std::vector<int> &vec,int length){
    for(int i=0;i<length -1;i++){
        for(int j =0 ;j < length -1-i;j++ ){
            if(vec[j] > vec[j+1]){
                std::swap(vec[j],vec[j+1]);
            }
        }
    }
}

int main(){
    int number;
    std::vector<int> vec;
    std::cout<<"Please,input your numbers of vector size: ";
    std::cin>>number;
    std::srand(time(NULL));
    for(int i=0;i<number;i++){
        int value = rand()%100+1;
        vec.push_back(value);
    }
    BubbleSort(vec,number);
    for(auto x : vec){
        std::cout<<x<<" ";
    }
    std::cout<<std::endl;
    return 0;
}