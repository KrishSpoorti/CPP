#include <iostream>
using namespace std;

class Example{
    private: //not accessible outside the class; members inside the class are private by default
    int pvtX=1;
    
    public:
    int pubX=2;

    void display()
    {
        cout << "product of pub,priv:" << pvtX * pubX  <<endl;
    }

    protected:
    int proX=3;

};



int main()
{
    Example  ex;
    ex.display();
    return 0;

}
