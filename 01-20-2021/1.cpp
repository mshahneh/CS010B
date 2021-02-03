#include <iostream>
#include <vector>

using namespace std;


int add(int a, int b)
{
    return a+b;
}

class Number{
    public:
        int num;
        Number(int num)
        {
            this->num = num;
        }

        Number add(Number b)
        {
            Number result(this->num + b.num);
            return result;
        }

    private:
        int year_of_birth;
        int age;
    
};

int main(){

    Number instance1(5), instance2(7);
    Number instance3 = instance1.add(instance2);

    cout << instance3.num << endl;

}