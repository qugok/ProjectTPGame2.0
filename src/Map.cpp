
#include <Map.h>

bool Map::exists(const Cell &c) const {
    return this->m.find(c) != this->m.end();
}

Map::Map(int height, int width) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            m.insert(Cell(i, j));
        }
    }
}
