#ifndef __POINT_H__
#define __POINT_H__

template <typename t>

class Point{
    private:
    t x,y;
    public:
    Point(const t u=0, const t v=0): x(u),y(v){}
    t getx()const{
        return x;
    }
    t gety()const{
        return y;
    }
};

#endif
