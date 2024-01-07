#include <iostream>
using namespace std;

class HesapMakinesi
{
    private:
        int a;
        int b;
    public:

        int topla()
        {
            std::cout<<a+b<<endl;
            return 0;
        }
        int cikar()
        {
            std::cout<<a-b<<endl;
            return 0;
        }
        int sayiAl()
        {
            std::cout<<"Bir sayi girin:"<<endl;
            std::cin>>a;
            std::cout<<"Bir sayi girin:"<<endl;
            std::cin>>b;
            return 0;
        }
};

int main()
{
    HesapMakinesi makine1;
    int islem;
    std::cout<<"İslem girin (toplama : 1, cikarma : 2)"<<endl;
    std::cin>>islem;
    switch (islem)
    {
    case 1:
    makine1.sayiAl();
    makine1.topla();
        break;
    case 2:
    makine1.sayiAl();
    makine1.cikar();
        break;
    
    default:
    std::cout<<" "<<endl;
        break;
    }
    return 0;
}
