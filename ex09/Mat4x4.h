#pragma once
#include <iostream>

template <class T, int N = 4>
class Mat4x4
{
private:
    /* data */
    //int n = 4;
    T mat[N][N];

public:
    Mat4x4()
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
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
    Mat4x4(double mat_in[4][4])
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                mat[i][j] = mat_in[i][j];
                //std::cout << mat[i][j] << " ";
            }
            //std::cout << std::endl;
        }
    }

    Mat4x4 &operator*(const Mat4x4 &other)
    {
        Mat4x4<double> mt;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                mt.mat[i][j] = 0;
                for (int k = 0; k < N; k++)
                {
                    mt.mat[i][j] += mat[i][k] * other.mat[k][j];
                }
            }
        }

        return mt;
    }
    bool operator==(const Mat4x4 &other) const
    {
        int flag = 1;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
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

    Mat4x4 &operator+=(const Mat4x4 &other)
    {
        Mat4x4<double> mt = *this;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                mat[i][j] = 0;
                mat[i][j] = mt.mat[i][j] + other.mat[i][j];
            }
        }

        return *this;
    }

    Mat4x4 &operator-=(const Mat4x4 &other)
    {
        Mat4x4<double> mt = *this;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                mat[i][j] = 0;
                mat[i][j] = mt.mat[i][j] - other.mat[i][j];
            }
        }

        return *this;
    }

    double &operator()(int i, int j)
    {
        return mat[i][j];
    }

    Mat4x4 &operator-() const
    {
        Mat4x4 mt;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (mat[i][j] == 0)
                    mt.mat[i][j] = mat[i][j];
                else
                    mt.mat[i][j] = -mat[i][j];
            }
        }
        return mt;
    }

    template <class U, int M = 4>
    friend std::ostream &operator<<(std::ostream &os, const Mat4x4<U,M> &other)
    {
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < M; j++)
            {
                os << other.mat[i][j] << " ";
            }
            os << std::endl;
        }
        return os;
    }
};
