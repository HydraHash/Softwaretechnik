#include <ostream>
#include <istream>
using namespace std;
class Point {
  public:

  Point(int x=0,int y=0);
  Point(const Point &p);
  ~Point();
  int getX()const;
  int getY()const;
  void setX(int x);
  void setY(int y);


private:
  int x;
  int y;
};
void normaleFunktion();
ostream & operator << (ostream &out, Point &p);
istream & operator >> (istream &in, Point &);


