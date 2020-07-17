#include <iostream>
#include "txtadv.hpp"

using namespace std;

int question(int tries, string first, string last) {
  char y_n;
  if (tries > 0){
    cout << "SIMULATION HAS STOPPED\nYOU HAVE " << tries << " TRIES LEFT.\nWOULD YOU LIKE TO TRY AGAIN?(y/n): ";
    cin >> y_n;
    restart(y_n, tries, first, last);
  } else {
    cout << "You have no more tries left. The simulation will now self distruct\n. . ." << endl;
    cout << "Just kidding" << endl;
    return 0;
  }
}

int restart(char y_n, int tries, string first, string last) {
  char yn;
  cout << "Are you sure?(y/n): ";
  cin >> yn;
  if (yn == 'y' || yn == 'Y') {
    if(y_n == 'y' || y_n == 'Y') {
        tries--;
        cout << "You now have " << tries << "tries" << endl;
        beginning(first, last, tries);
    } else if (y_n == 'n' || y_n == 'N') {
        cout << ". . .\nOk, good-bye";
        return 0;
    }
  } else if (yn == 'n' || yn == 'N') {
    cout << "Ok, you have a chance to change your answer(y/n): ";
    cin >> y_n;
    restart(y_n, tries, first, last);

  } else {
    cout << "Please enter a valid answer " << first << last << "(y/n): ";
    cin >> y_n;
    restart(y_n, tries, first, last);
  }
}

void ending1(int tries, string first, string last) {
  cout << ". . .\nYou muffle and scream banging the walls with\nyour knees." << endl;
  cout << "All of a sudden on your intercom you hear the captain.\n'" << last << " what is your progress?'\n'" << last << " respond'\n'" << last <<" "<<  first << " report back immediately!'" << endl;
  cout << "You freak out, try to respond to the captain but you just\nkeep cutting your arms and wrists." << endl;
  cout << "The passenger hears you from the front.\n'Damn " << first << " won't shut up, we\nare going to get caught!'\nHe takes off his seat belt, grabs a\nbat and knock you out cold." << endl;
  cout << "They dump you on the side of the road.\nYou are later found by two friends\non a road trip." << endl;
  cout << "You wake up at the hospital with no\nrecollection of anything;\nthe night, the concert, your name nor age. . . " << endl;
  cout << "The case remains open to this day with no one to blame." << endl;
  question(tries, first, last);
}

void ending2(int tries, string first, string last) {
  cout << ". . .\nThe music pounds across the grass front of the\nstadium, the people swerving and spinning everywhere\nbut you still manage to find the man and grab his attention." << endl;
  cout << "Approaching him you take out your badge,\n'Detective " << last <<" "<< first << ", you were in conflict with a\nvery dangerous man, any reason why he would do so?'" << endl;
  cout << "He looks at you for a minute, probably under\nthe influence, then responds with,\n'Nah, officer, I just asked if he wanted candy\nand he jut started to beat me up like a weird bro.'" << endl;
  cout << "Damn, dead end.\nYou thank the civilian for his help\nbut still detain him for the illegal distribution of marijuana. . ." << endl;
  question(tries, first, last);
}

void ending3(int tries, string first, string last) {
    cout << ". . .\nThe prime looks at you\nas you over-confidently say,\n'Well just so you know the number of dollar bills I\ngot could help a lot of operations if you know what I mean.'" << endl;
    cout << "The prime smiles, then laughs, next cackles into saying,'Lets see how much you got; get him'" << endl;
    cout << "You are knocked unconcious,\nas the prime's minions rob\nyou of your cash and wallet." << endl;
    cout << "When you wake up, your at the\nhospital with the captain sitting next to you.\nHe has th case file in hand as he tells you,\n'Case is a bust, sorry " << last << " it isn't your fault'." << endl;
    cout << "But deep down\nyou know it is.\n. . ." << endl;
    question(tries, first, last);
}

void ending4(int tries, string first, string last) {
  cout << "The alarm slips out of your arm and skips\nacross the floor for what seemed like whole minutes." << endl;
  cout << "The leader walks up to it, turns it off,\ndrops it, an crushes the alarm beneath his boot." << endl;
  cout << "Two other men drag your chair across the\nwarehouse and throw you in a closet." << endl;
  cout << "The leader approaches the door, hold it and softly tells you 'You might want to keep a picture of the sun with you, just incase you don't cooperate, " << last << " '." << endl;
  question(tries, first, last);
}

void ending5(string nfirst, string nlast, int tries, string first, string last)
{
    cout << ". . .\nWhile you are " << nfirst << " " << nlast << "for about two years,\nyou start to become " << nfirst << " " << nlast << "." << endl;
    cout << ". . .\n" << first << " " << last << " is gone, now you are going be\na billionaire as " << nfirst << " " << nlast << endl;
    question(tries, first, last);
}

void ending6(int tries, string first, string last) {
    cout << ". . .\nAs you sit there, the prime observing you,\nready to strike,\nthe energy around you changes." << endl;
    cout << "With one foul swoop the entire warehouse\n is surrounded and\nguarded by FBI and police." << endl;
    cout << "While all the dealers and primes are arrested,\nntel hijacks the system computer that's behind you\nand uploads all the intel needed to take down the Mafia 5." << endl;
    cout << "The next day you step into the captain's\noffice with a promotion in his hands.\n As you leave the office, you leave a hero." << endl;
    question(tries, first, last);
}

void ending7(int tries, string first, string last)
{
    cout << ". . .\nRight when you shake the hands of\nthe targets, you set that silent alarm off!\n15 minutes in you are surrounded by cops and FBI agents." << endl;
    cout << "You continue with the act for a little\nlonger until all the primes and targets are gone." << endl;
    cout << "You return to the precinct with a promotion and a hero, finally solving the seven-year Mafia 5 case." << endl;
}
