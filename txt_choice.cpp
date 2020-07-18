#include <iostream>
#include "txtadv.hpp"
using namespace std;

void choice1(int stay_leave, int tries, string first, string last) {
  switch(stay_leave){
      case 1:
        stay(tries, first, last);
        break;
      case 2:
        leave(tries, first, last);
        break;
      default:
        cout << "\nInvalid, please try again " << first <<" "<< last << ": ";
        cin >> stay_leave;
        choice1(stay_leave, tries, first, last);
  }
}
void choice2(char a_c, int tries, string first, string last) {
  if(a_c == 'A' || a_c == 'a') {
    g_fire(tries, first, last);
  } else if (a_c == 'B' || a_c == 'b') {
      side(tries, first, last);
  } else {
      cout << "Please enter a valid response " << first <<" "<< last << "\nex: a, A, b, B\n";
      cin >> a_c;
      choice2(a_c, tries, first, last);

    }
}
void choice3(string n_q, int tries, string first, string last) {
  if(n_q == "make noise" || n_q == "Make Noise" || n_q == "Make noise") {
    string y_no;
    cout << "\nAre you sure you want to make noise?(yes/no): ";
    cin >> y_no;
        if(y_no == "yes" || y_no == "Yes") {
            cout << "Ok then..." << endl;
            ending1(tries, first, last);
        } else if(y_no == "no" || y_no == "Yes") {
            cout << "Alright, it's ok not to be sure " << first << last << ".\nGood choice in this case too." << endl;
            quiet(tries, first, last);
        }
  } else if (n_q == "stay quiet" || n_q == "Stay Quiet" || n_q == "Stay quiet"){
    cout << "Good choice!" << endl;
    quiet(tries, first, last);
  } else {
    cout << "Please provide a valid answer " << first << ": ";
    getline(cin, n_q);
    choice3(n_q, tries, first, last);
  }

}
void choice4(string i_g, int tries, string first, string last) {
  if (i_g == "the Man" || i_g == "The man" || i_g == "the man" || i_g == "The Man") {
    ending2(tries, first, last);
  } else if(i_g == "the Prime" || i_g == "The prime" || i_g == "the prime" || i_g == "The Prime") {
        following(tries, first, last);
} else {
    cout << "Please enter a valid response " << first <<" "<< last << ": ";
    getline(cin, i_g);
    choice4(i_g, tries, first, last);
}

}
void choice5(int p_w, int tries, string first, string last) {
switch (p_w){
  case 1:
      still(p_w, tries, first, last);
      break;
  case 2:
     {
      string sure;
      cout << "Are you sure? Its a big risk(yes/no): ";
      cin >> sure;
      if (sure == "yes" || sure == "Yes") {
        still(p_w, tries, first, last);
      } else if (sure == "no" || sure == "No"){
        cout << "Ok, give it another go: ";
        cin >> p_w;
        choice5(p_w, tries, first, last);
      }
     }
     break;
  default:
      cout << "Please enter a valid response " << first <<" "<< last << ": ";
      cin >> p_w;
      choice5(p_w, tries, first, last);
      break;
}

}
void choice6(string m_s, int tries, string first, string last) {
    if (m_s == "money" || m_s == "Money") {
        ending3(tries, first, last);
    } else if (m_s == "skill" || m_s == "Skill" || m_s == "skills" || m_s == "Skills") {
        service(tries, first, last);
    }

}

void choice7(int q_s, int p_w, int tries, string first, string last) {
  switch(q_s){
    case 1:
        {
            switch(q_s) {
            case 1: {
                char off;
                cout << "Do you want to turn off the alarm?(y/n): ";
                cin >> off;
                if (off == 'n' || off == 'N') {
                    ending6(tries, first, last);
                } else if (off == 'y' || off == 'Y') {
                    untied(tries, first, last);
                }
            }
                break;
             case 2:
                untied(tries, first, last);
                break;
            }

        }
    case 2:
        {
            switch(q_s) {
            case 1: {
                char off;
                cout << "Do you want to turn off the alarm?(y/n): ";
                cin >> off;
                if (off == 'y' || off == 'Y') {
                    ending4(tries, first, last);
                } else if (off == 'n' || off == 'N') {
                    ending6(tries, first, last);
                }
            }
            break;
             case 2:
                ending4(tries, first, last);
                break;
            }

        }
        break;
    case 3:
        {
            char ny;
            cout << "Are you sure?(y/n): ";
            cin >> ny;
            if (ny == 'y' || ny == 'Y') {
                cout << "If you say so..." << endl;
                slapped(tries, first, last);
            } else if (ny == 'n' || ny == 'N') {
                cout << "Alright " << first << " here is another chance." << endl;
                cout << "1) Quiet\n2) Spit" << endl;
                cin >> q_s;
                choice7(q_s, p_w, tries, first, last);
            }
        }
        break;
    default:
        cout << "Please insert a valid answer: " << endl;
        cin >> q_s;
        choice7(q_s, p_w, tries, first, last);
        break;
  }
}
void choice8(int t_l, string nfirst, string nlast, int tries, string first, string last)
{
    switch(t_l)
    {
        case 1:
            cout << ". . .\n. . .\n";
            yrs_later(nfirst, nlast, tries, first, last);
            break;
        case 2:
            pulled_away2(tries, first, last);
            break;

    }
}

void choice9(char choice, string nfirst, string nlast, int tries, string first, string last)
{
    if (choice == 'a' || choice == 'A')
    {
        ending7(tries, first, last);
    } else if (choice == 'b' || choice == 'B')
    {
        ending5(nfirst, nlast, tries, first, last);
    }
}


