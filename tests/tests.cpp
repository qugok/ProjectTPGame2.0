//
// Created by iesek on 21.03.2018.
//

#include <gtest/gtest.h>
#include <GenericUnit.h>
#include <CPosition.h>
#include <Player.h>
#include <Fractions.h>
#include <Game.h>


TEST(Position, testingDistanse) {
    CPosition position1(0, 0), position2(3, 3);
    EXPECT_EQ(position1.distanceTo(&position2), 6);
    EXPECT_EQ(position2.distanceTo(&position1), 6);
    EXPECT_EQ(position2.distanceTo(&position2), 0);
    EXPECT_EQ(position1.distanceTo(&position1), 0);
}


TEST(Position, testingUnit) {
    CPosition position(0, 0);
    EXPECT_EQ(position.empty(), true);
    GenericUnit unit(&position, nullptr, Life(2), false, false, false, 1, 1, 1, 1, 1);
    position.setUnit(&unit);
    EXPECT_EQ(position.empty(), false);
    position.clear();
    EXPECT_EQ(position.empty(), true);
    EXPECT_EQ(position.getUnit(), nullptr);
}

TEST(Player, test) {
    CPosition position(0, 0);
    Player *player = new Player(new American(&position, player));
    EXPECT_EQ(player->dead(), true);
    player->addArcher();
    player->addWarior();
    EXPECT_EQ(player->dead(), false);
    EXPECT_EQ(player->getUnits().size(), 2);
    delete player;
}


TEST(Field, test) {
    Field *field = new Field(3, 3);
    CPosition position1(0, 0), position2(4, 4);
    EXPECT_EQ(*(field->getDefaultRussian()), position2);
    EXPECT_EQ(*(field->getDefaultAmerican()), position1);
    EXPECT_EQ(field->getList().size(), 11);
    EXPECT_EQ(Field(field->getList()).getList(), field->getList());
    delete field;
}

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
    CPosition position(0, 0);
    Player *player = new Player(new American(&position, player));
    GenericUnit unit(&position, nullptr, Life(2), false, false, false, 1, 1, 1, 1, 1);
    EXPECT_EQ(unit.isFlying(), false);
    EXPECT_EQ(unit.getAttack(), 1);
    EXPECT_EQ(unit.getDefence(), 1);
    EXPECT_EQ(unit.getCounterattackDamage(), 1);
    EXPECT_EQ(unit.getMoveDistance(), 1);
    EXPECT_EQ(unit.getAttackDistance(), 1);
    CPosition position1(1, 1), position2(2, 2);
    GenericUnit unit2(&position1, nullptr, Life(2), false, false, false, 1, 1, 1, 1, 1);
    unit2.moveTo(&position2);
    EXPECT_EQ(*(unit2.getPosition()), position2);
    EXPECT_EQ(position2.getUnit(), &unit2);
    EXPECT_EQ(position1.getUnit(), nullptr);
    unit.attack(&unit2);
    EXPECT_EQ(unit2.getLife().isAlife(), !unit2.dead());
    unit2.defenceFrom(&unit);
    EXPECT_FALSE(unit2.dead());
    EXPECT_EQ(unit.getLife().isAlife(), !unit.dead());
    unit.attack(&unit2);
    unit.defenceFrom(&unit2);
    unit.defenceFrom(&unit2);
    EXPECT_EQ(unit2.getLife().isAlife(), !unit2.dead());
    unit2.step();
    EXPECT_TRUE(unit2.dead());
    delete player;
}

TEST(Game, test) {
    Game game(3, 3);
    Player *first = game.getCurrentPlayer();
    Player *other1 = game.getOtherPlayer();
    game.step();
    Player *second = game.getCurrentPlayer();
    Player *other2 = game.getOtherPlayer();
    EXPECT_EQ(first, other2);
    EXPECT_EQ(second, other1);
    EXPECT_FALSE(first == other1);
    EXPECT_FALSE(second == other2);
    EXPECT_TRUE(game.finished());
    Field field(3, 3);
    EXPECT_EQ(*(game.getField()->getDefaultAmerican()), *(field.getDefaultAmerican()));
    EXPECT_EQ(*(game.getField()->getDefaultRussian()), *(field.getDefaultRussian()));
    EXPECT_EQ(game.getField()->getList().size(), field.getList().size());
    first->addWarior();
    second->addWarior();
    EXPECT_FALSE(game.finished());
}