
#include <iostream>
using namespace std;
class Player {
   private:
   int number; 
   string name;
   int score; 
   public:
   Player() {
      number = 0;
      score = 0;
      name = "";
   }
   Player(int n, string names, int s) {
      number = n;
      name = names;
      score = s;
   }
   friend ostream &operator<<( ostream &output, const Player &D ) {
      output << "Number : "   << D.number << " Name : " << D.name<< " Score: "<<D.score;
      return output;
   }
   friend istream &operator>>( istream &input, Player &D ) {
      input >> D.number >> D.name>> D.score;
      return input;
   }
};
int main() {
    int number1,score1,number2,score2;
    string name1,name2;
    Player D3;

    cout<<"Enter the 1st player number, name and score: ";
    cin>>number1>>name1>>score1;
    cout<<"Enter the 2nd player number, name and score: ";
    cin>>number2>>name2>>score2;
    cout<<"Enter for 3rd player: ";
    cin>>D3;
 
   Player D1(number1, name1, score1), D2(number2, name2, score2);
   
   cout << "First player : " << D1 << endl;
   cout << "Second player :" << D2 << endl;
   cout << "Third player: "  << D3 <<endl;
   return 0;
}
