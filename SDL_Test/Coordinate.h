/*
	La structure de coordonn�es est une structure de donn�es qui contient des informations de coordonn�es.
    Il est utilis� par les Rooms, les MazeObjects et les classes d�riv�es de MazeObjects
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

