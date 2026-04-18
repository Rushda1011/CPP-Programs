#include <iostream>
using namespace std;
class Student{
public:
 string name;
 void get(){cin>>name;}
 void show(){cout<<name;}
};
int main(){
 Student s;
 s.get();
 s.show();
}
