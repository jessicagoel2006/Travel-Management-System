#include<iostream>
#include<string>
using namespace std;
class Trip{
private:

    string person_of_contact;
    long long Phone_number;

    string meeting_place;
    string Mode_of_transport;
public:
    int number_of_guests;
    Trip(){
    number_of_guests=0;
    person_of_contact="";
    Phone_number=0;
    meeting_place="";
    Mode_of_transport="";
    }
    Trip(int guests,string poc,int mobile_number,string meetingplace,string Transport ){
    number_of_guests=guests;
    person_of_contact=poc;
    Phone_number=mobile_number;
    meeting_place=meetingplace;
    Mode_of_transport=Transport;
    }
void getdetails(){
cout << "\n-----Trip Details-----\n";
cout<<"Enter number of guests: ";
cin>>number_of_guests;
cout<<"Enter name of person of contact: ";
getline(cin >> ws, person_of_contact);
cout<<"Enter phone number of the person of contact: ";
cin>>Phone_number;
cout<<"Enter place of meeting point: ";
getline(cin >> ws, meeting_place);
cout<<"Enter mode of transport: ";
getline(cin >> ws, Mode_of_transport);
}
void read_details(){
    cout<<endl;
    cout<<"Details:"<<endl;
cout<<"Number of guests:  "<<number_of_guests<<endl;
cout<<"Name of person of contact:  "<<person_of_contact<<endl;
cout<<"Phone number of the person to be contacted:  "<<Phone_number<<endl;
cout<<"The place where everyone will meet: "<<meeting_place<<endl;
cout<<"The mode of transport: "<<Mode_of_transport<<endl<<endl;
}
};

class destination: public Trip{
    private:
    string destination_name;
int days;
int price;
string itinerary;
int guide_price;
public:
destination(){
    destination_name = "";
    days = 0;
    price = 0;
    itinerary = "";
    guide_price = 0;
}

    void getdestination(){
    cout << "\n-----JAK Destination App-----\n"<<endl<<endl;
    cout << "Enter destination:\n"
    <<"1. Shimla\n"
    <<"2. Goa\n"
    <<"3. Jaipur\n"
    <<"4. Agra\n"
    <<"5. Mathura\n"
    <<"6. Amritsar\n"
    <<"7. Sikkim\n"
    <<"8. Ayodhya\n"
    <<"9. Udaipur\n"
    <<"10. Nainital\n";
    int choice;
    cin >> choice;
    cout << "Enter number of days (1-5) "<<endl;
    cin >> days;

    switch(choice) {
        case 1:
        destination_name = "Shimla";
        if (days == 2) {
            price = 8000;
            itinerary = "Day 1: Mall Road, Day 2: Kufri";

        } else if (days == 3) {
            price = 12000;
            itinerary = "Day 1: Mall Road, Day 2: Kufri, Day 3: Jakhoo Temple";
        } else if (days == 4) {
            price = 15000;
            itinerary = "Day 1: Mall Road, Day 2: Kufri, Day 3: Jakhoo Temple, Day 4: Chail";
        } else if (days==5) {
            price = 18000;
            itinerary = "Day 1: Mall Road, Day 2: Kufri, Day 3: Jakhoo Temple, Day 4: Chail, Day 5: Mashobra";
        }
        else {
                cout << "Invalid\n";
                return;
    }
    break;
    case 2:
    destination_name = "Goa";
        if (days == 2) {

            price = 9000;

            itinerary = "Day 1: Baga Beach, Day 2: Fort Aguada";
        } else if (days == 3) {

            price = 13000;

            itinerary = "Day 1: Baga Beach, Day 2: Fort Aguada, Day 3: Dudhsagar Waterfalls";
        } else if (days == 4) {

            price = 17000;
            itinerary = "Day 1: Baga Beach, Day 2: Fort Aguada, Day 3: Dudhsagar Waterfalls, Day 4: Basilica of Bom Jesus";
        } else if (days==5) {
            price = 20000;
            itinerary = "Day 1: Baga Beach, Day 2: Fort Aguada, Day 3: Dudhsagar Waterfalls, Day 4: Basilica of Bom Jesus, Day 5: Palolem Beach";
        }
        else {
                cout << "Invalid number of days\n";
                return;
    }
    break;
    case 3:
    destination_name = "Jaipur";
        if (days == 2) {
            price = 7000;
            itinerary = "Day 1: Amer Fort, Day 2: Hawa Mahal";
        } else if (days == 3) {
            price = 10000;
            itinerary = "Day 1: Amer Fort, Day 2: Hawa Mahal, Day 3: City Palace";
        } else if (days == 4) {

            price = 13000;

            itinerary = "Day 1: Amer Fort, Day 2: Hawa Mahal, Day 3: City Palace, Day 4: Nahargarh Fort";
        } else if (days == 5) {
            price = 16000;
            itinerary = "Day 1: Amer Fort, Day 2: Hawa Mahal, Day 3: City Palace, Day 4: Nahargarh Fort, Day 5: Jantar Mantar";
        }
        else {
                cout << "Invalid number of days\n";
                return;
    }
    break;
    case 4:
    destination_name = "Agra";
        if (days == 2) {
            price = 6000;
            itinerary = "Day 1: Taj Mahal, Day 2: Agra Fort";
        } else if (days == 3) {

            price = 9000;

            itinerary = "Day 1: Taj Mahal, Day 2: Agra Fort, Day 3: Fatehpur Sikri";
        } else if (days == 4) {

            price = 12000;

            itinerary = "Day 1: Taj Mahal, Day 2: Agra Fort, Day 3: Fatehpur Sikri, Day 4: Mehtab Bagh";
        } else if (days == 5) {
            price = 15000;
            itinerary = "Day 1: Taj Mahal, Day 2: Agra Fort, Day 3: Fatehpur Sikri, Day 4: Mehtab Bagh, Day 5: Tomb of Itimad-ud-Daulah";
        }
        else {
                cout << "Invalid number of days\n";
                return;
    }
    break;
    case 5:
    destination_name = "Mathura";
        if (days == 2) {
            price = 5000;
            itinerary = "Day 1: Krishna Janmabhoomi, Day 2: Dwarkadhish Temple";
        } else if (days == 3) {
            price = 8000;
            itinerary = "Day 1: Krishna Janmabhoomi, Day 2: Dwarkadhish Temple, Day 3: Vishram Ghat";
        } else if (days == 4) {
            price = 10000;
            itinerary = "Day 1: Krishna Janmabhoomi, Day 2: Dwarkadhish Temple, Day 3: Vishram Ghat, Day 4: Govardhan Hill";
        } else if( days == 5) {
            price = 13000;
            itinerary = "Day 1: Krishna Janmabhoomi, Day 2: Dwarkadhish Temple, Day 3: Vishram Ghat, Day 4: Govardhan Hill, Day 5: Radha Kund";
        }else {
                cout << "Invalid number of days\n";
                return;
    }
    break;
    case 6:
    destination_name = "Amritsar";
        if (days == 2) {
            price = 7000;
            itinerary = "Day 1: Golden Temple, Day 2: Jallianwala Bagh";
        } else if (days == 3) {
            price = 10000;
            itinerary = "Day 1: Golden Temple, Day 2: Jallianwala Bagh, Day 3: Wagah Border";
        } else if (days == 4) {
            price = 13000;
            itinerary = "Day 1: Golden Temple, Day 2: Jallianwala Bagh, Day 3: Wagah Border, Day 4: Partition Museum";
        } else if (days == 5){
            price = 16000;
            itinerary = "Day 1: Golden Temple, Day 2: Jallianwala Bagh, Day 3: Wagah Border, Day 4: Partition Museum, Day 5: Gobindgarh Fort";
        }
        else {
                cout << "Invalid number of days\n";
                return;
    }
    break;
    case 7:
    destination_name = "Sikkim";
        if (days == 2) {
            price = 10000;
            itinerary = "Day 1: MG Marg, Day 2: Tsomgo Lake";
        } else if (days == 3) {
            price = 15000;
            itinerary = "Day 1: MG Marg, Day 2: Tsomgo Lake, Day 3: Nathula Pass";
        } else if (days == 4) {

            price = 20000;
            itinerary = "Day 1: MG Marg, Day 2: Tsomgo Lake, Day 3: Nathula Pass, Day 4: Yumthang Valley";
        } else if(days==5) {
            price = 25000;

            itinerary = "Day 1: MG Marg, Day 2: Tsomgo Lake, Day 3: Nathula Pass, Day 4: Yumthang Valley, Day 5: Gurudongmar Lake";
        }
        else {
                cout << "Invalid number of days\n";
                return;
    }
    break;
    case 8:
    destination_name = "Ayodhya";
        if (days == 2) {
            price = 5000;
            itinerary = "Day 1: Ram Janmabhoomi, Day 2: Hanuman Garhi";
        } else if (days == 3) {

            price = 8000;
            itinerary = "Day 1: Ram Janmabhoomi, Day 2: Hanuman Garhi, Day 3: Kanak Bhawan";
        } else if (days == 4) {

            price = 11000;
            itinerary = "Day 1: Ram Janmabhoomi, Day 2: Hanuman Garhi, Day 3: Kanak Bhawan, Day 4: Saryu River Ghat";
        } else if(days==5) {

            price = 14000;
            itinerary = "Day 1: Ram Janmabhoomi, Day 2: Hanuman Garhi, Day 3: Kanak Bhawan, Day 4: Saryu River Ghat, Day 5: Nageshwarnath Temple";
        }
        else {
                cout << "Invalid\n";
                return;
    }
    break;
    case 9:
    destination_name = "Udaipur";
        if (days == 2) {
            price = 8500;
          itinerary = "Day 1: City Palace, Day 2: Lake Pichola";
        } else if (days == 3) {
            price = 12000;
            itinerary = "Day 1: City Palace, Day 2: Lake Pichola, Day 3: Sajjangarh (Monsoon Palace)";
        } else if (days == 4) {
            price = 16000;
            itinerary = "Day 1: City Palace, Day 2: Lake Pichola, Day 3: Sajjangarh (Monsoon Palace), Day 4: Jag Mandir";
        } else if(days==5){
            price = 19000;
            itinerary = "Day 1: City Palace, Day 2: Lake Pichola, Day 3: Sajjangarh (Monsoon Palace), Day 4: Jag Mandir, Day 5: Fateh Sagar Lake";
        }
        else {
                cout << "Invalid number of days\n";
                return;
    }
    break;
    case 10:
    destination_name = "Nainital";
        if (days == 2) {
            price = 6000;
            itinerary = "Day 1: Naini Lake, Day 2: Naina Devi Temple";
        } else if (days == 3) {
            price = 9000;
            itinerary = "Day 1: Naini Lake, Day 2: Naina Devi Temple, Day 3: Snow View Point";
        } else if (days == 4) {
            price = 12000;
            itinerary = "Day 1: Naini Lake, Day 2: Naina Devi Temple, Day 3: Snow View Point, Day 4: Bhimtal Lake";
        } else if(days==5) {
            price = 15000;
            itinerary = "Day 1: Naini Lake, Day 2: Naina Devi Temple, Day 3: Snow View Point, Day 4: Bhimtal Lake, Day 5: Tiffin Top";
        }
        else {
                cout << "Invalid\n";
                return;
            }
            break;

 default:
            cout << "Invalid destination.\n";
            return;

    }

    int guide_choice;
    cout<<"Do you need a Tourist Guide ? (1: Yes | 2: No)"<<endl;
    cin>> guide_choice;
    if (guide_choice == 1)
    {
        cout<<"You will be charged 1000 more."<<endl<<endl;
        guide_price = 1000;
        price += guide_price;
        }
        else {
        guide_price = 0;
    }
}

    void puts(){
    cout<< "Destination: " << destination_name << endl;
        cout << "Itinerary: " << itinerary << endl;
        if (guide_price > 0) {
            cout << "Guide fee: " << guide_price << endl;
        }
        cout << "Total Price: " << price << endl;
    }
};
class Hotels:public Trip{
private:
string hotel_name;
double hotel_price;
double base_price;
double meal_price;
double price ;
public:
Hotels(){
hotel_name="";
hotel_price=0;
base_price=0;
meal_price=0;
price=0;
}
void HotelName(){
cout << "\n-----JAK Hotel System-----\n"<<endl<<endl;
cout<<"Choose a hotel according to your budget:\n "
<<"    1. 3 star hotel\n"
<<"    2. 4 star hotel\n"
<<"    3. 5 star hotel\n"<<endl;

int hotel_choice;
cin>>hotel_choice;
if (hotel_choice == 1){
    hotel_name = "3 Star Hotel";
    hotel_price=10000;
}
    else if (hotel_choice == 2){
     hotel_name = "4 Star Hotel";
    hotel_price=6000;
}
   else  if (hotel_choice == 3){
    hotel_name = "5 Star Hotel";
    hotel_price=10000;
}
    else{
        cout<<"Invalid";
 }
}
void booking(){
int room_choice;
int service_choice;
cout<<  " Choose the type of room :\n"
         << "    1. Normal\n"
         << "    2. Deluxe\n"
         << "    3. Double deluxe\n"
         << "    4. Luxury suite\n" <<endl;
      cin>>room_choice;
if (hotel_price == 1000){
      if (room_choice==1)
     base_price = hotel_price + 500;
     else if (room_choice==2)

     base_price= hotel_price + 750;
     else if (room_choice==3)

     base_price= hotel_price + 1100;
     else if (room_choice==4)

     base_price= hotel_price + 1300;
     else
     {
      cout<<"invalid"<<room_choice<<endl;
     return;
     }
}
     else if (hotel_price == 2000){
      if (room_choice==1)

     base_price = hotel_price + 750;
     else if (room_choice==2)

     base_price= hotel_price + 1100;
     else if (room_choice==3)

     base_price= hotel_price + 1300;
     else if (room_choice==4)

     base_price= hotel_price + 1500;
     else
     {
      cout<<"invalid"<<room_choice<<endl;
      return;
     }
     }
     else if (hotel_price == 3000){
      if (room_choice==1)

     base_price = hotel_price + 1100;
     else if (room_choice==2)

     base_price= hotel_price + 1300;
     else if (room_choice==3)

     base_price= hotel_price + 1500;
     else if (room_choice==4)

     base_price= hotel_price + 1800;
     else
     {
      cout<<"invalid"<<room_choice<<endl;
      return;
     }
     }
     cout << "Choose the type of service:\n"
             << "1. Normal\n"
             << "2. Butler\n"
             << "3. Personal Attendant\n";
        cin >> service_choice;

   double service_price = 0;
   if (hotel_price == 1000){
        if (service_choice == 1)

            service_price = number_of_guests * 0.1;
         else if (service_choice == 2)

            service_price = number_of_guests * 0.15 + 500;
         else if (service_choice == 3)

            service_price = number_of_guests * 0.2 + 1000;
        else
        {
            cout<<"Invalid";
            return;
        }
   }
        else if(hotel_price == 2000){
        if (service_choice == 1)

            service_price = number_of_guests * 0.15;
         else if (service_choice == 2)

            service_price = number_of_guests * 0.2 + 800;
         else if (service_choice == 3)

            service_price = number_of_guests * 0.25 + 1200;
        else
        {
            cout<<"Invalid";
            return;
        }
        }
        else if (hotel_price == 3000){
        if (service_choice == 1)

            service_price = number_of_guests * 0.2;
         else if (service_choice == 2)

            service_price = number_of_guests * 0.25 + 1000;
         else if (service_choice == 3)

            service_price = number_of_guests * 0.3 + 2000;
        else
        {
            cout<<"Invalid";
            return;
        }
        }
         price = base_price + service_price;

        int meal;
        cout<<"Would you like to include meal (1: Yes | 2: No): "<<endl;
        cin>>meal;

        if (meal == 1){
            meal_price = 1000 * number_of_guests;
            price += meal_price;
            }  else {
                meal_price = 0;
                }

   }
        void getdetails(){
        cout << "\n--- Booking Details ---\n";
        cout << "Hotel: " << hotel_name << endl;
        cout << "Room price: " << base_price - hotel_price << endl;  // Only showing the room price increment
        cout << "Service price: " << price - base_price - meal_price << endl;
        if (meal_price > 0) {
            cout << "Meal price: " << meal_price << endl;
        }
        cout << "Total price: " << price << endl;
    }
};

class CarRental: public Trip {
protected:
    int seatCount;
    double baseRate;
    int rentalDuration;

public:
    CarRental(int seatCount, int rentalDuration, double baseRate)
        : seatCount(seatCount), rentalDuration(rentalDuration),baseRate(baseRate) {}

    virtual void displayDetails() = 0;
    virtual double calculateFinalCost() = 0;
};

class EconomyCar : public CarRental {
private:
    string fuelType;
    double discount;

public:
    EconomyCar(int seatCount,int rentalDuration ,double baseRate, string fuelType)
        : CarRental(seatCount,rentalDuration, baseRate), fuelType(fuelType) {
        if (fuelType == "Electric") {
            discount = 0.10;
        } else if (fuelType == "CNG") {
            discount = 0.07;
        } else  if (fuelType == "Petrol" || fuelType == "Diesel" ){
            discount = 0.0;

        }
    }

    void displayDetails()  {

        cout<<"--------------------------------"<<endl;
        cout << "Economy Car - HURR Rentals\n";
        cout<<"--------------------------------"<<endl<<endl;
        cout << "Seats: " << seatCount<<endl;
        cout<<"Fuel Type: " << fuelType <<endl;
        cout << "Rental Duration: " << rentalDuration << " days"<<endl;
        cout << "Discount: " << discount * 100.0<< "%\n"<<endl;
    }

    double calculateFinalCost()  {

        double finalCost = baseRate * rentalDuration;
       finalCost = finalCost - (finalCost * discount);
        return finalCost;

    }
};

class LuxuryCar : public CarRental {
private:
    int chauffeurRequired;
    int insuranceRequired;

public:
    LuxuryCar(int seatCount, int rentalDuration,double baseRate, bool chauffeurRequired, bool insuranceRequired)
        : CarRental(seatCount, rentalDuration, baseRate), chauffeurRequired(chauffeurRequired), insuranceRequired(insuranceRequired) {}

    void displayDetails()  {

        cout<<"--------------------------------"<<endl;
        cout << "Luxury Car - HURR Rentals\n";
        cout<<"--------------------------------"<<endl<<endl;
        cout << "Seats: " << seatCount << " | Chauffeur Required: " << (chauffeurRequired ? "Yes" : "No")
          << " | Insurance Required: " << (insuranceRequired ? "Yes" : "No") << "\n";
         cout << "Rental Duration: " << rentalDuration << " days\n";
    }


    double calculateFinalCost()  {
        double finalCost = baseRate * rentalDuration;
        if (chauffeurRequired) {
            finalCost = finalCost + (1500 * rentalDuration);
        }
        if (insuranceRequired) {
            finalCost = finalCost + (500 * rentalDuration);
        }
        return finalCost;
    }
};
int main() {
    Trip Trip;
    Trip.getdetails();
    Trip.read_details();
    destination destination;
    destination.getdestination();
    destination.puts();
    Hotels hotel;
    hotel.HotelName();
    hotel.booking();
    hotel.getdetails();
    int seatCount;
    int rentalDuration;
    double baseRate;
    string fuelType;
    int chauffeurRequired, insuranceRequired;
    int carTypeChoice;
    cout << "\n-------JAK Car Rental System\n--------"<<endl<<endl;
    cout << "Enter the rental duration (in days): ";
    cin>>rentalDuration;
    cout << "Please choose a seat count (2, 4, 5, or 7): ";
    cin >> seatCount;

    if (seatCount == 2) {
        baseRate = 2500;
    } else if (seatCount == 4)
     {
        baseRate = 3500;
    } else if (seatCount == 5)
     {
        baseRate = 4500;
    } else if (seatCount == 7)
    {
        baseRate = 6000;

    } else {
        cout << "Invalid";
        return 0;
    }

    cout << "\nSelect Car Type: \n";
    cout << "1. Economy Car\n";
    cout << "2. Luxury Car\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> carTypeChoice;

    CarRental* car = nullptr;

    if (carTypeChoice == 1)
     {
        cout << "\nSelect Fuel Type : \n";
        cout << "1. Electric\n";
        cout << "2. CNG\n";
        cout << "3. Petrol\n";
        cout << "4. Diesel\n";
        cout << "Enter your choice (1,2,3,4): ";
         int fuelChoice;
        cin >> fuelChoice;

        if (fuelChoice == 1) {
            fuelType = "Electric";
        }
         else if (fuelChoice == 2) {
            fuelType = "CNG";
        }
         else if (fuelChoice == 3) {
            fuelType = "Petrol";
        }
        else if (fuelChoice == 4) {
            fuelType = "Diesel";
        }
        else {
            cout << "Invalid fuel type\n";
            return 0;
        }

        car = new EconomyCar(seatCount,rentalDuration, baseRate, fuelType);
    } else if (carTypeChoice == 2)
     {
        cout << "Do you need a Chauffeur? (1 for Yes, 2 for No): ";
        cin >> chauffeurRequired;
        cout << "You will be charged ₹5000 more."<< endl<<endl;
        cout << "Do you need Insurance? (1 for Yes, 2 for No): ";
        cin >> insuranceRequired;
         cout << "You will be charged ₹7000 more."<<endl<<endl;

        car = new LuxuryCar(seatCount, rentalDuration, baseRate, chauffeurRequired == 1, insuranceRequired == 1);
    } else {
        cout << "Invalid\n";

        return 0;
    }
    car->displayDetails();

    double finalCost = car->calculateFinalCost();
    cout << "Final Cost: ₹" << finalCost << endl;

    delete car;
    return 0;
}
