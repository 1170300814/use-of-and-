#include "include/include.h"

using namespace std;
using namespace tbb;
struct ListNode {
         int val;
         ListNode *next;
         ListNode() : val(0), next(nullptr) {}
         ListNode(int x) : val(x), next(nullptr) {}
         ListNode(int x, ListNode *next) : val(x), next(next) {}
     };


void exe();

int main(){
//    size_t n=1<<26;
//    float res=tbb::parallel_reduce(tbb::blocked_range<size_t>(0,n),(float)0,[&](blocked_range<size_t> r,float local_res)->float {
//        for(size_t i=r.begin();i<r.end();i++){
//            local_res+=std::sin(i);
//        }
//        return local_res;
//    },[](float x,float y)->float {
//        return x+y;
//    });
//    cout<<res<<endl;

// a % b =a & (b-1) 能够规避a为负数情况下的加abs也会出现的数字倒序问题
//    int x=-7 >> 2;
//    cout<<x<<endl;
    int a=10;
    int *p=&a;
    auto &block=p;//&block这个地址被赋值为一个指针,block本身变成了一个指针

    std::cout<<*block<<std::endl;//10

//    auto &block=*p;//&block这个地址被赋值为一个指针的解,就是说block的地址处被填入了10.
//
//    std::cout<<block<<std::endl;//10
    return 0;

}