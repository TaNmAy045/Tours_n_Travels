#include <iostream>
#include <string>
#include<conio.h>
//#include<graphics.h>
using namespace std;
    string Fname;
    string Lname;
    string edate;
    int ch;
    long long int cno,amount;
        void cardpayment(){
            cout<<"-----------------------------WELCOME TO PAYMENT PORTAL--------------------------------"<<endl;
            cout<<endl;
            cout<<endl;
            string to;
             do{
            cout<<"1.Card payment\n2.UPI(online mode)"<<endl;
            cin>>ch;
            system("cls");
            if(ch==1)
            {
            cout<<"Enter the name on card"<<endl;
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
            if(ch==2){
                cout<<"SCAN THE QR CODE"<<endl;
                //readimagefile ("qrcode.jpg",0,0,640,480);
            }
            else{
                cout<<"Select the valid payment mode"<<endl;
            }}while(ch!=1 || ch!=2);
            if(ch==1){
            cout<<"Enter the amount: ";
            cin>>amount;
            cout<<"First name\tLast name\tCard number\tAmount"<<endl;
            cout<<Fname<<"\t\t"<<Lname<<"\t\t"<<cno<<"\t"<<amount<<endl;
            }
            if(ch==2){
                if(to=="Paris"){
                    amount=475000;
                }
                if(to=="Edinburgh"){
                    amount=350000;
                }
                if(to=="Edinburgh"){
                    amount=350000;
                }
                if(to=="Athens"){
                    amount=300000;
                }
                if(to=="Zurich"){
                    amount=375000;
                }
                if(to=="Manali"){
                    amount=50000;
                }
                if(to=="Ladakh"){
                    amount=75699;
                }
                if(to=="Gulmarg"){
                    amount=55000;
                }
                if(to=="Goa"){
                    amount=30000;
                }
                if(to=="Pondicherry"){
                    amount=60000;
                }
                if(to=="Igatpuri"){
                    amount=15000;
                }
                cout<<"First name\tLast name\tCard number\tAmount"<<endl;
                cout<<Fname<<"\t\t"<<Lname<<"\t\t"<<cno<<"\t"<<amount<<endl;
                }
            }
int main(){
   /*int gd=DETECT,gm;
initgraph(&gd,&gm,(char*)"");
readimagefile ("znmd.jpg",0,0,640,480);
getch();
delay(8000);*/
    return 0;
}