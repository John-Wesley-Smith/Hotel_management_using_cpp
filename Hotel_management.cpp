#include<iostream>
using namespace std;

int main(){
    int quant;
    int choice;
    //Quantity
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;
    //Food items sold / rooms already booked
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;
    //Total price of items
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;

    cout<<"\n\t Quantity of items we have"<<endl;
    cout<<"\n Rooms Avalible :";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta : ";
    cin>>Qpasta;
    cout<<"\n Quantity of burger : ";
    cin>>Qburger;
    cout<<"\n Quantity of noodles : ";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake : ";
    cin>>Qshake;
    cout<<"\n Quantity of chicken-roll : ";
    cin>>Qchicken;

    m: // label
    cout<<"\n\n\t\t\t Please select from the menu option ";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) Shake";
    cout<<"\n6) Chicken-roll";
    cout<<"\n7) Information regarding sales and collection ";
    cout<<"\n8) Exit";

    cout<<"\n\n Please Enter your choice: ";
    cin>> choice;

    switch (choice)
    {
    case 1:
        cout<<"\n Enter the number of rooms you want: ";
        cin>>quant;
        if(Qrooms-Srooms >= quant){
            Srooms = Srooms + quant;
            Total_rooms = Total_rooms + (quant*1200);// Quantity of a single room is 1200
            cout<<"\n"<<quant<<" room/rooms have been alloted to you!";
        }
        else
            cout<<"\n Only "<<Qrooms-Srooms<<" rooms remaining in the hotel";
        break;

    case 2:
        cout<<"\n Enter Pasta Quantity: ";
        cin>>quant;
        if(Qpasta-Spasta >= quant){
            Spasta = Spasta + quant;
            Total_pasta = Total_pasta + (quant*250);
            cout<<"\n"<<quant<<" pasta is the order!";
        }
        else
            cout<<"\n Only "<<Qpasta-Spasta<<" pasta remaining in the hotel";
        break;
      
    case 3:
        cout<<"\n Enter Burger Quantity: ";
        cin>>quant;
        if(Qburger-Sburger >= quant){
            Sburger = Sburger + quant;
            Total_burger = Total_burger + (quant*120);
            cout<<"\n"<<quant<<" burger is the order!";
        }
        else
            cout<<"\n Only "<<Qburger-Sburger<<" burger remaining in the hotel";
        break;
    
    case 4:
        cout<<"\n Enter Noodles Quantity: ";
        cin>>quant;
        if(Qnoodles-Snoodles >= quant){
            Snoodles = Snoodles + quant;
            Total_noodles = Total_noodles + (quant*140);
            cout<<"\n"<<quant<<" noodles is the order!";
        }
        else
            cout<<"\n Only "<<Qnoodles-Snoodles<<" noodles remaining in the hotel";
        break; 

    case 5:
        cout<<"\n Enter Shake Quantity: ";
        cin>>quant;
        if(Qshake-Sshake >= quant){
            Sshake = Sshake + quant;
            Total_shake = Total_shake + (quant*120);
            cout<<"\n"<<quant<<" shake is the order!";
        }
        else
            cout<<"\n Only "<<Qshake-Sshake<<" shake remaining in the hotel";
        break;

    case 6:
        cout<<"\n Enter Chicken-roll Quantity: ";
        cin>>quant;
        if(Qchicken-Schicken >= quant){
            Schicken = Schicken + quant;
            Total_chicken = Total_chicken + (quant*150);
            cout<<"\n"<<quant<<" chicken-roll is the order!";
        }
        else
            cout<<"\n Only "<<Qchicken-Schicken<<" chicken-roll remaining in the hotel";
        break;    

    case 7: 
        cout<<"\n\t\t Details of sales and collection";

        cout<<"\n\n Number of rooms we had: "<<Qrooms;
        cout<<"\n Number of rooms we gave for rent: "<<Srooms;
        cout<<"\n Remaining rooms: "<<Qrooms-Srooms;
        cout<<"\n Total rooms collection for the day: "<<Total_rooms;

        cout<<"\n\n Number of Pastas we had: "<<Qpasta;
        cout<<"\n Number of Pastas we sold: "<<Spasta;
        cout<<"\n Remaining Pasta: "<<Qpasta-Spasta;
        cout<<"\n Total Pasta collection for the day: "<<Total_pasta;
        
        
        cout<<"\n\n Number of Burger we had: "<<Qburger;
        cout<<"\n Number of Burger we sold: "<<Sburger;
        cout<<"\n Remaining Burger: "<<Qburger-Sburger;
        cout<<"\n Total Burger collection for the day: "<<Total_burger;


        cout<<"\n\n Number of noodles we had: "<<Qnoodles;
        cout<<"\n Number of noodles we sold: "<<Snoodles;
        cout<<"\n Remaining noodles: "<<Qnoodles-Snoodles;
        cout<<"\n Total noodles collection for the day: "<<Total_noodles;


        cout<<"\n\n Number of shake we had: "<<Qshake;
        cout<<"\n Number of shake we sold: "<<Sshake;
        cout<<"\n Remaining shake: "<<Qshake-Sshake;
        cout<<"\n Total shake collection for the day: "<<Total_shake;

        
        cout<<"\n\n Number of chicken-roll we had: "<<Qchicken;
        cout<<"\n Number of chicken-roll we sold: "<<Schicken;
        cout<<"\n Remaining chicken-roll: "<<Qchicken-Schicken;
        cout<<"\n Total chicken-roll collection for the day: "<<Total_chicken;
        
        cout<<"\n\n Total Collection of the day: "<<Total_rooms + Total_pasta + Total_burger + Total_noodles + Total_shake + Total_chicken;
        break;

    case 8:
        exit(0);
        
    default:
        cout<<"\n Please select the numbers mentioned above! ";
        break;
    }
    goto m; // The goto jump statement transfer the control to the menu after the chioce


}