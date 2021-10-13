#include <iostream>
#include <random>
#include <string>
//shane mrad
//10/12/2021
//die game
using namespace std;
int player1 = 0;
int player2 = 0;
int die = 0;
string hold;
string yes = "yes";
string no = "no";
int point;
string hold2;
int point2;

int reset1(int die) {
    
        point = 0;
        player1 = 0;
        die = 0;
        cout << "player 1 point reset back to 0\n";
        return point, player1,die;
    
}

int points1(int die) {
    if (die == 1)
    {
        point = 0;
        player1 = 0;
        die = 0;
        cout << " point reset back to 0\n";
        return point, player1,die;
    }
    point = point + player1;
    player1 = point + die;
    point = point;
    cout << "you now have: " << player1 << " points\n" << endl;
    
    return player1;

};
int reset2(int die) {
    
        point2 = 0;
        player2 = 0;
        die = 0;
        cout << " player 2 point reset back to 0\n";
        return point2, player2,die;
}
int points2(int die) {
    if (die == 1)
    {
        point2 = 0;
        player2 = 0;
        die = 0;
        cout << " point reset back to 0\n";
        return point2, player2,die;
    }
    point2 = point2 + player2;
    player2 = point2 + die;
    point2 = point2;
    cout << "you now have: " << player2 << " points\n" << endl;

    return player2;
}
int read1(int player1) {
    cout << "you have " << player1 << " points\n";
    return player1;
}

int read2(int player2) {
    cout << "you have " << player2 << " points\n";
    return player2;
}
int readrules(int rules) {
    cout << "enter yes to hold. Enter no to skip number.";
    return rules;
}

int roll {
    
}


int main() {
    cout << "type rules to read rules now."
    cin >> rules
        if (rules == rules) {
            readrules(rules);
     }
    while (player1 < 20 && player2 < 20) {
        if (player1 < 20 && player2 < 20) {
            die = rand() % 10;
            die = rand() % 10;
            if (die == 1) {
                reset1(die);
            }
            cout << "You rolled a: " << die << ". Player1 Do you want to hold?\n";
            cin >> hold;
            
            if (hold == yes)
            {
                cout << "player 1 hold: " << die << endl;

                points1(die);
                
            }
            else {
                cout << "OK\n";
                read1(player1);
            }
        }
        if (player1 < 20, player2 < 20) {
            die = rand() % 10;
            if (die == 1) {
                reset2(die);
            }
            cout << "You rolled a: " << die << ". Player2 Do you want to hold?\n";
            cin >> hold2;

            if (hold2 == yes)
            {
                cout << "player 2 Hold: \n" << die << endl;
                points2(die);
            }
            else {
                cout << "OK\n";
                read2(player2);
            }
        }
    };

    if (player1 > 20) {
        cout << "player 1 wins with " << player1 << "points\n";
    }
    if (player2 > 20) {
        cout << "player 2 wins with " << player2 << "points\n";
    }
}