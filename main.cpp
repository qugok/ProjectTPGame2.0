#include <iostream>
//#include <fstream>
#include <Game.h>


using namespace std;

std::ostream &operator<<(std::ostream &out, const std::vector<IUnit *> &list) {
    for (IUnit *unit : list) {
        out << *(unit->getPosition()) << (unit->isMoved() ? " ismoved " : "") << (unit->isHited() ? " isHited " : "")
            << "\t\t";
    }
    return out;
}
//
//void makeFiles() {
//    {
//        freopen("./../parameters/RussianWarrior", "w", stdout);
//        using namespace Constants::Russian::Warrior;
//        cout << "- " << cAttack << "\n- " << cMoveDistance << "\n- " << cAttackDistance << "\n- " << cCounterattackDamage
//             << "\n- " << cDefence << "\n- " << cMaxLives;
//    }
//    {
//        freopen("./../parameters/RussianFlyer", "w", stdout);
//        using namespace Constants::Russian::Flyer;
//        cout << "- " << cAttack << "\n- " << cMoveDistance << "\n- " << cAttackDistance << "\n- " << cCounterattackDamage
//             << "\n- " << cDefence << "\n- " << cMaxLives;
//    }
//    {
//        freopen("./../parameters/RussianArcher", "w", stdout);
//        using namespace Constants::Russian::Archer;
//        cout << "- " << cAttack << "\n- " << cMoveDistance << "\n- " << cAttackDistance << "\n- " << cCounterattackDamage
//             << "\n- " << cDefence << "\n- " << cMaxLives;
//    }
//    {
//        freopen("./../parameters/AmericanWarrior", "w", stdout);
//        using namespace Constants::American::Warrior;
//        cout << "- " << cAttack << "\n- " << cMoveDistance << "\n- " << cAttackDistance << "\n- " << cCounterattackDamage
//             << "\n- " << cDefence << "\n- " << cMaxLives;
//    }
//    {
//        freopen("./../parameters/AmericanFlyer", "w", stdout);
//        using namespace Constants::American::Flyer;
//        cout << "- " << cAttack << "\n- " << cMoveDistance << "\n- " << cAttackDistance << "\n- " << cCounterattackDamage
//             << "\n- " << cDefence << "\n- " << cMaxLives;
//    }
//    {
//        freopen("./../parameters/AmericanArcher", "w", stdout);
//        using namespace Constants::American::Archer;
//        cout << "- " << cAttack << "\n- " << cMoveDistance << "\n- " << cAttackDistance << "\n- " << cCounterattackDamage
//             << "\n- " << cDefence << "\n- " << cMaxLives;
//    }
//    {
//        freopen("./../parameters/DefaultWarrior", "w", stdout);
//        using namespace Constants::Default::Warrior;
//        cout << "- " << cAttack << "\n- " << cMoveDistance << "\n- " << cAttackDistance << "\n- " << cCounterattackDamage
//             << "\n- " << cDefence << "\n- " << cMaxLives;
//    }
//    {
//        freopen("./../parameters/DefaultFlyer", "w", stdout);
//        using namespace Constants::Default::Flyer;
//        cout << "- " << cAttack << "\n- " << cMoveDistance << "\n- " << cAttackDistance << "\n- " << cCounterattackDamage
//             << "\n- " << cDefence << "\n- " << cMaxLives;
//    }
//    {
//        freopen("./../parameters/DefaultArcher", "w", stdout);
//        using namespace Constants::Default::Archer;
//        cout << "- " << cAttack << "\n- " << cMoveDistance << "\n- " << cAttackDistance << "\n- " << cCounterattackDamage
//             << "\n- " << cDefence << "\n- " << cMaxLives;
//    }
//}

int main() {

//    makeFiles();
//    return 0;

    Game game(10, 10);

    for (int i = 0; i < 5; i++) {
        game.getCurrentPlayer()->addWarior();
    }

    for (int i = 0; i < 5; i++) {
        game.getOtherPlayer()->addArcher();
    }
//    cout << *game.getField()<<"\n";
    game.step();
    while (!game.finished()) {
        cout << "start of step\n";
        vector<IUnit *> units = game.getCurrentPlayer()->getUnits();
        int number;
        while (cout << "Choose one of " << units.size() << " units:\n ", cout << units << "\n\n", cin >> number) {
            number--;
            if (number >= units.size() || number < 0) {
                break;
            }
            {
                Field field = units[number]->canMoveTo(game.getField());
                if (!field.getList().empty()) {
                    cout << "you can move to:\n" << field << "\n where do you want to move?\n";
                    int N;
                    cin >> N;
                    N--;
                    if (N >= field.getList().size() || N < 0) {
                        break;
                    }
                    units[number]->moveTo(field.getList()[N]);
                    cout << "Unit " << units[number] << " \tmoved to\t" << *units[number]->getPosition() << "\n";
                } else {
                    cout << "you can't move\n";
                }
            }
            {
                vector<IUnit *> possibleTargets = units[number]->canAttack(game.getField());
                if (!possibleTargets.empty()) {
                    cout << "you can attack:\n" << possibleTargets << "\n Who you want to attack?\n";
                    int N;
                    cin >> N;
                    N--;
                    if (N >= possibleTargets.size() || N < 0) {
                        break;
                    }
                    units[number]->attack(possibleTargets[N]);
                    possibleTargets[N]->defenceFrom(units[number]);
                    cout << "Unit " << possibleTargets[N] << " attacked\n by Unit " << units[number] << "\n";
                } else {
                    cout << "you can't attack anybody\n";
                }
            }
        }
        cout << "OK your step is finished\nnext Player\n";
        game.step();
    }
    cout << "Game over";
    return 0;
}