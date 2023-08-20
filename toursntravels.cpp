#include<iostream>
#include<fstream>
#include<string>
//#include<windows.h>
#include<cstdlib>
//#incude<graphics.h>

using namespace std;

class travel
{
    private:
        string name,dob,nat,dod,tod,clas,from,to,al,passpno,coach,berth,bustype,Fname,Lname,edate,upid;
        unsigned long int mobno,bri,aadharno,cno;
        char gender;
        int age,choice,ch1,ch2,ch3,ch4,ch5;
        float amount;
    public:
        void basicDetails();
        void payment();
        void trip();
        void flight_JourneyDetails();
        void flight_viewTicket();
        void train_JourneyDetails();
        void train_viewTicket();
        void bus_JourneyDetails();
        void bus_viewTicket();
        void enquiry();
};

void travel::basicDetails()
{
    system("cls");
    cout<<"Enter the full name of passenger:"<<endl;
    getline(cin>>ws,name);
    cout<<"Enter the age of passenger:"<<endl;
    cin>>age;
    cout<<"Enter the gender of passenger(M/F):"<<endl;
    cin>>gender;
    cout<<"Enter the date of birth of passenger:"<<endl;
    getline(cin>>ws,dob);
    cout<<"Enter the nationality of passenger:"<<endl;
    getline(cin>>ws,nat);
    cout<<"Enter the mobile number of passenger:"<<endl;
    cin>>mobno;
    cout<<"Enter the Aadhar number of passenger:"<<endl;
    cin>>aadharno;
    cout<<"Enter the beneficiary reference ID from the vaccination certificate of passenger:"<<endl;
    cin>>bri;
}

void travel::trip()
{
system("cls");
cout<<"\t\t\t_____________________________________________________________________________________________________________________________________________\t\t\t"<<endl;
cout<<"\t\t\t                                                         Welcome to the trip Portal                                                           \t\t\t"<<endl;

if(to=="Paris")
{
    cout<<"\t\t\t                                       In Paris your stay will be arranged at the Intercontinental Paris Le Grand Hotel                        \t\t\t"<<endl;
    cout<<"\t\t\t                                    Groups will be made on reaching the destination and each group will have a tour guide                    \t\t\t"<<endl;
    cout<<"\t\t\t                                                             Schedule for Paris trip                                                                \t\t\t"<<endl;
    cout<<"\n\n\n";
    cout<<"Day 1 : Visit to Eiffel Tower - Paris is a wondrous place , with romance in the air and the Eiffel is its crowning glory.That is just poetic...."<<endl;
    cout<<"Day 2 : Visit to Arc De Triomphe - Another well-known Paris landmark , a moving monument to many brave women and men who have died trying to visit it...."<<endl;
    cout<<"Day 3 : Visit to Le Chateau de Sonnay - A winery that's been operating as such since the mid-1800s (also filmed in famous show Emily in Paris)...."<<endl;
    cout<<"Day 4 : Visit to Saint-Tropez - Nothing says 'Holiday Escape' more than a golden Saint-Tropez tan and a vibrant LIY Pulitzer print...."<<endl;
    cout<<"Day 5 : Visit to Palace of Versaillies - tu me manques(french)...."<<endl;
    cout<<"Day 6 : Visit to Luxembourg Gardens - Though you may leave Paris , Paris naver really leaves you...."<<endl;

}
if(to=="Edinburgh")
{
    cout<<"\t\t\t                                 In Edinburgh your stay will be arranged at the Cheval Old Town Chambers Hotel                                 \t\t\t"<<endl;
    cout<<"\t\t\t                                Groups will be made on reaching the destination and each group will have a tour guide                           \t\t\t"<<endl;
    cout<<"\t\t\t                                                     Schedule for Edinburgh trip                                                             \t\t\t"<<endl;
    cout<<"\n\n\n";
    cout<<"Day 1 : Visit to Edinburgh castle - The Scots think of it as their capital ; they're too possessive , Edinburgh belongs to the world...."<<endl;
    cout<<"Day 2 : Visit to iconic Victoria street - It is quite lovely-bits of it...."<<endl;
    cout<<"Day 3 : Visit to Edinburgh vaults - You design for present with an awareness of the past for a future which is essentially unknown...."<<endl;
    cout<<"Day 4 : Visit to Le Di-Vin - Scotch winery situated in a Tudor-style building with the Georgian new town architecture around it...."<<endl;
    cout<<"Day 5 : Visit to Royal Mile - Edinburgh is alive with words and Gothic architecture...."<<endl;
    cout<<"Day 6 : Visit to Old Town - But Edinburgh is a mad god's dream...."<<endl;

}
if(to=="Athens")
{
    cout<<"\t\t\t                                     In Athens your stay will be arranged at the Aristotelian Suites Hotel                                            \t\t\t"<<endl;
    cout<<"\t\t\t                          Groups will be made on reaching the destination and each group will have a tour guide                                 \t\t\t"<<endl;
    cout<<"\t\t\t                                                     Schedule for Athens trip                                                               \t\t\t"<<endl;
    cout<<"\n\n\n";
    cout<<"Day 1 : Visit to Acropolis - An Aristotle but the rubbish of an Adam , and Athens but the rudiments of Paradise...."<<endl;
    cout<<"Day 2 : Visit to Parthenon  - I want to see the Parthenon by moonlight...."<<endl;
    cout<<"Day 3 : Visit to Plaka - Like madness is the glory of this life...."<<endl;
    cout<<"Day 4 : Visit to Panathenaic Stadium - World's first Olympic Tournament was conducted here in 566BCE...."<<endl;
    cout<<"Day 5 : Visit to Temple of Hephaestus -  Athens , the eye of Greece , mother of arts and eloquence...."<<endl;
    cout<<"Day 6 : Visit to Santorini - Not leaving anything behind in santorini but my heart...."<<endl;
}
if(to=="Zurich")
{
    cout<<"\t\t\t                           In Zurich your stay will be arranged at the Courtyard by Marriott Zurich Hotel                                      \t\t\t"<<endl;
    cout<<"\t\t\t                       Groups will be made on reaching the destination and each group will have a tour guide                                   \t\t\t"<<endl;
    cout<<"\t\t\t                                                 Schedule for Zurich trip                                                                       \t\t\t"<<endl;
    cout<<"\n\n\n";
    cout<<"Day 1 : Visit to Lindenhof - Space like Switzerland should be neutral...."<<endl;
    cout<<"Day 2 : Visit to Niederdorf  - In nature's refuge , I will fing my soul again...."<<endl;
    cout<<"Day 3 : Visit to Zurich opera house - Like madness is the glory of this life...."<<endl;
    cout<<"Day 4 : Visit to Lake Zurich - Stay close to the serenity of lake to meet your own peace of mind...."<<endl;
    cout<<"Day 5 : Visit to Bahnhofstrasse -  Heaven on Earth...."<<endl;
    cout<<"Day 6 : Visit to Swiss National Museum - I'm feeling so SO-SWISS-TICATED in Zurich...."<<endl;
}
if(to=="Manali"){
    cout<<"\t\t\t                           In Manali your stay will be arranged at the Span Resorts(where 'Yeh Jawani Hai Deevani' was shot)                                     \t\t\t"<<endl;
    cout<<"\t\t\t                       Groups will be made on reaching the destination and each group will have a tour guide                                   \t\t\t"<<endl;
    cout<<"\t\t\t                                                 Schedule for Manali trip                                                                       \t\t\t"<<endl;
    cout<<"Day 1 : Visit to Kasol - Travelling leaves you speechless and then turns you into a storyteller...."<<endl;
    cout<<"Day 2 : Visit to Solang Valley  - I don't know how long it takes , I'm going somewhere beautiful...."<<endl;
    cout<<"Day 3 : Visit to Hidimba Devi Temple - It's not the mountains we conquer but ourselves...."<<endl;
    cout<<"Day 4 : Visit to Beas river - Some conversations are like the Manali nights , cold to the body and warm to the soul...."<<endl;
    cout<<"Day 5 : Visit to Museum of Himachal culture and folk art -  Heaven on Earth...."<<endl;
    cout<<"Day 6 : Visit to Gulaba - He who climbs upon the highest mountains laughs at all the tragedies , real or imaginary...."<<endl;
}
if(to=="Ladakh")
{
    cout<<"\t\t\t                           In Ladakh your stay will be arranged at the Span Resorts                                   \t\t\t"<<endl;
    cout<<"\t\t\t                       Groups will be made on reaching the destination and each group will have a tour guide                                   \t\t\t"<<endl;
    cout<<"\t\t\t                                                 Schedule for Ladakh trip                                                                       \t\t\t"<<endl;
    cout<<"Day 1 : Visit to Druk Padma Karpo school - Visiting real life iconic school which was shown in the movie '3 idiots'...."<<endl;
    cout<<"Day 2 : Visit to Pangong Lake - Anothe 3 idiots location where actor Amir Khan was seen flying an rc airplane with his students...."<<endl;
    cout<<"Day 3 : Visit to  Magnetic Hill - When exploring Ladakh , be a traveller not tourist...."<<endl;
    cout<<"Day 4 : Visit to Leh Palace - Life is short and the world is wide...."<<endl;
    cout<<"Day 5 : Visit to Chadar Trek -  Heaven is a myth , Ladakh is real...."<<endl;
    cout<<"Day 6 : Visit to Zanskar Valley - Your heart is free , have the courage to follow it...."<<endl;
}
if(to=="Gulmarg")
{
    cout<<"\t\t\t                           In Gulmarg your stay will be arranged at the Span Resorts                                     \t\t\t"<<endl;
    cout<<"\t\t\t                       Groups will be made on reaching the destination and each group will have a tour guide                                   \t\t\t"<<endl;
    cout<<"\t\t\t                                                 Schedule for Gulmarg trip                                                                       \t\t\t"<<endl;
    cout<<"Day 1 : Visit to Gulmarg Gondola - Beauty of Kashmir can't be compared by the whole world...."<<endl;
    cout<<"Day 2 : Visit to Apharwat peak - Earth's Paradise...."<<endl;
    cout<<"Day 3 : Visit to Outer circle walk - When exploring Ladakh , be a traveller not tourist...."<<endl;
    cout<<"Day 4 : Visit to Alpather lake - On Earth there is no heaven , but there are pieces of it and Kashmir is one of them...."<<endl;
    cout<<"Day 5 : Visit to Ningle Nallah -  Heaven is a myth , Kashmir is real...."<<endl;
    cout<<"Day 6 : Visit to Gulmarg Biosphere Reserve - Your heart is free , have the courage to follow it...."<<endl;
}
if(to=="Goa")
{
    cout<<"\t\t\t                           In Goa your stay will be arranged at the Ibis Hotel                                    \t\t\t"<<endl;
    cout<<"\t\t\t                       Groups will be made on reaching the destination and each group will have a tour guide                                   \t\t\t"<<endl;
    cout<<"\t\t\t                                                 Schedule for Goa trip                                                                       \t\t\t"<<endl;
    cout<<"Day 1 : Visit to Aguada fort - Goa is the paradise of South Asia!...."<<endl;
    cout<<"Day 2 : Visit to Palolem beach - When you miss the beach, head towards Goa!...."<<endl;
    cout<<"Day 3 : Visit to Baga beach - What happens in Goa, stays in Goa!...."<<endl;
    cout<<"Day 4 : Visit to Old Goa -  When life hits you with boredom, Escape to Goa!...."<<endl;
    cout<<"Day 6 : Visit to Deltin Royale casino - It's hard to walk away from a winning streak, even harder to leave the table when you're on a losing one....."<<endl;
}
if(to=="Pondicherry")
{
    cout<<"\t\t\t                           In Pondicherry your stay will be arranged at the Ibis Hotel                                    \t\t\t"<<endl;
    cout<<"\t\t\t                       Groups will be made on reaching the destination and each group will have a tour guide                                   \t\t\t"<<endl;
    cout<<"\t\t\t                                                 Schedule for Pondicherry trip                                                                       \t\t\t"<<endl;
    cout<<"Day 1 : Visit to Paradise beach - je t'aime Pondicherry...."<<endl;
    cout<<"Day 2 : Visit to Seaside Promenade - Once-upon-dicherry day...."<<endl;
    cout<<"Day 3 : Visit to The Basilica of the sacred heart of Jesus - Bits of French colonial architechture...."<<endl;
    cout<<"Day 4 : Visit to Eglise De Notre Dame Des Anges -  Every shade of this city colours my soul...."<<endl;
    cout<<"Day 6 : Visit to Imaculate Conception Cathedral - This city has a lot to say....."<<endl;
}
if(to=="Igatpuri")
{
    cout<<"\t\t\t                           In Igatpuri your stay will be arranged at the Ibis Hotel                                    \t\t\t"<<endl;
    cout<<"\t\t\t                       Groups will be made on reaching the destination and each group will have a tour guide                                   \t\t\t"<<endl;
    cout<<"\t\t\t                                                 Schedule for Igatpuri trip                                                                       \t\t\t"<<endl;
    cout<<"Day 1 : Visit to Tringalwadi Fort - All journeys have secret destinations of which the traveller is unaware...."<<endl;
    cout<<"Day 2 : Visit to Vihigaon Waterfall - One's destination is never a place but a new perspective of seeing things...."<<endl;
    cout<<"Day 3 : Visit to The Kalsubai peak - Tourists don't know where the've been , travellers don't know where they are...."<<endl;
    cout<<"Day 4 : Visit to Ghatandevi temple - A good traveller has no fixed plans and is not intent on arriving...."<<endl;
    cout<<"Day 6 : Visit to Starbucks , Igatpuri - This Hill station has my soul....."<<endl;
}
    cout<<"\t\t\t                                  ........Thank You for using our services........                                              \t\t\t"<<endl;
}

void travel::flight_JourneyDetails()
{
    system("cls");
    cout<<"\t\t\t__________________________________________________________________________________________________________________________________________\t\t\t"<<endl;
    cout<<"\t\t\t                                                   Welcome To The Flight Reservation Section                                                \t\t\t"<<endl;
    cout<<"Enter the passport number of passenger:"<<endl;
    getline(cin>>ws,passpno);
    cout<<"Which class would you like to travel in? Enter 'Business' or 'First' or 'Economy'?"<<endl;
    getline(cin>>ws,clas);
    cout<<"\1.Domestic Flight(1)\n\2.International Flights(2)"<<endl;
    cout<<"\t\t\tEnter your choice:"<<endl;
    cin>>ch1;
    cout<<endl<<"Enter the Source:"<<endl;
    getline(cin>>ws,from);
    cout<<"Enter the Destination:"<<endl;
    getline(cin>>ws,to);
    cout<<"Enter Date Of Departure:"<<endl;
    getline(cin>>ws,dod);
    if(ch1==1)
    {
        amount=5000;
        cout << "\t\t\tFlights Found:"<< endl;
        cout << "Airline:\tDeparture:\t\tCategory:\n";
        cout << "\1.IndiGo(1)\t08:00\t\tNon-Refundable\n";
        cout << "\2.SpiceJet(2)\t11:00\t\tNon-Refundable\n";
        cout << "\3.Air India(3)\t15:00\t\tNon-Refundable\n";
        cout << "\4.Vistara(4)\t19:00\t\tNon-Refundable\n";
        cout << "\5.Go Air(5)\t21:00\t\tNon-Refundable\n";
        cout<<"Enter your choice:"<<endl;
        cin>>ch2;
        if(ch2==1)
        {
            al="IndiGo";
            tod="08:00";
        }
        else if(ch2==2)
        {
            al="SpiceJet";
            tod="11:00";
        }
        else if(ch2==3)
        {
            al="Air India";
            tod="15:00";
        }
        else if(ch2==4)
        {
            al="Vistara";
            tod="19:00";
        }
        else if(ch2==5)
        {
            al="Go Air";
            tod="21:00";
        }
        else
        {
            cout<<"Invalid Input.\nTry Again."<<endl;
            return flight_JourneyDetails();
        }
    }
    else if(ch1==2)
    {
        amount=30000;
        cout << "\t\t\tFlights Found:"<< endl;
        cout << "Airline:\tDeparture:\t\tCategory:\n";
        cout << "\1.Qantas(1)\t06:00\t\tNon-Refundable\n";
        cout << "\2.Emirates(2)\t10:00\t\tNon-Refundable\n";
        cout << "\3.JetBlue(3)\t14:00\t\tNon-Refundable\n";
        cout << "\4.Montego(4)\t20:00\t\tNon-Refundable\n";
        cout << "\5.Finnair(5)\t22:00\t\tNon-Refundable\n";
        cout<<"Enter your choice:"<<endl;
        cin>>ch2;
        if(ch2==1)
        {
            al="Qantas";
            tod="06:00";
        }
        else if(ch2==2)
        {
            al="Emirates";
            tod="10:00";
        }
        else if(ch2==3)
        {
            al="JetBlue";
            tod="14:00";
        }
        else if(ch2==4)
        {
            al="Montego";
            tod="20:00";
        }
        else if(ch2==5)
        {
            al="Finnair";
            tod="22:00";
        }
        else
        {
            cout<<"Invalid Input.\nTry Again."<<endl;
            return flight_JourneyDetails();
        }
    }
    else
    {
        cout<<"Invalid Input.\nTry Again."<<endl;
        return flight_JourneyDetails();
    }

    ofstream file("flight.txt",ios::app);
    file<<"Name: "<<name<<"\t\t"<<"Age: "<<age<<"\n"<<"Gender: "<<gender<<"\t\t"<<"Date Of Birth: "<<dob<<"\n"<<"Nationality: "<<nat<<"\t\t"
    <<"Contact Number: "<<mobno<<"\n"<<"Aadhar Card Number: "<<aadharno<<"\n"<<"Beneficiary Reference ID: "<<bri<<"\n"
    <<"Passport Number: "<<passpno<<"\n"<<"AirLine: "<<al<<"\t\t"<<"Class: "<<clas<<"\n"<<"From: "<<from<<"\t\t"<<"To: "<<to<<"\n"<<"Date Of Departure: "<<dod<<"\n\n";
    file.close();
}

void travel::flight_viewTicket()
{
    system("cls");
    cout<<"\n\n\n\n";
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"---------------------------****BOARDING PASS****------------------------------"<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"FLIGHT\t\t\t\tSEAT"<<endl;
    for(int i=0;i<1;i++)
    {
        cout<<rand()<<"\t\t\t\t";
        cout<<rand()<<endl;
    }
    cout<<"\n";
    cout<<"AIRLINE"<<endl;
    cout<<al<<endl;
    cout<<"\n";
    cout<<"PASSENGER NAME\t\t\tCLASS"<<endl;
    cout<<name<<"\t\t\t\t"<<clas<<endl;
    cout<<"\n";
    cout<<"Age\t\t\t\tGender"<<endl;
    cout<<age<<"\t\t\t\t"<<gender<<endl;
    cout<<"\n";
    cout<<"FROM\t\t\t\tTO"<<endl;
    cout<<from<<"\t\t\t\t"<<to<<endl;
    cout<<"\n";
    cout<<"Date of Departure\t\tTime Of Departure"<<endl;
    cout<<dod<<"\t\t\t\t"<<tod<<endl;
    cout<<"_______________________________________________________________________________"<<endl;
    cout<<"\n\n\n\n";
    cout<<"\t\t\tBON VOYAGE!"<<endl;
}

void travel::train_JourneyDetails()
{
    system("cls");
    cout<<"\t\t\t__________________________________________________________________________________________________________________________________________\t\t\t"<<endl;
    cout<<"\t\t\t                                                   Welcome To The Railway Reservation Section                                               \t\t\t"<<endl;
    cout<<"Which berth would you like to reserve: Upper, Lower or Middle?"<<endl;
    getline(cin>>ws,berth);
    cout<<endl<<"Enter the Source:"<<endl;
    getline(cin>>ws,from);
    cout<<"Enter the Destination:"<<endl;
    getline(cin>>ws,to);
    cout<<"Enter Date Of Departure:"<<endl;
    getline(cin>>ws,dod);
    cout<<"Which coach would you like to travel in?\n\1.General(1)\n\2.Seater(2)\n\3.Sleeper(3)\n\4.Two-Tier AC(4)\n\5.Three-tier AC(5)"<<endl;
    cout<<"\t\t\tEnter your choice:"<<endl;
    cin>>ch3;
    if(ch3==1)
    {
        coach="General";
        amount=400;
    }
    else if(ch3==2)
    {
        coach="Seater";
        amount=600;
    }
    else if(ch3==3)
    {
        coach="SL";
        amount=800;
    }
    else if(ch3==4)
    {
        coach="2A";
        amount=1500;
    }
    else if(ch3==5)
    {
        coach="3A";
        amount=2000;
    }
    else
    {
        cout<<"Invalid Input.\nTry Again."<<endl;
        return train_JourneyDetails();
    }

    ofstream file("train.txt",ios::app);
    file<<"Name: "<<name<<"\t\t"<<"Age: "<<age<<"\n"<<"Gender: "<<gender<<"\t\t"<<"Date Of Birth: "<<dob<<"\n"<<"Nationality: "<<nat<<"\t\t"
    <<"Contact Number: "<<mobno<<"\n"<<"Aadhar Card Number: "<<aadharno<<"\n"<<"Beneficiary Reference ID: "<<bri<<"\n"
    <<"Coach: "<<coach<<"\t\t"<<"Berth: "<<berth<<"\n"<<"From: "<<from<<"\t\t"<<"To: "<<to<<"\n"<<"Date Of Departure: "<<dod<<"\n\n";
    file.close();
}

void travel::train_viewTicket()
{
    system("cls");
    cout<<"\n\n\n\n";
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"---------------------------****RAILWAY TICKET****-----------------------------"<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"TRAIN\t\t\t\tSEAT"<<endl;
    for(int i=0;i<1;i++)
    {
        cout<<rand()<<"\t\t\t\t";
        cout<<rand()<<endl;
    }
    cout<<"\n";
    cout<<"PASSENGER NAME\t\t\tCOACH"<<endl;
    cout<<name<<"\t\t\t\t"<<coach<<endl;
    cout<<"\n";
    cout<<"Age\t\t\t\tGender"<<endl;
    cout<<age<<"\t\t\t\t"<<gender<<endl;
    cout<<"\n";
    cout<<"FROM\t\t\t\tTO"<<endl;
    cout<<from<<"\t\t\t"<<to<<endl;
    cout<<"\n";
    cout<<"Date of Departure\t\t\tBerth"<<endl;
    cout<<dod<<"\t\t\t\t"<<berth<<endl;
    cout<<"_______________________________________________________________________________"<<endl;
    cout<<"\t\t\tBest Journey!"<<endl;
}

void travel::bus_JourneyDetails()
{
    system("cls");
    cout<<"\t\t\t__________________________________________________________________________________________________________________________________________\t\t\t"<<endl;
    cout<<"\t\t\t                                                   Welcome To The Travel Bus Reservation Section                                            \t\t\t"<<endl;
    cout<<endl<<"Enter the Source:"<<endl;
    getline(cin>>ws,from);
    cout<<"Enter the Destination:"<<endl;
    getline(cin>>ws,to);
    cout<<"Enter Date Of Departure:"<<endl;
    getline(cin>>ws,dod);
    cout<<"Which type of bus would you like to travel in?\n\1.Seater(1)\n\2.AC Sleeper(2)"<<endl;
    cout<<"\t\t\tEnter your choice:"<<endl;
    cin>>ch4;
    if(ch4==1)
    {
        bustype="Seater";
        amount=600;
    }
    else if(ch4==2)
    {
        bustype="AC Sleeper";
        amount=1200;
    }
    else
    {
        cout<<"Invalid Input.\nTry Again."<<endl;
        return bus_JourneyDetails();
    }

    ofstream file("bus.txt",ios::app);
    file<<"Name: "<<name<<"\t\t"<<"Age: "<<age<<"\n"<<"Gender: "<<gender<<"\t\t"<<"Date Of Birth: "<<dob<<"\n"<<"Nationality: "<<nat<<"\t\t"
    <<"Contact Number: "<<mobno<<"\n"<<"Aadhar Card Number: "<<aadharno<<"\n"<<"Beneficiary Reference ID: "<<bri<<"\n"
    <<"Bus: "<<bustype<<"\n"<<"From: "<<from<<"\t\t"<<"To: "<<to<<"\n"<<"Date Of Departure: "<<dod<<"\n\n";
    file.close();
}

void travel::bus_viewTicket()
{
    system("cls");
    cout<<"\n\n\n\n";
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"---------------------------****BUS TICKET****---------------------------------"<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"BUS\t\t\t\tSEAT"<<endl;
    for(int i=0;i<1;i++)
    {
        cout<<rand()<<"\t\t\t\t";
        cout<<rand()<<endl;
    }
    cout<<"\n";
    cout<<"PASSENGER NAME\t\t\t\tTYPE"<<endl;
    cout<<name<<"\t\t\t\t"<<bustype<<endl;
    cout<<"\n";
    cout<<"Age\t\t\t\tGender"<<endl;
    cout<<age<<"\t\t\t\t"<<gender<<endl;
    cout<<"\n";
    cout<<"FROM\t\t\t\tTO"<<endl;
    cout<<from<<"\t\t\t"<<to<<endl;
    cout<<"\n";
    cout<<"Date of Departure"<<endl;
    cout<<dod<<"\t\t\t\t"<<endl;
    cout<<"_______________________________________________________________________________"<<endl;
    cout<<"\t\t\tBest Journey!"<<endl;
}

void travel::payment()
{
    system("cls");
    cout<<"-----------------------------WELCOME TO PAYMENT PORTAL--------------------------------"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"1.Card payment\n2.UPI(online mode)"<<endl;
    cout<<"Enter your choice: "<<endl;
    cin>>ch5;
    system("cls");
    if(to=="Paris")
    {
        amount=475000;
        cout<<"Amout to be paid is Rs. "<<amount<<endl;
    }
    if(to=="Edinburgh")
    {
        amount=350000;
        cout<<"Amout to be paid is Rs. "<<amount<<endl;
    }
    if(to=="Athens")
    {
        amount=300000;
        cout<<"Amout to be paid is Rs. "<<amount<<endl;
    }
    if(to=="Zurich")
    {
        amount=375000;
        cout<<"Amout to be paid is Rs. "<<amount<<endl;
    }
    if(to=="Manali")
    {
        amount=50000;
        cout<<"Amout to be paid is Rs. "<<amount<<endl;
    }
    if(to=="Ladakh")
    {
        amount=75699;
        cout<<"Amout to be paid is Rs. "<<amount<<endl;
    }
    if(to=="Gulmarg")
    {
        amount=55000;
        cout<<"Amout to be paid is Rs. "<<amount<<endl;
    }
    if(to=="Goa")
    {
        amount=30000;
        cout<<"Amout to be paid is Rs. "<<amount<<endl;
    }
    if(to=="Pondicherry")
    {
        amount=60000;
        cout<<"Amout to be paid is Rs. "<<amount<<endl;
    }
    else if(to=="Igatpuri")
    {
        amount=15000;
        cout<<"Amout to be paid is Rs. "<<amount<<endl;
    }
    if(ch5==1)
    {
        cout<<"Enter the name on card:"<<endl;
        cout<<"First name: ";
        cin>>Fname;
        cout<<endl;
        cout<<"Last name: ";
        cin>>Lname;
        cout<<endl;
        cout<<"Enter the card number: ";
        cin>>cno;
        cout<<endl;
        cout<<"Card expiry date: ";
        cin>>edate;
        cout<<endl;
    }
    if(ch5==2)
    {
        cout<<"SCAN THE QR CODE"<<endl;
        cout<<"OR\nEnter the UPI id: "<<endl;
        getline(cin>>ws,upid);
        cout<<"Transaction successful!"<<endl;
        //readimagefile ("qrcode.jpg",0,0,640,480);
    }

    /*cout<<"First name\tLast name\tCard number\tAmount"<<endl;
    cout<<Fname<<"\t\t"<<Lname<<"\t\t"<<cno<<"\t"<<amount<<endl;*/

    ofstream file3("payment.txt",ios::app);
    file3<<"\n\n"<<"Name : "<<Fname<<" "<<Lname<<"\n"<<"Card no. : "<<cno<<"\n"<<"Amount : "<<amount<<endl;
    cout<<"Your registration was successful and we will reach out to you via your contact no."<<endl;

    ofstream file4("pay.txt",ios::out);
    file4<<"\n\n"<<"Name : "<<Fname<<" "<<Lname<<"\t"<<"Card no. : "<<cno<<"\t"<<"Amount : "<<amount<<endl;
    //cout<<"Your registration was successful and we will reach out to you via your contact no."<<endl;

    cout<<"Payment Confirmation Receipt : "<<endl;
    ifstream file("pay.txt",ios::in);
    string s5;
    while(getline(file,s5))
    {
    cout<<s5<<endl;
    }
    file.close();

}

void travel::enquiry()
{
    system("cls");
    cout<<"\t\t\t__________________________________________________________________________________________________________________________________________\t\t\t"<<endl;
    cout<<"\t\t\t                                         ENQUIRY PORTAL                                                                  \t\t\t"<<endl;
    int choice;
    cout<<"\tCheck the list of Confirmed Passengers travelling via:\n\t\1.Flight(1)\n\t\2.Train(2)\n\t\3.Bus(3)"<<endl;
    cout<<"\tEnter your choice:"<<endl;
    cin>>choice;

    if(choice==1)
    {
    cout<<"List of Confirmed Passengers travelling via Flights: "<<endl;
    ifstream file("flight.txt",ios::in);
    string s;
    while(getline(file,s))
    {
    cout<<s<<endl;
    }
    file.close();
    }

    if(choice==2)
    {
    cout<<"List of Confirmed Passengers travelling via Trains: "<<endl;
    ifstream file1("train.txt",ios::in);
    string s1;
    while(getline(file1,s1))
    {
    cout<<s1<<endl;
    }
    file1.close();
    }

    if(choice==3)
    {
    cout<<"List of Confirmed Passengers travelling via Bus:"<<endl;
    ifstream file2("bus.txt",ios::in);
    string s2;
    while(getline(file2,s2))
    {
    cout<<s2<<endl;
    }
    file2.close();
    }
}


int main()
{
    travel t;

    /*int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");
    readimagefile ("znmd.jpg",0,0,640,480);
    getch();
    delay(8000);*/

    cout<<"\t\t\t_________________________________________________________________________________________________________________________________\t\t\t"<<endl;
    cout<<"\t\t\t                                        Welcome To Tours And Travels Portal                                                \t\t\t"<<endl;
    int ch;
    char c;
    cout<<"How would you like to use our services?"<<endl;
    cout<<"\1.Ticket Booking Portal (1)\n\2.Planned Travel Packages(6-7 days) (2)\n\3.Enquiry Portal (3)\n\4.Exit Portal (4)"<<endl;
    cout<<"\n\t\t\tEnter your choice:"<<endl; cin>>ch; cout<<endl;
    switch(ch)
    {
        case 1:
        cout<<"Which mode of transport would you like to choose for your trip?\nEnter 'F' for flight, 'T' for train,'B' for bus : "<<endl;
        cin>>c;
        system("cls");
        if(c=='F')
        {
            t.basicDetails();
            t.flight_JourneyDetails();
            t.payment();
            t.flight_viewTicket();
            main();
        }
        else if(c=='T')
        {
            t.basicDetails();
            t.train_JourneyDetails();
            t.payment();
            t.train_viewTicket();
            main();
        }
        else if(c=='B')
        {
            t.basicDetails();
            t.bus_JourneyDetails();
            t.payment();
            t.bus_viewTicket();
            main();
        }
        else
        {
            cout<<"Invalid Input.\nTry Again."<<endl;
            main();
        }
        break;
        case 2:
        system("cls");
        cout<<"\n\n\n";
        cout<<"In this section,we will display 6-7 day trips on select destinations"<<endl;
        cout<<"The list of Indian destinations is as follows : "<<endl;
        cout<<"\t\1.Manali (1)\n\t\2.Ladakh (2)\n\t\3.Gulmarg(Kashmir) (3)\n\t\4.Goa (4)\n\t\5.Pondicherry (5)\n\t\6.Igatpuri (6)"<<endl;
        cout<<"\n\n\n";
        cout<<"The list of international destinations is as follows : "<<endl;
        cout<<"\t\1.Paris(France) (1)\n\t\2.Edinburgh(Scotland) (2)\n\t\3.Athens(Greece) (3)\n\t\4.Zurich(Swiss) (4)"<<endl;
        cout<<"\n\n\n";
        cout<<"Which mode of transport would you like to choose for your trip?\n(Enter 'F' for flight, 'T' for train, 'B' for bus : "<<endl;
        cin>>c;
        if(c=='F')
        {
            t.basicDetails();
            t.flight_JourneyDetails();
            t.payment();
            t.flight_viewTicket();
            t.trip();
            main();
        }
        else if(c=='T')
        {
            t.basicDetails();
            t.train_JourneyDetails();
            t.payment();
            t.train_viewTicket();
            t.trip();
            main();
        }
        else if(c=='B')
        {
            t.basicDetails();
            t.bus_JourneyDetails();
            t.payment();
            t.bus_viewTicket();
            t.trip();
            main();
        }
        else
        {
            cout<<"Invalid Input.\nTry Again."<<endl;
            main();
        }
        break;
        case 3:
            t.enquiry();
            main();
            break;
        case 4:
        cout<<"You have chosen to Exit the Portal."<<endl;
        cout<<"We hope to see you soon.\nHave a nice day!"<<endl;
        break;
        default:
        system("cls");
        cout<<"Please enter a valid choice."<<endl;
        main();
    }
    return 0;
}

