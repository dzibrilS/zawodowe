#include <iostream>
using namespace std;
namespace wLitrach

{
    const int litr = 1;
    const int galon = 5;
    const int wanna = 200;
    const int cysterna = 1000;

};
struct litry
{
    int litr{};
    int galon{};
    int wanna{};
    int cysterna{};
};
void litra(int litr, litry &liter)
{

    liter.cysterna = litr / wLitrach::cysterna;
    litr = litr % wLitrach::cysterna;
    liter.wanna = litr / wLitrach::wanna;
    litr = litr % wLitrach::wanna;

    liter.galon = litr / wLitrach::galon;
    litr = litr % wLitrach::galon;
    liter.litr = litr;
};