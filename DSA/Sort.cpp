#include<iostream>
#include<string>
#include<vector>

void BubbleSort(std::vector<int> &vec,int length);
void InsertionSort(std::vector<int> &vec);
void MergeSort(std::vector<int> &vec,int left,int right);
void Merge(std::vector<int> &vec,int left,int mid,int right);
void QuickSort(std::vector<int> &vec,int left,int right);
int Partition(std::vector<int> &vec,int left,int right);
int PartitionRandom(std::vector<int> &vec,int left,int right);


int main(){
    int number;
    std::vector<int> vec;
    std::cout<<"Please,input your vector size: ";
    std::cin>>number;
    std::srand(time(NULL));
    for(int i=0;i<number;i++){
        int value = rand()%100+1;
        vec.push_back(value);
    }
    std::cout<<"Before Sorting"<<std::endl;
    for(auto x : vec){
        std::cout<<x<<" ";
    }
    std::cout<<"\n";
    //BubbleSort(vec,number);
    //InsertionSort(vec);
    //MergeSort(vec,0,vec.size()-1);
    QuickSort(vec,0,vec.size()-1);
    std::cout<<"After Sorting\n";
    for(auto x : vec){
        std::cout<<x<<" ";
    }
    std::cout<<std::endl;
    return 0;
}

void BubbleSort(std::vector<int> &vec,int length){ 
    for(int i=0;i<length -1;i++){
        for(int j =0 ;j < length -1-i;j++ ){
            if(vec[j] > vec[j+1]){
                std::swap(vec[j],vec[j+1]);
            }
        }
    }
}

void InsertionSort(std::vector<int> &vec){
    for(int i=1;i<vec.size();i++){
        int j = i-1;
        int value = vec[i];
        while(j>=0 && value<vec[j]){
            vec[j+1]=vec[j];
            j = j-1;
        }
        vec[j+1]=value;
    }
}

void MergeSort(std::vector<int> &vec,int left,int right){
    if(left <  right){
        int mid = left + (right - left)/2;
        MergeSort(vec,left,mid);
        MergeSort(vec,mid+1,right);
        Merge(vec,left,mid,right);
    }
}

void Merge(std::vector<int> &vec,int left,int mid,int right){
    int sizeLeft = mid - left +1;
    int sizeRight = right - mid;

    std::vector<int> vectorLeft;
    std::vector<int> vectorRight;

    for(int i=0;i<sizeLeft;i++){
        vectorLeft.push_back(vec[left+i]);
    }
    for(int j=0;j<sizeRight;j++){
        vectorRight.push_back(vec[mid+1+j]);
    }

    int i = 0;
    int j = 0;
    int k = left;

    while(i<sizeLeft && j<sizeRight){
        if(vectorLeft[i]<=vectorRight[j]){
            vec[k++]=vectorLeft[i++];
        }
        else{
            vec[k++]=vectorRight[j++];
        }
    }
    while(i<sizeLeft){
        vec[k++]=vectorLeft[i++];
    }
    while(j<sizeRight){
        vec[k++]=vectorRight[j++];
    }
}

void QuickSort(std::vector<int> &vec,int left,int right){
    if(left < right){
        int pivot = PartitionRandom(vec,left,right);
        QuickSort(vec,left,pivot-1);
        QuickSort(vec,pivot+1,right);
    }
}

int PartitionRandom(std::vector<int> &vec,int left,int right){
    std::srand(time(NULL));
    int pivot = left + rand() % (right - left);
    std::swap(vec[pivot],vec[right]);
    return Partition(vec,left,right);
}

int Partition(std::vector<int> &vec,int left,int right){
    int pivot = vec[right];
    int i = left - 1;
    for(int j = left;j<=right-1;j++){
        if(vec[j]<pivot){
            i++;
            std::swap(vec[i],vec[j]);
        }
    }
    std::swap(vec[i+1],vec[right]);
    return i+1;
}