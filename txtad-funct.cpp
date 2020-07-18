#include <iostream>
#include <vector>
#include "txtadv.hpp"
using namespace std;

void beginning(string first, string last, int tries) {
  int stay_leave;
  cout << ". . .\nIt's only been four hours since you've been\nassigned and the adrenaline wont stop\ngushing through you." << endl;
  cout << "You still remember captain's orders..." << endl;
  cout << "'" << last << ", you are on the Mafia 5 case now,\nwe can't let them slip another gun fiasco\nwithout us being there to stop it.'"<< endl;
  cout << ". . .\nYou are in and the concert is a mad-man-fest.\nand the mafia is no where in sight." << endl;
  cout << "Intel might be wrong about it being this concert\n. . ." << endl;
  cout << "Do you\n1)Stay at the concert and remain on alert\n2)Leave and report nothing suspicious\n";
  cin >> stay_leave;
  choice1(stay_leave, tries, first, last);
}

void stay(int tries, string first, string last) {
  char a_c;
  cout << ". . .\nYou stay and relax a bit, not too worried.\nThen comes the dry noise of beats and punches\nin the distance." << endl;
  cout << "As you push and pass people you catch the\neye of a prime (leader) of the Mafia 5.\n. . . " << endl;
  cout << "By the look of them both the fight started\nfrom the Mafia 5 leader because for the already \nbruise-covered face of the suspected civilian." << endl;
  cout << "This is the perfect scene to arrest the\nprime for aggravated assault under the influence." << endl;
  cout << "But the idea to keep\ncover and dive deeper\ninto their operations is not a bad idea either.\n. . ." << endl;
  cout << "What will you choose?\nA)Arrest the prime and convict him of harassment and suspicious activity\nB)Break up the fight" << endl;
  cin >> a_c;
  choice2(a_c, tries, first, last);
}

void leave(int tries, string first, string last) {
  cout << ". . .\nNothing catches your eye, so you head for\nthe back entrance and alert the station your findings." << endl;
  cout <<"'"<< last << " to station, there seems to be nothing wro--'" << endl;
  cout << "BAM BAM!" << endl;
  cout << "Gun shots sour your ears and screams fill\nthe void. You help civilians leave the premises and\nfind other cops in the mess" << endl;
  cout << "The out of nowhere you spot a\nprime leader of the Mafia 5\n. . ." << endl;
  pulled_away(tries, first, last);
}

void g_fire(int tries, string first, string last) {
  cout << "You pull out your badge and gun and yell\nacross the crowds to get to the fight." << endl;
  cout << "Sweat and impatience in covering you, anxious\nto finally solve the Mafia 5 case." << endl;
  pulled_away(tries, first, last);
}

void pulled_away(int tries, string first, string last) {
  string n_q;
  cout << ". . .\n'" << first << " " << last << "' you hear from behind." << endl;
  cout << "You feel a tug at your collar before you\ncan turn and a bag covers your entire face now." << endl;
  cout << "Thrown into a van (that is presumed to be white)\nyou hear the driver and passenger exchange\nwords in some sort of code in English tongue\n. . ." << endl;
  cout << "You can either: \n'Make noise' or 'Stay quiet'" << endl;
  cout << "What do you do?: ";
  getline(cin, n_q);
  choice3(n_q, tries, first, last);
}

void pulled_away2(int tries, string first, string last)
{
  cout << ". . .\n'" << first << " " << last << "' you hear from behind." << endl;
  cout << "You feel a tug at your collar before you\ncan turn and a bag covers your entire face now." << endl;
  cout << "Thrown into a van (that is presumed to be white)\nyou hear the driver and passenger exchange\nwords in some sort of code in English tongue\n. . ." << endl;
  cout << ". . .\nYou stay put and try to analyze your situation." << endl;
  cout << "You are in a van\nhands tied\nlegs tied\nface covered\nthree people in the van at the moment.\nThats it." << endl;
  cout << ". . .\nThe van slows to a stop, you feel something\nslide down your arm." << endl;
  cout << "Your silent alarm! Only for emergency use it sends out\na signal of your location to the\nnearest station." << endl;
  cout << "The two guys drag you for what seems like forever.\nThey still you down, tie you up to a chair, \nand take off the bag only to replace in with a gag." << endl;
  cout << ". . .\nYou keep to yourself, they flinch and mock you\nbut you stay still, analyzing the warehouse\nand who is in it." << endl;
  cout << "Someone else enters the warehouse, you try not to\nflinch, but look over at who is it.\nIt's the Mafia 5 prime from the concert!" << endl;
  ending4(tries, first, last);
}

void side(int tries, string first, string last) {
  string i_g;
  cout << "You rush over to the fight and try to\nseparate the two." << endl;
  cout << "One of the leader's 'minions' helps you\n(remember, keep your cool)." << endl;
  cout << "As the other man walks away the prime\ngets up and curses the other off real bad." << endl;
  cout << "Before launching himself at the leader\nyou catch the other man to avoid another confrontation." << endl;
  cout << "In the end they both begin to flow along with\nthe concert, in opposite directions\n. . ." << endl;
  cout << "You can either follow:\n'the Man' or 'the Prime':\n";
  getline(cin, i_g);
  choice4(i_g, tries, first, last);
}
void following(int tries, string first, string last) {
  string m_s;
  cout << ". . .\nYour case is the Mafia 5,\nso there you go." << endl;
  cout << "You go to ask the prime if he\nis alright but his minions block your path\nthe prime brushes them off and tells them to relax." << endl;
  cout << "Asking how he is he grabs your\nshoulders and says,\n'Brother, I won that fight! I'm sweating gold!'" << endl;
  cout << "There seems to be no sign of\ninfluence so you smile." << endl;
  cout << "He then begins to analyze you, up and down." << endl;
  cout << "he leans in and says,\n'You got something to offer, tell me your secret'\n";
  cout << "Do you tell him:\n'Money'\nor\n'Skill': ";
  cin >> m_s;
  choice6(m_s, tries, first, last);
}

void service(int tries, string first, string last)
{
    string nfirst;
    string nlast;
    int t_l;
    cout << ". . .\n'Here', you hand him your card,\n'I help people get intel, not for a lot\nbut it helps to get by'." << endl;
    cout << "'People think I'm a cop, but thats\njust how I keep my resources quiet'." << endl;
    cout << "The card says your first (not real) name is: ";
    cin >> nfirst;
    cout << "And your last (also not real) name is: ";
    cin >> nlast;
    cout << ". . .\nThe prime inspects the card,\nlooks at you,\nthen the card one last time." << endl;
    cout << "'Alright " << nfirst <<" "<< nlast << "\nI think I got the perfect first job for ya,\nif you really aren't a cop'." << endl;
    cout << "Will you:\n1)Take the job\nor\n2)Leave\n?: ";
    cin >> t_l;
    choice8(t_l, nfirst, nlast, tries, first, last);
}

void quiet(int tries, string first, string last) {
  int p_w;
  cout << ". . .\nYou stay put and try to analyze your situation." << endl;
  cout << "You are in a van\nhands tied\nlegs tied\nface covered\nthree people in the van at the moment.\nThats it." << endl;
  cout << ". . .\nThe van slows to a stop, you feel something\nslide down your arm." << endl;
  cout << "Your silent alarm! Only for emergency use it sends out\na signal of your location to the\nnearest station." << endl;
  cout << "The two guys drag you for what seems like forever.\nThey still you down, tie you up to a chair, \nand take off the bag only to replace in with a gag." << endl;
  cout << "Do you: \n1) Press the alarm\n2) Wait and see what happens\n?: " << endl;
  cin >> p_w;
  choice5(p_w, tries, first, last);
}

void still(int p_w, int tries, string first, string last) {
  int q_s;
  cout << ". . .\nYou keep to yourself, they flinch and mock you\nbut you stay still, analyzing the warehouse\nand who is in it." << endl;
  cout << "Someone else enters the warehouse, you try not to\nflinch, but look over at who is it.\nIt's the Mafia 5 prime from the concert!" << endl;
  cout << "He whispers something to the guys who kidnapped\nyou and then they begin to approach you,\nready to search for wires, mic's, the alarm." << endl;
  cout << "They remove the gag and you have a chance to speak." << endl;
  cout << "Either: \n1)Say you have an offer\nor\n2)Keep quiet\nor\n3)Spit at their face" << endl;
  cin >> q_s;
  choice7(q_s, p_w, tries, first, last);
}


void slapped(int tries, string first, string last) {
  cout << ". . .\nYou spit next to the boot of the Mafia 5\nleader when he gets close enough." << endl;
  cout << "With just a slap in the face you see and\nfeel the blood coming down your nose." << endl;
  cout << "When you look up again, the other guy throws\na hook to your jaw from the right, cheap shot." << endl;
  ending4(tries, first, last);
}

void untied(int tries, string first, string last) {

}

void yrs_later(string nfirst, string nlast, int tries, string first, string last)
{
    char choice;
    cout << ". . .\nIts been two years since you have taken the identity of\n" << nfirst << " " << nlast << " and this is the last heist you have to spy for." << endl;
    cout << "What the five primes (note: Mafia 5 = 5 primes) told you is\nthis heist would set them off the grid to whatever they please." << endl;
    cout << "In hand you have your silent alarm,\nthe key to officially close to Mafia 5 case.\nBut something inside you makes you\nthink twice before setting it off." << endl;
    cout << "What do you choose?\nA)Set off the silent alarm\nor\nB)Stay as " << nfirst << " " << nlast << "\n?: ";
    cin >> choice;
    choice9(choice, nfirst, nlast, tries, first, last);
}
