#pragma once

class Shape{

    public:
        void setLength(int length);
        void setWidth(int width);
        virtual int getArea() = 0;
    protected:
        int length;
        int width;
};
