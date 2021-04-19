#include "Pair.h"
Pair::Pair()
{
    l = 0;
    r = 0;
}
Pair::Pair(double f, double s)
{
    double l = f, r = s;
    SetL(l);
    SetR(r);
}
Pair::Pair(const Pair& m)
{
    l = m.l;
    r = m.r;
}
Pair::~Pair(void) { }

ostream& operator << (ostream& out, const Pair& m)
{
    out << string(m);
    return out;
}
Pair::operator string () const
{
    stringstream sstr;
    sstr << endl << " ( " << l << " , " << r << " )" << endl << endl;
    return sstr.str();
}

Pair& Pair::operator = (const Pair& m)
{
    l = m.l;
    r = m.r;
    return *this;
}

bool operator > (Pair& a, Pair& b)
{
    if (a.l > b.r)
        return true;
    else
        return false;
}

bool operator < (Pair& a, Pair& b)
{
    if (a.l < b.r)
        return true;
    else
        return false;
}

bool operator == (Pair& a, Pair& b)
{
    if (a.l == b.r)
        return true;
    else
        return false;
}
