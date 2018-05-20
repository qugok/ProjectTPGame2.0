#include <iostream>
#include <Game.h>


using namespace std;

template<class T>
std::ostream &operator<<(std::ostream &out, std::vector<T> v) {
    for (T e:v)
        out << e << "\t";
    return out;
}

template<class T>
std::ostream &operator<<(std::ostream &out, std::set<T> v) {
    for (T e:v)
        out << e << "\t";
    return out;
}


void play() {

    Game game(5, 5);

    for (int i = 0; i < 5; i++) {
        Player &player = game.getCurrentPlayer();
        IUnit *unit = player.getFraction()->create_warrior();
        player.addArmy(unit, Cell(1, 2));
        game.getCurrentPlayer() = player;
    }
    for (int i = 0; i < 5; i++) {
        Player &player = game.getCurrentPlayer();
        IUnit *unit = player.getFraction()->create_flayer();
        player.addArmy(unit, Cell(1, 2));
        game.getCurrentPlayer() = player;
    }

    for (int i = 0; i < 5; i++) {
        Player &player = game.getOtherPlayer();
        IUnit *unit = player.getFraction()->create_warrior();
        player.addArmy(unit, Cell(1, 2));
        game.getOtherPlayer() = player;
    }

    for (int i = 0; i < 5; i++) {
        Player &player = game.getOtherPlayer();
        IUnit *unit = player.getFraction()->create_archer();
        player.addArmy(unit, Cell(1, 2));
        game.getOtherPlayer() = player;
    }

    cout << game.getCurrentPlayer().getArmyNumbers() << "\n";
    cout << game.getCurrentPlayer().getArmyNumbers();

//    cout << *game.getField()<<"\n";
//    game.step();
    while (!game.finished()) {
        cout << "\n\nstart of the next player's step\n";
        vector<int> units = game.getCurrentPlayer().getArmyNumbers();
        std::set<int> s(units.begin(), units.end());
        int number;
//        while
//        cout << "Choose one of " << units.size() << " armies:\n", cout << units << "\n\n", cin >> number;
        cout << "Choose one of " << s.size() << " armies:\n", cout << s << "\n\n", cin >> number;
        {
            if (s.find(number) == s.end()) {
                cout << "Wrong Chousen, я не знаю такого номера";
                continue;
            }
            {
                vector<int> possibleTargets = game.getOtherPlayer().getArmyNumbers();
                std::set<int> s2(possibleTargets.begin(), possibleTargets.end());
                if (!possibleTargets.empty()) {
                    cout << "you can attack any opponent army:\n" << s2 << "\n Who you want to attack?\n";
                    int N;
                    cin >> N;
                    if (s2.find(N) == s2.end()) {
                        cout << "Wrong Chousen, я не знаю такого номера";
                        continue;
                    }
                    game.getCurrentPlayer().attackArmy(number, game.getOtherPlayer(), N);

                    cout << "You have attacked\nNow you have armies:\n" << game.getCurrentPlayer().getArmyNumbers()
                         << "\nAnd opponent has\n" << game.getOtherPlayer().getArmyNumbers()
                         << "\nstarts opponent's step\n";
//                    units[number]->attack(possibleTargets[N]);
//                    possibleTargets[N]->defenceFrom(units[number]);
//                    cout << "Unit " << possibleTargets[N] << " attacked\n by Unit " << units[number] << "\n";
//                } else {
//                    cout << "you can't attack anybody\n";
                }
            }
        }
//        cout << "OK your step is finished\nnext Player\n";
        game.step();
    }
    cout << "you win!\nGame over";

}

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    v.erase(v.begin(), v.begin());
    cout << v << "\n";
    v.erase(v.begin(), v.begin() + 1);
    cout << v << "\n";
    try {
        play();
    }
    catch (...) {
        cout << "произошла непредвиденная ошибка, обязательно скажите разработчику, как вы этого добились";
    }
    return 0;
}