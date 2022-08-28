#include <iostream>
using namespace std;
class Room
{
private:
    int id;
    int rent;
    string availability;

public:
    void setVaulue(int i, int ren)
    {
        id = ++i;
        rent = ren;
        availability = "Available";
    }
    void printValue()
    {
        cout << id << "     " << rent << "       " << availability << endl;
    }
    void setAvailability(){
        availability="Booked";
    }
};
int main(void)
{
    int rent = 4000;
    Room room[5];
    for (int i = 0; i < 5; i++)
    {
        room[i].setVaulue(i, rent);
        rent += 1000;
    }
    for (int i = 0; i < 5; i++)
    {
        room[i].printValue();
    }

    bool will = true;
    while (will)
    {
        int str;
        cout << "enter id no to book room else enter exit to 0 " << endl;
        cin >> str;
        if (str == 0 )
        {
            will = false;
        }
        else if (str >= 1 and str <=5)
        {
            
            room[str - 1].setAvailability();
            for (int i = 0; i < 5; i++)
            {
                
                room[i].printValue();
            }
        }
    }
}