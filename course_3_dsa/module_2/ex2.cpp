#include <bits/stdc++.h>

using namespace std;

class mother{
    public: void display()
    {
        cout<<"mother: display function\n";
    }
};

class daughter : public mother 
{
    public: void display ()
    {
        cout << "daughter: display function\n\n";
    }
};

int main()
{
    daughter rita;
    rita.display();   

    return 0;
}