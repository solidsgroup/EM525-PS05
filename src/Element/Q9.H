#ifndef ELEMENT_Q9_H
#define ELEMENT_Q9_H

#include "Element.H"

namespace Element
{
template<class MODEL>
class Q9 : public Element<2,9,9,MODEL>
{
public:
    using Element<2,9,9,MODEL>::Element;

    std::array<double,9> eta(Eigen::Vector2d Y) override
    {
        // TODO - copy from previous
    }

    std::array<Eigen::Vector2d,9> Deta(Eigen::Vector2d Y) override
    {
        // TODO - copy from previous
    }

public:
    virtual const std::array<Eigen::Vector2d,9> & getY0() {return Y0;}
    virtual const std::array<Eigen::Vector2d,9> & getQp() {return Qp;}
    virtual const std::array<double,9> & getQw() {return Qw;}
    virtual const double getArea() {
        // TODO - copy from previous
    }

private:
    //
    // Hard-coded values common to all elements
    //

    const std::array<Eigen::Vector2d,9> Y0 = {
        Eigen::Vector2d(-1.0,-1.0),
        Eigen::Vector2d( 0.0,-1.0),
        Eigen::Vector2d( 1.0,-1.0),
        Eigen::Vector2d( 1.0, 0.0),
        Eigen::Vector2d( 1.0, 1.0),
        Eigen::Vector2d( 0.0, 1.0),
        Eigen::Vector2d(-1.0, 1.0),
        Eigen::Vector2d(-1.0, 0.0),
        Eigen::Vector2d( 0.0, 0.0),
    };

    const std::array<Eigen::Vector2d,9> Qp = {
        // TODO - copy from previous
    };

    const std::array<double,9> Qw = {
        // TODO - copy from previous
    };


public:
    
    static const int vtkid = 28;
};

}
#endif
