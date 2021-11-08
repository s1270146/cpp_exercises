#include "Mat4x4.h"
#include <iostream>

Mat4x4::Mat4x4()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
                mat[i][j] = 1;
            else
                mat[i][j] = 0;
            //std::cout << mat[i][j] << " ";
        }
        //std::cout << std::endl;
    }
}

Mat4x4::Mat4x4(double mat_in[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            mat[i][j] = mat_in[i][j];
        }
    }
}

Mat4x4::~Mat4x4()
{
}

double Mat4x4::getMat(int i, int j) const
{
    return mat[i][j];
}

Mat4x4 &Mat4x4::operator*(const Mat4x4 &other)
{
    Mat4x4 mt;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            mt.mat[i][j] = 0;
            for (int k = 0; k < 4; k++)
            {
                mt.mat[i][j] += mat[i][k] * other.mat[k][j];
                //std::cout <<  this->mat[i][k] << "*" << other.mat[j][k] << " ";
            }
            //std::cout << "|" << mt.mat[i][j] << "|";
        }
        //std::cout << std::endl;
    }

    return mt;
}

bool Mat4x4::operator==(const Mat4x4 &other) const
{
    int flag = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (mat[i][j] != other.mat[i][j])
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
        return true;
    else
        return false;
}

Mat4x4 &Mat4x4::operator+=(const Mat4x4 &other)
{
    Mat4x4 mt = *this;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            mat[i][j] = 0;
            mat[i][j] = mt.mat[i][j] + other.mat[i][j];
        }
    }

    return *this;
}

Mat4x4 &Mat4x4::operator-=(const Mat4x4 &other)
{
    Mat4x4 mt = *this;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            mat[i][j] = 0;
            mat[i][j] = mt.mat[i][j] - other.mat[i][j];
        }
    }

    return *this;
}

Mat4x4 &Mat4x4::operator+(const Mat4x4 &other)
{
    Mat4x4 mt;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            mt.mat[i][j] = 0;
            mt.mat[i][j] = mat[i][j] + other.mat[i][j];
        }
    }

    return mt;
}

double &Mat4x4::operator()(int i, int j)
{
    return mat[i][j];
}

Mat4x4 &Mat4x4::operator-() const
{
    Mat4x4 mt;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            mt.mat[i][j] = -mat[i][j];
        }
    }
    return mt;
}

