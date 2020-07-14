#include <iostream>
#include <vector>
using namespace std;

template <class A1>
void Show(vector<A1> vec_){
    for(size_t i=0;i<vec_.size();++i){
        cout<<vec_[i]<<" ";
    }
}

template <class A1>

void FooMax(A1 * arr)
{
    A1 max=arr[0];
    std::vector<A1> vec;
    for(int i=0;i<10;++i){
        if(arr[i]>=max){ // Записываем большее
            max=arr[i];
        }
        if(vec.empty()){// первый вход
            vec.push_back(max);
        }else{
            if(arr[i]==vec[0]){
                vec.push_back(arr[i]);
            }else if (arr[i]<vec[0])
                continue;
            else
                vec.clear();
        }
    }
    Show(vec);
}

int main()
{
    double mas[]={-3,1,106.3,12,106.3,-4,99,7,106.3,2};
    FooMax(mas);
}
