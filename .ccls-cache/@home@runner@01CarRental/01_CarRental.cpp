#include <cmath>
#include <iostream>
#include <string>
using namespace std;

// Take personal details - ask rent bike or car
// select Vechile model - how many of hours rental done - get bill according to
// hours

void rentedbill(string userchoice) {
  int tesla = 200, honda = 140, tata = 190, toyota = 199;
  int userRentedhrs;

  // tesla bill

  if (userchoice == "tes") {
    cout << "Great! We think you've enjoyed your ride!\n\nNow please enter the "
            "hours you've rented\n\n: ";
    cin >> userRentedhrs;
    cout << "Your bill: " << tesla * userRentedhrs << "/-" << endl;
  } else if (userchoice == "n") {
    cout << "Thank you for your patiance\nVist Again";
  }

  // honda bill

  if (userchoice == "hon") {
    cout << "Great! We think you've enjoyed your ride!\n\nNow please enter the "
            "hours you've rented\n\n: ";
    cin >> userRentedhrs;
    cout << "Your bill: " << honda * userRentedhrs << "/-" << endl;
  } else if (userchoice == "n") {
    cout << "Thank you for your patiance\nVist Again";
  }

  // tata bill

  if (userchoice == "tat") {
    cout << "Great! We think you've enjoyed your ride!\n\nNow please enter the "
            "hours you've rented\n\n: ";
    cin >> userRentedhrs;
    cout << "Your bill: " << tata * userRentedhrs << "/-" << endl;
  } else if (userchoice == "n") {
    cout << "Thank you for your patiance\nVist Again";
  }

  // toyota bill

  if (userchoice == "toy") {
    cout << "Great! We think you've enjoyed your ride!\n\nNow please enter the "
            "hours you've rented\n\n: ";
    cin >> userRentedhrs;
    cout << "Your bill: " << toyota * userRentedhrs << "/-" << endl;
  } else if (userchoice == "n") {
    cout << "Thank you for your patiance\nVist Again";
  }
}

void vehiclemodels(char ModelSelect) {
  int tesla = 200, honda = 140, tata = 190, toyota = 199;
  string userchoice;
  int rentedhrs;

  if (ModelSelect == 'a') {
    cout << "You've Choosen Tesla!\nIt will cost you ";
    cout << tesla
         << "/- Hourly | Do you want to continue?\n Enter = 'tes' / n\n\n: ";
    cin >> userchoice;
    rentedbill(userchoice);
  } else if (ModelSelect == 'b') {
    cout << "You've Choosen Honda!\nIt will cost you ";
    cout << honda
         << "/- Hourly | Do you want to continue?\n Enter = 'hon' / n\n\n: ";
    cin >> userchoice;
    rentedbill(userchoice);
  } else if (ModelSelect == 'c') {
    cout << "You've Choosen Tata!\nIt will cost you ";
    cout << tata
         << "/- Hourly | Do you want to continue?\n Enter = 'tat' / n\n\n: ";
    cin >> userchoice;
    rentedbill(userchoice);
  } else if (ModelSelect == 'd') {
    cout << "You've Choosen Toyota!\nIt will cost you ";
    cout << toyota
         << "/- Hourly | Do you want to continue?\n Enter = 'toy' / n\n\n: ";
    cin >> userchoice;
    rentedbill(userchoice);
  }
}

void vehiclechoice(string vehicletype) {
  char ModelSelect;
  if (vehicletype == "car" || vehicletype == "CAR" || vehicletype == "Car") {
    cout << "\nOk, YOu have proceeded\nNext Please Select Models\n";
    cout << "A) Tesla - 200/-\nB) Honda - 140/-\nC) Tata - 190/-\nD) Toyota - "
            "199/-\nSelect from these options eg'B'\n\n: ";
    cin >> ModelSelect;
    vehiclemodels(ModelSelect);
  }

  else {
    cout << "No worries, Pls try again";
  }
}

int main() {
  string vehicleType;
  // Personal Details
  string name, email;
  float phnum;

  cout << "Welcome to Vehicle Rental Portal!\n* Enter name: ";
  getline(cin, name);
  cout << "* Enter email: ";
  cin >> email;
  cout << "* Enter Phone Number: ";
  cin >> phnum;

  cout << "\nNOW - Please enter car to confirm! \neg'Car'\n\n: ";
  cin >> vehicleType;
  vehiclechoice(vehicleType);

  cout << "Your Name: " << name << "\n"
       << "Your email: " << email << "\n"
       << "Phone number: " << phnum << "\nThank you for using our services! :)";

  return 0;
}