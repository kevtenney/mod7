#include <iostream>
using namespace std;

class Counter
{
private:
    unsigned int count;     //count

public:
    Counter():count(0) //constructor
    {};

    unsigned int get_count() //returns count
    {
        return count;
    }
    /* The operator keyword is used to overload the operator in hand*/
    Counter operator ++()  // increment prefix...adding behaviors to this operator...overloadiing it.
    //returns counter
    {
        ++count;
        Counter temp;
        temp.count = count;
        return temp;
    }
};
// Main
int main()
{
    Counter c1, c2, c3;
    cout<<"c1 = " << c1.get_count()<<endl;
    cout<<"c2 = " << c2.get_count()<<endl;

    // To do  ++c1
    ++c1;   //doesn't catch anything so it doesn't matter that above is returning a temp
    ++c2;

    cout<<"c1 = " << c1.get_count()<<endl;
    cout<<"c2 = " << c2.get_count()<<endl;

    c3 = ++c1;
    cout<<"c3 = "<<c3.get_count()<<endl;

    return 0;
}
