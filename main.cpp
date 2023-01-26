#include <iostream>
#include <vector>


extern int RemoveTwos(int original);

extern int Product(std::vector<int> nums);

extern double Sum(std::vector<double> nums);

int main(){
    int ret=RemoveTwos(16);
    printf("return1:%d\n",ret);
    std::vector<double> dtest={1.0,2.3,5.7,3.6};
    double rr=Sum(dtest);
    printf("return2:%lf\n",rr);
    std::vector<int> itest={1,2,3,4,5,6,7,8};
    int ii= Product(itest);
    printf("return3:%d\n",ii);
}