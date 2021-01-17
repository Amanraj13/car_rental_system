#include<iostream>
#include<string>
using namespace std;

//global variables
  int choice;
  int selection;
  int number_of_day;
  int date;
  int time_e;

//functions used in the program
void select_car();
void selection_done();
void thankyou();
void time();
void display_time();

int main(){
    
    
    //Welcoming the user
    cout<<"\n\n\n\t\t\t\t\t\t\t\tWelcome to Aman Car Renting Service:\n";
    cout<<"\n\t\t\t------------------------------------------------------------------------------------------------------------------";
    //showing the type of car and asking fof choice
    cout<<"\n\nPlease select the type of Car:";
    select_car();
    selection_done();
    return 0;
}

//select car function
void select_car(){
//displaying the type of car
cout<<"\n1.Hatchback";
cout<<"\n2.Sedan";
cout<<"\n3.Multi Purpose Vehicle";
cout<<"\n4.SUV";
cout<<"\n\nPlease enter the number listed against the categories of car in your choice";
cout<<"\nEnter Your choice:";
cin>>choice;
}

//function to display the type of car for the selected category
void selection_done(){
    float total;
    switch(choice){



        case 1:

        
        cout<<"\n\nHatchback available:\n";
        cout<<"\n1.Maruti Suzuki\nSwift\n82bhp\n1197cc\nPetrol\nPrice:Rs 2000 per day\n";
        cout<<"\n\n2.Tata\nAltroz\n85bhp\n1199cc\nPetrol\nPrice:Rs 2500 per day\n";
        cout<<"\n\n3.Maruti Suzuki\nBaleno\n82bhp\n1197cc\nPetrol\nPrice:Rs 2000 per day\n";
        cout<<"\n\nPlease enter the number listed against the name of the car";
        cout<<"\nEnter your choice:";
        cin>>selection;

        if(selection==1){


            cout<<"\nYour Choice is: Maruti Suzuki Swift";
            cout<<"\nEnter the number of day you want to rent the car:";
            cin>>number_of_day;
            cout<<"\nThe price of renting the car for "<<number_of_day<<" day is Rs:"<<2000*number_of_day;
            cout<<"\nThe tax for renting the car is:10%";
            total=((2000*number_of_day)*10)/100+2000*number_of_day;
            cout<<"\nTotal cost for renting the car for "<<number_of_day<<" day is: Rs"<<total;
            time();
            display_time();
            thankyou();


        }else if(selection==2){


            cout<<"\nYour Choice is: Tata Altroz";
            cout<<"\nEnter the number of day you want to rent the car:";
            cin>>number_of_day;
            cout<<"\nThe price of renting the car for "<<number_of_day<<" day is Rs:"<<2500*number_of_day;
            cout<<"\nThe tax for renting the car is:10%";
            total=((2500*number_of_day)*10)/100+2500*number_of_day;
            cout<<"\nTotal cost for renting the car for "<<number_of_day<<" day is: Rs"<<total;
            time();
            display_time();
            thankyou();

            

        }else if(selection==3){


            cout<<"\nYour choice is: Maruti Suzuki Baleno";
            cout<<"\nEnter the number of day you want to rent the car:";
            cin>>number_of_day;
            cout<<"\nThe price of renting the car for "<<number_of_day<<" day is Rs:"<<2000*number_of_day;
            cout<<"\nThe tax for renting the car is:10%";
            total=((2000*number_of_day)*10)/100+2000*number_of_day;
            cout<<"\nTotal cost for renting the car for "<<number_of_day<<" day is: Rs"<<total;
            time();
            display_time();
            thankyou();


        }else{
            cout<<"\nWrong Choice";
        }

        break;

        case 2:
        cout<<"\n\nSedan available:\n";
        cout<<"\n1.Honda\nCity\n1497cc\nDisel\nPrice:Rs 3000 per day";
        cout<<"\n\n2.Hyundai\nVerna\n1493cc\nDisel\nPrice: Rs:2800 per day";
        cout<<"\n\nPlease enter the number listed against the name of the car";
        cout<<"\nEnter your choice:";
        cin>>selection;

        if(selection==1){


            cout<<"\n\nYour choice is:Honda City";
            cout<<"\nEnter the number of day you want to rent the car:";
            cin>>number_of_day;
            cout<<"\nThe price of renting the car for "<<number_of_day<<" day is Rs:"<<3000*number_of_day;
            cout<<"\nThe tax for renting the car is:10%";
            total=((3000*number_of_day)*10)/100+3000*number_of_day;
            cout<<"\nTotal cost for renting the car for "<<number_of_day<<" day is: Rs"<<total;
            time();
            display_time();
            thankyou();



        }else if(selection==2){


            cout<<"\n\nYour choice is:Hyundai Verna:";
            cout<<"\nEnter the number of day you want to rent the car:";
            cin>>number_of_day;
            cout<<"\nThe price of renting the car for "<<number_of_day<<" day is Rs:"<<2800*number_of_day;
            cout<<"\nThe tax for renting the car is:10%";
            total=((2800*number_of_day)*10)/100+2800*number_of_day;
            cout<<"\nTotal cost for renting the car for "<<number_of_day<<" day is: Rs"<<total;
            time();
            display_time();
            thankyou();



        }else{
            cout<<"\nWrong Choice\n";
        }

        case 3:
        cout<<"\n\nMulti Purpose Vehicle available:";
        cout<<"\n1.Mahindra Marazzo\n1497cc\nDisel\nPrice:Rs 4000 per day\n";
        cout<<"\n2.Kia Carnival\n2199cc\nDisel\nPrice: Rs 5000 per day\n";
        cout<<"\n\nPlease enter the number listed against the name of the car";
        cout<<"\nEnter your choice:";
        cin>>selection;


        if(selection==1){


            cout<<"\nYour choice is:Mahindra Marazzo";
            cout<<"\nEnter the number of day you want to rent the car:";
            cin>>number_of_day;
            cout<<"\nThe price of renting the car for "<<number_of_day<<" day is Rs:"<<4000*number_of_day;
            cout<<"\nThe tax for renting the car is:10%";
            total=((4000*number_of_day)*10)/100+4000*number_of_day;
            cout<<"\nTotal cost for renting the car for "<<number_of_day<<" day is: Rs"<<total;
            time();
            display_time();
            thankyou();



        }else if(selection==2){


            cout<<"\nYour choice is:Kia Carnival";
            cout<<"\nEnter the number of day you want to rent the car:";
            cin>>number_of_day;
            cout<<"\nThe price of renting the car for "<<number_of_day<<" day is Rs:"<<5000*number_of_day;
            cout<<"\nThe tax for renting the car is:10%";
            total=((5000*number_of_day)*10)/100+5000*number_of_day;
            cout<<"\nTotal cost for renting the car for "<<number_of_day<<" day is: Rs"<<total;
            time();
            display_time();
            thankyou();



        }else{
            cout<<"\nWrong Choice";
        }

        case 4:

        cout<<"\nSUV available:";
        cout<<"\n1.Toyota Fortuner\n2755cc\nDisel\nPrice:Rs 4800 per day\n";
        cout<<"\n2.Tata Harrier\n1956cc\nDisel\nPrice:Rs 4500 per day";
        cout<<"\n\nPlease enter the number listed against the name of the car";
        cout<<"\nEnter your choice:";
        cin>>selection;

        if(selection==1){


            cout<<"\n\nYour choice is:Toyota Fortuner";
            cout<<"\nEnter the number of day you want to rent the car:";
            cin>>number_of_day;
            cout<<"\nThe price of renting the car for "<<number_of_day<<" day is Rs:"<<4800*number_of_day;
            cout<<"\nThe tax for renting the car is:10%";
            total=((4800*number_of_day)*10)/100+4800*number_of_day;
            cout<<"\nTotal cost for renting the car for "<<number_of_day<<" day is: Rs"<<total;
            time();
            display_time();
            thankyou();


        }else if(selection==2){


            cout<<"\n\nYour choice is:Tata Harrier";
            cout<<"\nEnter the number of day you want to rent the car:";
            cin>>number_of_day;
            cout<<"\nThe price of renting the car for "<<number_of_day<<" day is Rs:"<<4500*number_of_day;
            cout<<"\nThe tax for renting the car is:10%";
            total=((4500*number_of_day)*10)/100+4500*number_of_day;
            cout<<"\nTotal cost for renting the car for "<<number_of_day<<" day is: Rs"<<total;
            time();
            display_time();
            thankyou();

        }else{
            cout<<"\nWrong Choice\n";

           
        }

        break;

         default:
            cout<<"\n\nInvalid Choice.Please try again";


    }
}

//functio to display the thankyou and other details to the user
void thankyou(){
    cout<<"\n\nThankyou! your car has been booked.";
    cout<<"\nYou can pick the car from your nearest Aman Car Rental Center and pay there";
    cout<<"\n\nHave a safe journey\n";
}

//function to take date and time from the user

void time(){
    cout<<"\n\nEnter the date you would like to take the car:";
    cin>>date;
    cout<<"\nEnter the time in 24 hour format:";
    cin>>time_e;
}

//function to display the data and time entered by the user

void display_time(){
    cout<<"\nThe date selected for picking up the car is:"<<date;
    cout<<"\nThe time selected is:"<<time_e;
}