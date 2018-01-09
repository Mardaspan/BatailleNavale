#ifndef SQUARE_H
#define SQUARE_H

/**
 * Square on a Board
 *
 * @brief The Square class
 */
class Square
{

public:
    static const int WIDTH = 45;
    static const int HEIGHT = 45;
    bool hit, occupied;
    int x, y;

    /**
     * Constructor
     *
     * @brief Square
     */
    Square();
    /**
     * Constructor with the square position
     *
     * @brief Square
     * @param x abscissa position
     * @param y ordinate position
     */
    Square(int x, int y);
    /**
     * Get abscissa position
     *
     * @brief getX
     * @return abscissa position
     */
    int getX();
    /**
     * Get ordinate position
     *
     * @brief getY
     * @return ordinate position
     */
    int getY();
    /**
     * Tell if the square is occupied
     *
     * @brief isOccupied
     * @return boolean
     */
    bool isOccupied();
    /**
     * Tell if the square is hit
     *
     * @brief isHit
     * @return boolean
     */
    bool isHit();
    /**
     * Change the occupied value
     *
     * @brief setOccupied
     * @param o true if the square is occupied
     */
    void setOccupied(bool o);
    /**
     * Change the hit value
     *
     * @brief setHit
     * @param h true is the square is hit
     */
    void setHit(bool h);
};


#endif // SQUARE_H
