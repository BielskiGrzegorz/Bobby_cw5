#ifndef Sygnal2_HPP
#define Sygnal2_HPP

class Sygnal2
{
    virtual ~Sygnal2(){}
    virtual double x(double t) =0;
    void wypisz(std::ostream& stream);
    friend std::ostream& operator<<(std::ostream& s, const Sygnal2& sygnal)
    {
        sygnal.wypisz(s);
        return s;
    }

};
#endif // Sygnal2_HPP
