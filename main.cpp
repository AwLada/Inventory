#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{
        string input;
        vector <string> inventory;
        string word = "";

        cout<<"What's in the store (separate items by commas)? ";
        getline(cin,input);

        for(int i=0; i<input.size(); i++)
        {
                if (input[i] == ',' || input[i] == ' ')
                {
                       inventory.push_back (word);
                       word.clear();
                }

                else
                {
                        word.push_back (input[i]);
                }
        }
        inventory.push_back (word);

        cout<<inventory.size()<<" items in inventory.\n";
        for(int i=0; i<inventory.size(); i++)
        {
                cout<<inventory[i]<<endl;
        }

        return 0;
}

