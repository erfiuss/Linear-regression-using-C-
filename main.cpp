#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
    vector<float> Entrcx;
    while(true)
    {
        string s;
        getline(cin, s);
        if (s == ".")
        {
            break;
        }
        else
        {
            float ss = stof(s);
            Entrcx.push_back(ss);
        }
    }
    vector<float> Entrcy;
    while(true)
    {
        string s;
        getline(cin, s);
        if (s == ".")
        {
            break;
        }
        else
        {
            float ss = stof(s);
            Entrcy.push_back(ss);
        }
    }
    float ax = 0;
    for (int i = 0; i < Entrcx.size(); i++)
    {
        ax+=Entrcx[i];
    }
    float barx = ax/Entrcx.size();
    float ay = 0;
    for (int i = 0; i < Entrcy.size(); i++)
    {
        ay+=Entrcy[i];
    }
    float bary = ay/Entrcy.size();
    float avrgx = 0;
    for (int i = 0; i < Entrcx.size(); i++)
    {
        avrgx+=(pow(Entrcx[i]-barx, 2));
    }
    float avrgxy = 0;
    for (int i = 0; i < Entrcx.size(); i++)
    {
        avrgxy += ((Entrcx[i]-barx)*(Entrcy[i]-bary));
    }
    float a = avrgxy/avrgx;
    float b = bary - a*barx;
    cout << "Y = " << a << "*X + " << b << endl;
    return 0;
}