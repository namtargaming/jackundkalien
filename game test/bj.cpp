#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int get_random_number(int min, int max)
{
    static bool first = true;
    if (first)
    {
        srand(time(NULL));
        first = false;
    }
    return min + rand() % ((max + 1) - min);
}

int get_card_value(int card_number)
{
    if (card_number > 10)
    {
        return 10;
    }
    else if (card_number == 1)
    {
        return 11;
    }
    else
    {
        return card_number;
    }
}

int main()
{
    int player_score = 0;
    int dealer_score = 0;
    int player_aces = 0;
    int dealer_aces = 0;

    cout << "this is BJ game" << endl;

    player_score += get_card_value(get_random_number(1, 13));
    dealer_score += get_card_value(get_random_number(1, 13));
    player_score += get_card_value(get_random_number(1, 13));
    dealer_score += get_card_value(get_random_number(1, 13));

    if (player_score == 21)
    {
        cout << "you win (BJ draw)" << endl;
        return 0;
    }
    if (dealer_score == 21)
    {
        cout << "you lose (BJ draw)" << endl;
        return 0;
    }

    cout << "Your score: " << player_score << endl;
    cout << "Dealer score: " << dealer_score << endl;

    while (player_score < 21)
    {
        char choice;
        cout << "Hit or stand? Type \"h\" or \"s\"";
        cin >> choice;
        if (choice == 'h')
        {
            int card = get_card_value(get_random_number(1, 13));
            player_score += card;
            if (card == 11)
            {
                player_aces++;
            }
        }
        else
        {
            break;
        }

        if (player_score > 21 && player_aces > 0)
        {
            player_score -= 10;
            player_aces--;
        }

        cout << "Your score: " << player_score << endl;
    }

    if (player_score > 21)
    {
        cout << "you lose (bust)" << endl;
        return 0;
    }

    while (dealer_score < 17)
    {
        int card = get_card_value(get_random_number(1, 13));
        dealer_score += card;
        if (card == 11)
        {
            dealer_aces++;
        }

        if (dealer_score > 21 && dealer_aces > 0)
        {
            dealer_score -= 10;
            dealer_aces--;
        }
    }

    if (dealer_score > 21)
    {
        cout << "you win (bust)" << endl;
        return 0;
    }

    if (player_score > dealer_score)
    {
        cout << "you win (score)" << endl;
    }
    else if (dealer_score > player_score)
    {
        cout << "you lose (score)" << endl;
    }
    else
    {
        cout << "tied score (you lose)" << endl;
    }
    return 0;
}