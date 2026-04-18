#include <iostream>
using namespace std;
class A{public:void show(){cout<<"Base";}};
class B: public A{};
int main(){
 B obj;
 obj.show();
}
