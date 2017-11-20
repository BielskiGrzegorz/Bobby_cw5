#ifndef SygnalSinus_HPP
#define SygnalSinus_HPP

class SygnalSinus_HPP : public sygnal
{
public:
    SygnalSinus(double a=1.0, double w=1.0, double psi=0.0) : _a(a), _w(w), _psi(psi){};
    virtual ~SygnalSinus(){};
    virtual double x(double t)
    {
        return _A* sin(_w * t  + _psi);
    }
    virtual void wypisz(std::ostream& s)
    {
        s << "Sygnal sinudoidalny"<<endl;
        s << " - A= "<<_A<<endl;
        s << " - w= "<<_w<<endl;
        s << " - psi= "<<_psi<<endl;
    }
private:
    double _A;
    double _w;
    double _psi;

};
#endif // SygnalSinus_HPP
