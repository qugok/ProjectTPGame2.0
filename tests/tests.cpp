//
// Created by iesek on 21.03.2018.
//

#include <gtest/gtest.h>
#include <GenericUnit.h>
#include <Player.h>
#include <Fractions.h>
#include <Game.h>
#include <Army.h>
#include <MovingArmy.h>
#include <Reader/FileReader.h>


//TEST(Player, test) {
//    Player *player = new Player(new American());
//    EXPECT_EQ(player->dead(), true);
//    player->addArcher();
//    player->addWarior();
//    EXPECT_EQ(player->dead(), false);
//    EXPECT_EQ(player->getUnits().size(), 2);
//    delete player;
//}

TEST(Life, test) {
    Life life(10);
    EXPECT_TRUE(life.isAlife());
    life.getDamage(9);
    EXPECT_TRUE(life.isAlife());
    life.getDamage(1);
    EXPECT_FALSE(life.isAlife());
    life = 6;
    EXPECT_TRUE(life.isAlife());
    life.getDamage(5);
    EXPECT_TRUE(life.isAlife());
    life.getDamage(1);
    EXPECT_FALSE(life.isAlife());
}


TEST(GenericUnit, test) {
GenericUnit unit(Life(2), false, 1);
    EXPECT_EQ(unit.isFlying(), false);
GenericUnit unit2(Life(2), false, 1);
    unit.attack(&unit2);
    EXPECT_EQ(unit2.getLife().isAlife(), !unit2.dead());
    EXPECT_FALSE(unit2.dead());
    EXPECT_EQ(unit.getLife().isAlife(), !unit.dead());
    unit.attack(&unit2);
    EXPECT_EQ(unit2.getLife().isAlife(), !unit2.dead());
    EXPECT_TRUE(unit2.dead());
}

//TEST(Game, test) {
//    Game game(3, 3);
//    Player *first = game.getCurrentPlayer();
//    Player *other1 = game.getOtherPlayer();
//    game.step();
//    Player *second = game.getCurrentPlayer();
//    Player *other2 = game.getOtherPlayer();
//    EXPECT_EQ(first, other2);
//    EXPECT_EQ(second, other1);
//    EXPECT_FALSE(first == other1);
//    EXPECT_FALSE(second == other2);
//    EXPECT_TRUE(game.finished());
//    first->addWarior();
//    second->addWarior();
//    EXPECT_FALSE(game.finished());
//}

TEST (Army, test) {
Cell cell(1, 2);
Cell cell2(2, 1);
std::shared_ptr<CArmy> army(new Army(nullptr, cell));
std::shared_ptr<CArmy> current(new MovingArmy(army));
Fraction *fraction = new American();
    IUnit *first = fraction->create_warrior();
    EXPECT_EQ(current->getCurrentCell(), cell);
    current->move(cell2);
    EXPECT_EQ(current->getCurrentCell(), cell2);
    delete fraction;
    delete first;
}

TEST (Reader, Reader) {
    Reader *reader1 = new ConstantsReader();
    Reader *reader2 = new FileReader();
    reader1->readRussianArcher();
    reader2->readRussianArcher();
    EXPECT_EQ(reader1->getMoveDistance(), reader2->getMoveDistance());
    EXPECT_EQ(reader1->getAttackDistance(), reader2->getAttackDistance());
    EXPECT_EQ(reader1->getAttack(), reader2->getAttack());
    EXPECT_EQ(reader1->getCounterattackDamage(), reader2->getCounterattackDamage());
    EXPECT_EQ(reader1->getDefence(), reader2->getDefence());
    EXPECT_EQ(reader1->getMaxLives(), reader2->getMaxLives());
    reader1->readAmericanWarrior();
    reader2->readAmericanWarrior();
    EXPECT_EQ(reader1->getMoveDistance(), reader2->getMoveDistance());
    EXPECT_EQ(reader1->getAttackDistance(), reader2->getAttackDistance());
    EXPECT_EQ(reader1->getAttack(), reader2->getAttack());
    EXPECT_EQ(reader1->getCounterattackDamage(), reader2->getCounterattackDamage());
    EXPECT_EQ(reader1->getDefence(), reader2->getDefence());
    EXPECT_EQ(reader1->getMaxLives(), reader2->getMaxLives());
    reader1->readDefaultFlyer();
    reader2->readDefaultFlyer();
    EXPECT_EQ(reader1->getMoveDistance(), reader2->getMoveDistance());
    EXPECT_EQ(reader1->getAttackDistance(), reader2->getAttackDistance());
    EXPECT_EQ(reader1->getAttack(), reader2->getAttack());
    EXPECT_EQ(reader1->getCounterattackDamage(), reader2->getCounterattackDamage());
    EXPECT_EQ(reader1->getDefence(), reader2->getDefence());
    EXPECT_EQ(reader1->getMaxLives(), reader2->getMaxLives());
    reader1->readAmericanArcher();
    reader2->readAmericanArcher();
    EXPECT_EQ(reader1->getMoveDistance(), reader2->getMoveDistance());
    EXPECT_EQ(reader1->getAttackDistance(), reader2->getAttackDistance());
    EXPECT_EQ(reader1->getAttack(), reader2->getAttack());
    EXPECT_EQ(reader1->getCounterattackDamage(), reader2->getCounterattackDamage());
    EXPECT_EQ(reader1->getDefence(), reader2->getDefence());
    EXPECT_EQ(reader1->getMaxLives(), reader2->getMaxLives());
    reader1->readRussianWarrior();
    reader2->readRussianWarrior();
    EXPECT_EQ(reader1->getMoveDistance(), reader2->getMoveDistance());
    EXPECT_EQ(reader1->getAttackDistance(), reader2->getAttackDistance());
    EXPECT_EQ(reader1->getAttack(), reader2->getAttack());
    EXPECT_EQ(reader1->getCounterattackDamage(), reader2->getCounterattackDamage());
    EXPECT_EQ(reader1->getDefence(), reader2->getDefence());
    EXPECT_EQ(reader1->getMaxLives(), reader2->getMaxLives());
}


TEST(fight, army
){
std::shared_ptr<CArmy> army(new Army(new Warrior(Life(10), 15), Cell(1, 2), 0));
std::shared_ptr<CArmy> army2(new Army(new Warrior(Life(10), 5), Cell(1, 2), 0));
army->
fight(army2);

}