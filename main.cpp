#include <iostream>

using namespace std;

//Declare a simple C++ class without variables, methods or any other instructions
class EmptyClass{
};

//Initialising my Voter Class which contains personal details
class Voter{
  public:
   string name;
   string surname;
   int IdentityNo;

   void VoteCasting(string nam, string surn, int ID, int vote){
        cout<<"Hey "<< nam <<" "<< surn <<" with ID number :"<< ID<<"\n";

        if(vote >=1 && vote <=3){
            switch(vote){
                case 1:
                    cout << "Vote selected for Hloni"<<"\n";
                    break;
                case 2:
                    cout << "Vote selected for Thando"<<"\n";
                    break;
                case 3:
                    cout << "Vote selected for Tshepo"<<"\n";
                    break;
                }
           cout << "Vote Successful!";
        }
        else{
            cout << "You have entered an Invalid value please try again" ;
        }

   }
};



int main()
{
    //Using my class to input user(Voter) personal details
    Voter Person1;
    cout << "Voter enter your first name: "<<"\n";
    cin >> Person1.name;
   // cout << Person1.name;
    cout << "Voter enter your surname: "<< "\n";
    cin >> Person1.surname;
   // cout <<Person1.surname;
    cout << "Voter enter your ID: "<<"\n";
    cin >> Person1.IdentityNo;
   // cout <<Person1.ID;

        int vote;
           cout <<" To vote for Hloni select 1, for Thando select 2, for Tshepo select 3" <<"\n";
           cout << "Please select your vote from 1-3"<< "\n";
           cin >> vote;

   Voter myVote;
   myVote.VoteCasting(Person1.name,Person1.surname,Person1.IdentityNo, vote);

    return 0;
}
