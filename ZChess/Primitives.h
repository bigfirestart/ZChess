#pragma once


class Primitives {
private:
	char name;
	char stagemove;
	char color;
protected:
	int** vectors;
public:
	Primitives(char _name, char _stagemove, char _color) {
		name = _name;
		stagemove = _stagemove;
		color = _color;
	}
	virtual bool Move() = 0;
	char GetName() const {
		return name;
	}
	char GetColor() const {
		return color;
	}
	char GetStagemove() const {
		return stagemove;
	}

//int possibleMoves[100][2];



};
