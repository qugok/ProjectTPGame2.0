#include <FileReader.h>
#include <Reader/FileReader.h>

void FileReader::readRussianWarrior() {
    this->readFile("./../parameters/RussianWarrior");
}

void FileReader::readRussianFlyer() {
    this->readFile("./../parameters/RussianFlyer");
}

void FileReader::readRussianArcher() {
    this->readFile("./../parameters/RussianArcher");
}

void FileReader::readAmericanWarrior() {
    this->readFile("./../parameters/AmericanWarrior");
}

void FileReader::readAmericanFlyer() {
    this->readFile("./../parameters/AmericanFlyer");
}

void FileReader::readAmericanArcher() {
    this->readFile("./../parameters/AmericanArcher");
}

void FileReader::readDefauiltWarrior() {
    this->readFile("./../parameters/DefauiltWarrior");
}

void FileReader::readDefauiltFlyer() {
    this->readFile("./../parameters/DefauiltFlyer");
}

void FileReader::readDefauiltArcher() {
    this->readFile("./../parameters/DefauiltArcher");
}

void FileReader::readFile(std::string fileName) {
    std::ifstream in;
    in.open(fileName);
    char temp;
    std::string tmp;
    while (in >> temp && temp != '-') {
        std::getline(in, tmp);
    }
    in >> Reader::Attack;
    while (in >> temp && temp != '-') {
        std::getline(in, tmp);
    }
    in >> Reader::MoveDistance;
    while (in >> temp && temp != '-') {
        std::getline(in, tmp);
    }
    in >> Reader::AttackDistance;
    while (in >> temp && temp != '-') {
        std::getline(in, tmp);
    }
    in >> Reader::CounterattackDamage;
    while (in >> temp && temp != '-') {
        std::getline(in, tmp);
    }
    in >> Reader::Defence;
    while (in >> temp && temp != '-') {
        std::getline(in, tmp);
    }
    in >> Reader::MaxLives;

}
