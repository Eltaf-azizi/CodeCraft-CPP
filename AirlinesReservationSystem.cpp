#include <iostream>
#include <fstream>
#include <windows.h>
#include <sstream>

using namespace std;

class Airline
{
    private:
    string Flight, Des, Dep;
    int Seats;

    public:
    Airline(string flight, string des, string dep, int seats)
    {
        Flight = flight;
        Des = des;
        Dep = dep;
        Seats = seats;
    }



    string getFlight()
    {
        return Flight;
    }



    string getDep()
    {
        return Dep;
    }
    


    int getSeat()
    {
        return Seats;
    }



    update(string flight)
    {
        ifstream in("D:/Flight.txt");
        ofstream out("D:/Flight Temp.txt");

        string line;
        while(getline(in, line))
        {
            int pos = line.find(flight);

            if(pos != string::npos)
            {
                
            }
        }
    }
};


display()
{
    ifstream in("D:/Flight.txt");

    if(!in)
    {
        cout << "Error: File Can't Open!" <<endl;
    }
    else
    {
        string line;

        while(getline(in, line))
        {
            cout << line <<endl;
        }
    }
}


int main()
{
    Airline flight1("F101", "UAE", "England", 50);
    Airline flight2("F202", "UAE", "USA", 40);
    Airline flight3("F303", "UAE", "Canada", 2);

    ofstream out("D:/Flight.txt");

    if(!out)
    {
        cout << "Error: File can't open!" <<endl;
    }
    else
    {
        out << "\t " << flight1.getFlight()<<" : " << flight1.getDes() << " : " <<
        flight1.getDep()() << " : " << " : " << flight1.getSeats() <<endl << endl;


        out << "\t " << flight1.getFlight()<<" : " << flight1.getDes() << " : " <<
        flight1.getDep()() << " : " << " : " << flight1.getSeats() <<endl << endl;


        out << "\t " << flight1.getFlight()<<" : " << flight1.getDes() << " : " <<
        flight1.getDep()() << " : " << " : " << flight1.getSeats() <<endl << endl;

        cout << "Data Saved Successfuly!" <<endl;
        out.close();
    }


    bool exit = false;

    while(!exit)
    {
        system("cls");
        cout << "\t Welcome To Airline Management System" <<endl;
        cout << "\t ************************************" <<endl;
        cout << "\t 1. Reserve a Seat." <<endl;
        cout << "\t 2. Exit." <<endl;
        cout << "\t Enter Your Choice: ";

        int val;
        cin>>val;

        if(val == 1)
        {
            system("cls");
            display();
            string flight;
            cout << "Enter Flight No: ";
            cin >> flight; 

            if(flight == flight1.getFlight() && flight1.getSeat() > 0)
            {

            }
        }
    }
}