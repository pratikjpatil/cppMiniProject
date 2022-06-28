#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<stdlib.h>

using namespace std;

int addCustomer = 0;
void mainMenu();

class Management
{
   public:

       Management()
       {
           mainMenu();
       }
};


class Details
{   
    public: 

        static string name, gender;
        int age;
        string city;
        static int cId;
        char arr[100];

        void information()
        {
            cout << "\nEnter the customer ID : ";
            cin >> cId;
            cout << "\nEnter the name : ";
            cin >> name;
            cout <<"\nEnter the age: ";
            cin >> age;
            cout << "\nAddress : ";
            cin >> city;
            cout <<"\nGender : ";
            cin >> gender;
            cout << "Your details are saved with us\n"<<endl;

        }
};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;

        void flights()
        {
            string flightN[]={"Dubai", "Canada", "UK", "USA", "Australia","Europe"};

            for(int i=0; i<6; i++)
            {
               cout <<(i+1)<<".flight to "<< flightN[i]<<endl;
            }
            cout <<"\n\tWelcome to the Airlines!"<<endl;
            cout <<"Press the number of the country of which you want to book the flight: ";
            cin >> choice;
            switch(choice)
            {
                case 1:
                {
                    cout <<"____________Welcome to Dubai Emirates____________\n"<<endl;
                    cout <<"Your comfort is our priority Enjoy the journey!"<<endl;
                    cout <<"Following are the flights \n"<<endl;

                    cout <<"1. DUB - 498"<<endl;
                    cout <<"\t08-07-2022 8:00AM 10hrs Rs. 14000"<<endl;
                    cout <<"2. DUB - 658"<<endl;
                    cout <<"\t09-07-2022 4:00AM 12hrs Rs. 10000"<<endl;
                    cout <<"3. DUB - 508"<<endl;
                    cout <<"\t11-07-2022 11:00AM 11hrs Rs. 9000"<<endl;                    

                    cout << "\nSelect the flight you want to book : ";
                    cin >> choice1;

                    if(choice1==1)
                    {
                        charges=14000;
                        cout <<"\nYou have successfully booked the flight DUB - 498"<<endl;
                        cout <<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==2){
                        charges = 10000;
                        cout <<"\nYou have successfully booked the flight DUB - 658"<<endl;
                        cout <<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==3){
                        charges = 9000;
                        cout <<"\nYou have successfully booked the flight DUB - 508"<<endl;
                        cout <<"You can go back to menu and take the ticket"<<endl;
                    }
                    else
                    {
                        cout <<"Invalid input , shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout <<"Press any key to go back to main menu: "<<endl;
                    cin >> back;
                    if(back==1)
                    {
                        mainMenu();
                    }
                    else
                    {
                        mainMenu();
                    }
                }

                case 2:
                {
                    cout <<"____________Welcome to Canadian Airlines____________\n"<<endl;
                    cout <<"Your comfort is our priority Enjoy the journey!"<<endl;
                    cout <<"Following are the flights \n"<<endl;

                    cout <<"1. CA - 198"<<endl;
                    cout <<"\t09-07-2022 2:00PM 20hrs Rs. 34000"<<endl;
                    cout <<"2. CA - 158"<<endl;
                    cout <<"\t11-07-2022 6:00AM 23hrs Rs. 29000"<<endl;
                    cout <<"3. CA - 208"<<endl;
                    cout <<"\t14-07-2022 12:00AM 21hrs Rs. 40000"<<endl;                    

                    cout << "\nSelect the flight you want to book : ";
                    cin >> choice1;

                    if(choice1==1)
                    {
                        charges=34000;
                        cout <<"\nYou have successfully booked the flight CA - 198"<<endl;
                        cout <<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==2){
                        charges = 29000;
                        cout <<"\nYou have successfully booked the flight CA - 158"<<endl;
                        cout <<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==3){
                        charges = 40000;
                        cout <<"\nYou have successfully booked the flight CA - 208"<<endl;
                        cout <<"You can go back to menu and take the ticket"<<endl;
                    }
                    else
                    {
                        cout <<"Invalid input , shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout <<"Press any key to go back to main menu:"<<endl;
                    cin >> back;
                    if(back==1)
                    {
                        mainMenu();
                    }
                    else
                    {
                        mainMenu();
                    }
                }

                case 3:
                {
                    cout <<"____________Welcome to UK Airways____________\n"<<endl;
                    cout <<"Your comfort is our priority Enjoy the journey!"<<endl;
                    cout <<"Following are the flights \n"<<endl;

                    cout <<"1. UK - 798"<<endl;
                    cout <<"\t12-07-2022 10:00AM 14hrs Rs. 44000"<<endl;                    

                    cout << "\nSelect the flight you want to book :";
                    cin >> choice1;

                    if(choice1==1)
                    {
                        charges=44000;
                        cout <<"\nYou have successfully booked the flight CA - 198"<<endl;
                        cout <<"You can go back to menu and take the ticket"<<endl;
                    }
                    else
                    {
                        cout <<"Invalid input , shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout <<"Press any key to go back to main menu:"<<endl;
                    cin >> back;
                    if(back==1)
                    {
                        mainMenu();
                    }
                    else
                    {
                        mainMenu();
                    }
                }

                case 4:
                {
                    cout <<"____________Welcome to US Airways____________\n"<<endl;
                    cout <<"Your comfort is our priority Enjoy the journey!"<<endl;
                    cout <<"Following are the flights \n"<<endl;

                    cout <<"1. USA - 403"<<endl;
                    cout <<"\t10-07-2022 3:00PM 22hrs Rs. 37000"<<endl;
                    cout <<"2. USA - 679"<<endl;
                    cout <<"\t09-07-2022 6:00AM 23hrs Rs. 39000"<<endl;
                    cout <<"3. USA - 301"<<endl;
                    cout <<"\t12-07-2022 12:00AM 21hrs Rs. 42000"<<endl;                    

                    cout << "\nSelect the flight you want to book :";
                    cin >> choice1;

                    if(choice1==1)
                    {
                        charges=37000;
                        cout <<"\nYou have successfully booked the flight USA - 403"<<endl;
                        cout <<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==2){
                        charges = 39000;
                        cout <<"\nYou have successfully booked the flight USA - 679"<<endl;
                        cout <<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==3){
                        charges = 42000;
                        cout <<"\nYou have successfully booked the flight USA - 301"<<endl;
                        cout <<"You can go back to menu and take the ticket"<<endl;
                    }
                    else
                    {
                        cout <<"Invalid input , shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout <<"Press any key to go back to main menu:"<<endl;
                    cin >> back;
                    if(back==1)
                    {
                        mainMenu();
                    }
                    else
                    {
                        mainMenu();
                    }
                }

                case 5:
                {
                    cout <<"____________Welcome to Australian Airlines____________\n"<<endl;
                    cout <<"Your comfort is our priority Enjoy the journey!"<<endl;
                    cout <<"Following are the flights \n"<<endl;

                    cout <<"1. AS - 698"<<endl;
                    cout <<"\t018-07-2022 9:00AM 20hrs Rs. 42000"<<endl;
                    cout <<"2. AS - 514"<<endl;
                    cout <<"\t19-07-2022 4:00PM 22hrs Rs. 34000"<<endl;
                    cout <<"3. AS - 264"<<endl;
                    cout <<"\t18-07-2022 11:00AM 21hrs Rs. 44000"<<endl;                    

                    cout << "\nSelect the flight you want to book :";
                    cin >> choice1;

                    if(choice1==1)
                    {
                        charges=42000;
                        cout <<"\nYou have successfully booked the flight AS - 698"<<endl;
                        cout <<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==2){
                        charges = 34000;
                        cout <<"\nYou have successfully booked the flight AS - 514"<<endl;
                        cout <<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==3){
                        charges = 44000;
                        cout <<"\nYou have successfully booked the flight AS - 264"<<endl;
                        cout <<"You can go back to menu and take the ticket"<<endl;
                    }
                    else
                    {
                        cout <<"Invalid input , shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout <<"Press any key to go back to main menu:"<<endl;
                    cin >> back;
                    if(back==1)
                    {
                        mainMenu();
                    }
                    else
                    {
                        mainMenu();
                    }
                }

                case 6:
                {
                    cout <<"____________Welcome to European Airlines____________\n"<<endl;
                    cout <<"Your comfort is our priority Enjoy the journey!"<<endl;
                    cout <<"Following are the flights \n"<<endl;

                    cout <<"1. EU - 898"<<endl;
                    cout <<"\t09-07-2022 2:00AM 18hrs Rs. 36000"<<endl;
                    cout <<"2. EU - 958"<<endl;
                    cout <<"\t11-07-2022 6:00AM 19hrs Rs. 37000"<<endl;
                    cout <<"3. EU - 146"<<endl;
                    cout <<"\t14-07-2022 10:00AM 20hrs Rs. 31000"<<endl;                    

                    cout << "\nSelect the flight you want to book :";
                    cin >> choice1;

                    if(choice1==1)
                    {
                        charges=36000;
                        cout <<"\nYou have successfully booked the flight EU - 898"<<endl;
                        cout <<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==2){
                        charges = 37000;
                        cout <<"\nYou have successfully booked the flight EU - 958"<<endl;
                        cout <<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==3){
                        charges = 31000;
                        cout <<"\nYou have successfully booked the flight EU - 146"<<endl;
                        cout <<"You can go back to menu and take the ticket"<<endl;
                    }
                    else
                    {
                        cout <<"Invalid input , shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout <<"Press any key to go back to main menu:"<<endl;
                    cin >> back;
                    if(back==1)
                    {
                        mainMenu();
                    }
                    else
                    {
                        mainMenu();
                    }
                }

                default:
                {
                    cout <<"Invalid input, Shifting you to the main menu !"<<endl;
                    mainMenu();
                    break;
                }


            }
        }

};

float registration::charges;
int registration::choice;

class ticket : public registration, Details
{
    public:

        void Bill()
        {
            string destination="";
            ofstream outf("records.txt");
            {
                outf<<"__________Legends Airlines_________"<<endl;
                outf<<"______________Ticket_______________"<<endl;
                outf<<"___________________________________"<<endl;

                outf<<"Customer ID: "<< Details::cId <<endl;
                outf<<"Customer Name: "<< Details::name<<endl;
                outf<<"Customer Gender: "<< Details::gender<<endl;
                outf<<"\tDescription"<<endl<<endl;

                if(registration::choice==1){
                    destination="Dubai";
                }
                else if(registration::choice==2){
                    destination="Canada";
                }
                else if(registration::choice==3){
                    destination="UK";
                }
                else if(registration::choice==4){
                    destination="USA";
                }
                else if(registration::choice==5){
                    destination="Australia";
                }
                else if(registration::choice==6){
                    destination="Europe";
                }

                outf<<"Destination :\t\t"<<destination<<endl;
                outf<<"Flight cost :\t\t"<<registration::charges<<endl;

            }
            outf.close();
        }
        void dispBill()
        {
            //used to read from file
            ifstream ifs("records.txt");
            {
                if(ifs)
                {
                    cout << "File error!"<<endl;
                }
                while(!ifs.eof())
                {
                    ifs.getline(arr,100);
                    cout <<arr<<endl;
                }
            }
            ifs.close();
        }

};


void mainMenu()
{   
    system("cls");
   int lchoice;
   int schoice;
   int back;
   cout <<"\n\t                  INDIA AIRLINES \n"<< endl;
   cout <<"\t  ___________________Main Menu________________"<< endl;
   cout <<"\t _______________________________________________"<< endl;
   cout << "\t\t\t\t\t\t\t" << endl;
   cout <<"\t|\t Press 1:    Add Customer Details.     \t|"<<endl;
   cout <<"\t|\t Press 2:    Flight Registration.      \t|"<<endl;
   cout <<"\t|\t Press 3:    Ticket and Charges.       \t|"<<endl;
   cout <<"\t|\t Press 4:    Exit.                     \t|"<<endl;
   cout <<"\t|\t\t\t\t\t\t|" <<endl;
   cout <<"\t _______________________________________________\n"<< endl;

   cout << "Enter the choice : ";
   cin >> lchoice;

   Details d;
   registration r;
   ticket t;

   switch(lchoice)
   {

        case 1:
            {
                cout<<"__________Customers__________\n"<<endl;
                d.information();
                addCustomer=1;
                cout << "Press 1 to go back to Main Menu: ";
                cin >> back;

                if(back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
                
                break;
            }
        
        case 2:
            {   
                if(addCustomer==0){
                    cout<<"\nAdd customer first!"<<endl;
                    mainMenu();
                    break;
                }
                cout << "__________Book a flight_________\n"<<endl;
                r.flights();
                break;
            }

        case 3:
            {   
                if(addCustomer==0){
                    cout<<"\nAdd customer first!"<<endl;
                    mainMenu();
                    break;
                }
                cout <<"_____GET YOUR TICKET_____\n"<<endl;
                t.Bill();
                cout << "Your ticket is printed you can collect it\n"<<endl;
                cout  << "Press 1 to display your ticket: ";

                cin >>back;
                    if(back==1)
                    {
                        t.dispBill();
                        cout << "Press any key to go back to main menu: ";
                        cin >> back;
                        if(back==1)
                        {
                            mainMenu();
                        }
                        else{
                            mainMenu();
                        }

                    }
                    else{
                        mainMenu();
                    }
                    break;
            }
        
        case 4:
        {
                cout <<"\n\n\t________Thank You________\n\n"<<endl;
                exit(0);
        }  
        default : 
        {
                cout << "Invalid input, Please try again!\n"<<endl;
                mainMenu();
                break;
        }
   }


}



int main(){
    Management Mobj;
    return 0;
}
                                                