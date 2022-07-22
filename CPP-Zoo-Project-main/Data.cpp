#include "Data.h"
#include "Ant.h"
#include "Snake.h"
#include "Bull.h"
#include "Person.h"
#include "Lizard.h"
#include "Animal.h"
#include "Data.h"
#include "Fly.h"
#include "inVertebrates.h"
#include "Mammal.h"
#include "Minotaur.h"
#include "Vertebrates.h"
#include <iostream>
using namespace std;
#define SIZE 30
#define RED "\033[1;31m" //color red
#define GREEN "\033[1;32m" //color green
#define YELLOW "\033[1;33m" //color yellow
#define BLUE "\033[1;34m" //color blue
#define PINK "\033[1;35m" //color pink
#define MAGENTA "\033[1;36m" //color cyan
#define WHITE "\033[0m"    //color reset to white
#define BLOCKCOLOR "\033[1;100;30m" //block of color

void Data::operator+=(Animal* p)
{
    if (size == 0)
    {
        arr = new Animal * [1];
        arr[0] = p;
    }
    if (size > 0)
    {
        Animal** temp;
        temp = new Animal * [size];
        for (int i = 0; i < size; i++)
        {
            temp[i] = arr[i];
        }
        delete[]arr;
        arr = new Animal * [size + 1];
        for (int i = 0; i < size; i++)
        {
            arr[i] = temp[i];
        }
        arr[size] = p;
        delete[]temp;
    }
    size++;
}

void Data::operator-=(Animal* p)
{
    if (size == 0)
    {
        cout << "There is no animals in the table.";
    }
    if (size > 0)
    {
        int temp_index;
        try { temp_index = find_index(p->get_name()); }
        catch (const char* text_fail) { cout << text_fail << endl; }

        Animal** temp1;
        temp1 = new Animal * [size-1];

        for (int i = 0; i < temp_index; i++)
            temp1[i] = arr[i];

        for(int i = temp_index+1 ; i<size ;i++)
            temp1[i-1] = arr[i];

        delete[]arr;
        arr = new Animal * [size - 1];

        for (int i = 0;i < size - 1;i++)
            arr[i] = temp1[i];


        size--;
        delete[] temp1;


    }
    
}

void Data::init()
{
    char find_name[SIZE];
    char find_name2[SIZE];
    int choice_menu;
    Animal* chosen;
    int flyspeed, groundspeed, legspeed, choice_animal;
    float height, weight;
    char name[SIZE];
    bool  sex, isbite, wild, venom, blood,mazekeeper;
    while (1)
    {
        cin.clear();
        cout << "-----------------------------" << endl << "There are " << size <<" animals in the animal collection."<<endl << "Choose from the menu:" << endl << "1.Create new animal" << endl << "2.Kill an animal" << endl << "3.Find an animal" << endl << "4.Print all animals" << endl << "5.Check mating possibility" << endl << "6.Credits" << endl << "7.Exit" << endl;
        cin >> choice_menu;
        switch (choice_menu)
        {
        case 1:
            cin.clear();
            cout << "-----------------------------" << endl << "Animal number: " << size + 1 << endl << "Please choose from the menu:" << endl << "1.Fly" << endl << "2.Ant" << endl << "3.Human" << endl << "4.Bull" << endl << "5.Snake" << endl << "6.Lizard" << endl << "7.Minotaur" << endl << "8.Exit" << endl;
            cin >> choice_animal;
            switch (choice_animal)
            {
            case 1:
                cout << "Enter Fly's name: "<<endl;
                cin >> name;
                if (find_animal(name))                                                           
                {
                    cout << "This name already exist, try again." << endl;
                    break;
                }
                cout << "Is the fly a Male ? (N for female) "<<endl;
                sex=yesno_insert();
                cout << "Enter the speed of the Fly: "<<endl;
                cin >> flyspeed;
                chosen = new Fly(name, sex,1, flyspeed);
                operator+=(chosen);
                break;
            case 2:
                cout << "Enter Ant's name: "<<endl;
                cin >> name;
                if (find_animal(name))
                {
                    cout << "This name already exist, try again." << endl;
                    break;
                }
                cout << "Is the ant Male ? (N for female)  " << endl;
                sex=yesno_insert();
                cout << "Does the ant stings?"<<endl;
                isbite=yesno_insert();
                chosen = new Ant(name, sex,0, isbite);
                operator+=(chosen);
                break;
            case 3:
                cout << "Enter person's name: "<<endl;
                cin >> name;
                if (find_animal(name))
                {
                    cout << "This name is already exist, try again." << endl;
                    break;
                }
                cout << "Is the Person a Male ? (N for female) " << endl;
                sex = yesno_insert();
                cout << "Enter human height: "<<endl;
                cin >> height;
                cout << "Enter human weight: "<<endl;
                cin >> weight;
                cout << "Does he have hot blood?"<<endl;
                 blood=yesno_insert();
                chosen = new Person(name, sex, blood, height, weight);
                operator+=(chosen);
                break;
            case 4:
                cout << "Enter Bull's name: "<<endl;
                cin >> name;
                if (find_animal(name))
                {
                    cout << "This name is already exist, try again." << endl;
                    break;
                }
                cout << "Is the Bull a Male ? (N for female) "<<endl;
                sex = yesno_insert();
                cout << "Is The bull wild?" << endl;
                wild=yesno_insert();
                cout << "Does he have hot blood?" << endl;
                blood=yesno_insert();
                chosen = new Bull(name, sex, blood, wild);
                operator+=(chosen);
                break;
            case 5:
                cout << "Enter Snake's name: "<<endl;
                cin >> name;
                if (find_animal(name))
                {
                    cout << "This name already exist, try again." << endl;
                    break;
                }
                cout << "Is the snake a Male ? (N for female) "<<endl;
                sex=yesno_insert();
                cout << "Enter Snake's speed: " << endl;
                cin >> groundspeed;
                cout << "The Snake is has venom?" << endl;
                venom = yesno_insert();
                cout << "Does he have hot blood?" << endl;
                 blood=yesno_insert();
                chosen = new Snake(name, sex,blood,0, groundspeed, venom);
                operator+=(chosen);
                break;
            case 6:
                cout << "Enter Lizard's name: "<<endl;
                cin >> name;
                if (find_animal(name))
                {
                    cout << "This name already exist, try again." << endl;
                    break;
                }
                cout << "Is the Lizard a Male ? (N for female) "<<endl;
                sex=yesno_insert();
                cout << "Enter Lizard's speed: " << endl;
                cin >> legspeed;
                cout << "Does he have hot blood?" << endl;
                blood=yesno_insert();
                chosen = new Lizard(name, sex,blood,1, legspeed);
                operator+=(chosen);
                break;
            case 7:
                cout << "Enter Minotaur's name: "<<endl;
                cin >> name;
                if (find_animal(name))
                {
                    cout << "This name already exist, try again." << endl;
                    break;
                }
                cout << "Is the Minotaur a Male ? (N for female) " << endl;
                sex = yesno_insert();
                cout << "Enter Minotaur's speed: " << endl;
                cin >> legspeed;
                cout << "Does he have hot blood?" << endl;
                blood=yesno_insert();
                cout << "Enter his height" << endl;
                cin >> height;
                cout << "Enter his weight?" << endl;
                cin >> weight;
                cout << "Is the minotaur a Mazekeeper ?" << endl;
                mazekeeper = yesno_insert();
                cout << "Is the minotaur is wild?" << endl;
                wild = yesno_insert();
                
                chosen = new Minotaur(name, sex,blood,wild,height, weight, mazekeeper);
                operator+=(chosen);
                break;
            case 8:
                return;
            default:
                cout << "Wrong choice, try again." << endl;
                break;
            }
            break;
        case 2:
            cin.clear();
            cout << "-----------------------------" << endl << "Animal Type: " << size + 1 << endl << "Please choose from the menu:" << endl << "1.Fly" << endl << "2.Ant" << endl << "3.Human" << endl << "4.Bull" << endl << "5.Snake" << endl << "6.Lizard" << endl << "7.Minotaur" << endl << "8.Exit" << endl;
            cin >> choice_animal;
            switch (choice_animal)
            {
            case 1:
                cout << "Enter Fly name: ";
                cin >> name;
                if (!find_animal(name))
                {
                    cout << "This name is already exist, try again." << endl;
                    break;
                }
                chosen = arr[find_index(name)];
               
                operator-=(chosen);
                break;
            case 2:
                cout << "Enter Ant name: ";
                cin >> name;
                if (!find_animal(name))
                {
                    cout << "This name is already exist, try again." << endl;
                    break;
                }
                chosen = arr[find_index(name)];
                operator-=(chosen);
                break;
            case 3:
                cout << "Enter Human name: ";
                cin >> name;
                if (!find_animal(name))
                {
                    cout << "This name is already exist, try again." << endl;
                    break;
                }
                chosen = arr[find_index(name)];
                operator-=(chosen);
                break;
            case 4:
                cout << "Enter Bull name: ";
                cin >> name;
                if (!find_animal(name))
                {
                    cout << "This name is already exist, try again." << endl;
                    break;
                }
                chosen = arr[find_index(name)];
                operator-=(chosen);
                break;
            case 5:
                cout << "Enter Snake name: ";
                cin >> name;
                if (!find_animal(name))
                {
                    cout << "This name is already exist, try again." << endl;
                    break;
                }
                chosen = arr[find_index(name)];
                operator-=(chosen);
                break;
            case 6:
                cout << "Enter Lizard name: ";
                cin >> name;
                if (!find_animal(name))
                {
                    cout << "This name is already exist, try again." << endl;
                    break;
                }
                chosen = arr[find_index(name)];
                operator-=(chosen);
                break;
            case 7:
                cout << "Enter Minotaur name: ";
                cin >> name;
                if (!find_animal(name))
                {
                    cout << "This name is already exist, try again." << endl;
                    break;
                }
                chosen = arr[find_index(name)];
                operator-=(chosen);
                break;
            case 8:
                return;
            default:
                cout << "Wrong choice, try again." << endl;
                break;
            }
            break;
        case 3:
            cout << "Enter the name of the animal you want to find: ";
            cin >> find_name;
            print_animal(find_name);
            break;
        case 4:
            print_all();
            break;
        case 5:
            cout << "Enter two names of animals you want to mate"<<endl<<"name 1. . ."<<endl;
            cin >> find_name;
            if (!find_animal(find_name)) { cout << "The name does not exist" << endl; break; }
            cout << "name 2. . . "<<endl;
            cin >> find_name2;
            if (!find_animal(find_name2)) { cout << "The name does not exist" << endl; break; }
            if (*arr[find_index(find_name)] == *arr[find_index(find_name2)])
                cout << "They can have a baby;" << endl;
            else 
                cout << "They can not have a baby;" << endl;

            break;
        case 6:
            cout << RED << "This table is created by:" << WHITE << endl;
            cout << GREEN << "Vladislav Kelar 320467335" << WHITE << endl;
            cout << YELLOW << "Matan Sofer 208491811 " << WHITE << endl;
            cout << PINK << "Matan Ohayon 311435614" << WHITE << endl;
            cout << MAGENTA << "Maor Arnon 205974553" << WHITE << endl;
            break;
        case 7:
            return;
        default:
            cout << "Wrong choice, try again." << endl;
        }
    }
}

void Data::print_all() const
{
    cout << YELLOW << "----------------------------" << WHITE << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "The type of the animal is :" ;
        cout << arr[i]->get_type() << endl;
        arr[i]->print();
        cout << YELLOW << "----------------------------" << WHITE << endl;
    }
}

void Data::print_welcome() const
{
    cout << PINK << "    HH    " << MAGENTA << "  HH    H" << YELLOW << "  HHH" << GREEN << "  HH   HH" << RED << "      HH    " << BLUE << "  H     " << WHITE << "   HHH " << endl;
    cout << PINK << "   H  H   " << MAGENTA << "  H H   H" << YELLOW << "   H " << GREEN << "  H H H H" << RED << "     H  H   " << BLUE << "  H     " << WHITE << "  H    " << endl;
    cout << PINK << "  HHHHHH  " << MAGENTA << "  H  H  H" << YELLOW << "   H " << GREEN << "  H  H  H" << RED << "    HHHHHH  " << BLUE << "  H     " << WHITE << "   HHH " << endl;
    cout << PINK << " H      H " << MAGENTA << "  H   H H" << YELLOW << "   H " << GREEN << "  H     H" << RED << "   H      H " << BLUE << "  H     " << WHITE << "      H" << endl;
    cout << PINK << "H        H" << MAGENTA << "  H    HH" << YELLOW << "  HHH" << GREEN << "  H     H" << RED << "  H        H" << BLUE << "  HHHHHH" << WHITE << "   HHH " << endl;
    cout << BLOCKCOLOR << "                                                            " << WHITE << endl;
}

bool Data::find_animal(char* name) const
{
    for (int i = 0; i < size; i++)
        if (strcmp(arr[i]->get_name() , name)==0)return true;
    return false;
}

void Data::print_animal(char* a) const
{
    for (int i = 0; i < size; i++)
        if (strcmp(arr[i]->get_name(),a)==0 )
            arr[i]->print();
        else
            cout << "There is no animal with this name." << endl;
}

int Data::find_index(char* name) const
{
    for (int i = 0; i < size; i++)
        if (strcmp(arr[i]->get_name(),name)==0)return i;
    throw "didn't find the index";
}

bool Data::yesno_insert()
{
    while (true) {
        char input[10];
        cout << "Enter y/n (Y for true N for false)" << endl;
        cin >> input;
        if ((strcmp(input, "y") == 0) || (strcmp(input, "Y") == 0) || (strcmp(input, "Yes") == 0) || (strcmp(input, "yes") == 0))return true;
        else if (strcmp(input, "n") == 0 || (strcmp(input, "N") == 0) || (strcmp(input, "No") == 0) || (strcmp(input, "no") == 0))return false;
        cout << "You didnt entered a valid input"<<endl;
    }
}
