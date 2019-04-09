#include <iostream>
using namespace std;
class make;
class sample
{

  public:
    sample();
    ~sample();
    void show();
    void change(int);
    void set(int);

  private:
    int a = 0;
};
void sample::change(int w)
{
    a = w;
}
void sample::show()
{
    cout << a << endl;
}
sample::sample()
{
    cout << "creat a obj" << endl;
}
sample::~sample()
{
    cout << "del a obj" << endl;
}
int main()
{
    sample a;
    a.change(3);
    a.show();
    //  system("pause");
    return 0;
}
