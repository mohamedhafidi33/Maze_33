/*
	La structure de coordonnées est une structure de données qui contient des informations de coordonnées.
    Il est utilisé par les Rooms, les MazeObjects et les classes dérivées de MazeObjects
*/

#pragma once
struct Coordinate
{
public:
	int xPos;
	int yPos;
	Coordinate(int x, int y);
	Coordinate();
	~Coordinate();

	bool operator ==(const Coordinate &other) const
	{
		if (xPos == other.xPos && yPos == other.yPos)
			return true;
		else
			return false;
	}

	bool operator !=(const Coordinate &other) const
	{
		if (xPos != other.xPos || yPos != other.yPos)
			return true;
		else
			return false;
	}
};

