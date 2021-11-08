#pragma once
#include <iostream>

class Mat4x4
{
private:
    /* data */
    double mat[4][4];

public:
    Mat4x4();
    Mat4x4(double mat_in[4][4]);
    Mat4x4 &operator*(const Mat4x4 &other);
    bool operator==(const Mat4x4 &other) const;
    Mat4x4 &operator+=(const Mat4x4 &other);
    Mat4x4 &operator-=(const Mat4x4 &other);
    Mat4x4 &operator+(const Mat4x4 &other);
    double &operator()(int i, int j);
    Mat4x4 &operator-() const;
    //friend std::ostream& operator<< (std::ostream& os, const Mat4x4& other);
    friend std::ostream &operator<<(std::ostream &os, const Mat4x4 &other)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                os << other.mat[i][j] << " ";
            }
            os << std::endl;
        }
        return os;
    }
    ~Mat4x4();
    double getMat(int i, int j) const;
};
