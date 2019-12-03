#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{
        string input;
        vector <string> inventory;
        string word = "";
        int a = 0;

        cout<<"What's in the store (separate items by commas)? ";
        getline(cin,input);

        for(int i=0; i<input.size(); i++)
        {
                if (!input[i] == ',')
                {       a++;
                        word.append (a,input[i]);

                }
                else
                {
                        inventory.push_back (word);
                        string word ="";
                        a = 0;
                }
        }
        cout<<inventory.size()<<" items in inventory.\n";
        for(int i=0; i<inventory.size(); i++)
        {
                cout<<inventory[i]<<endl;
        }

        return 0;
}

