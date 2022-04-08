#include <iostream>
#include <string>
using namespace std;

class character_input
{
    public :
        
        string str = "";
        
        void add(char str1) 
        {
            str = str + str1;
        }
        
        string getvalue() 
        {
            return str;
        }
};      

class num_input : public character_input 
{
    public:
    
    string getvalue()
    {
        return str;
    }
    
    void add(char str2)
    {
        if(!(str2 >= 'a' && str2 <= 'z'))
        {
            character_input::add(str2);
            // add(str2);
        }
    }
};

int main()
{
    character_input *inputc = new character_input();
    num_input *inputn = new num_input();
    inputn->add('1');
    inputn->add('a');
    inputn->add('0');
    
    cout << inputn->getvalue();

    return 0;
}
