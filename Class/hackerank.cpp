#include<iostream>
#include<vector>

int main(){
	std::vector<int> vec;
	for(int i=0;i<10;i++){
		vec.push_back(i);
	}
	for(const int& i :  vec){
		std::cout<<i<<" ";
	}
	std::cout<<"\n";
	vec.erase(vec.begin()+2,vec.begin()+4); // remove vector .range from the start to the end - 1
	for(const int& i :  vec){
		std::cout<<i<<" ";
	}
	return 0;
}