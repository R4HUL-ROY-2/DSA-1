#include<iostream>
using namespace std;

class linesegment{
	int x,y;
	public :
		linesegment()
		{
		}
		linesegment(int m, int n)
		{
			x=m;
			y=n;
		}
		
		void isparallel(linesegment , linesegment , linesegment , linesegment );
};

void linesegment :: isparallel(linesegment p , linesegment q, linesegment r ,linesegment s)
{
	int slope1,slope2;
	slope1=(q.y-p.y)/(q.x-p.x);
	slope2=(s.y-r.y)/(s.x-r.x);
	if(slope1 == slope2)
	{
		cout << "two linesegments are parallel to each other " << endl ;
	}
	else
	{
		cout << "two line segments are not parallel" << endl ;
	}
}

int main()
{   
    int x1,y1;
    cout << "enter the value of first co-ordinates (x1,y1)" << endl;
    cin >> x1 >> y1;
    linesegment a(x1,y1);
    
    cout << "enter the value of first co-ordinates (x2,y2)" << endl;
    cin >> x1 >> y1;
    linesegment b(x1,y1);
    
    cout << "enter the value of second co-ordinates (x3,y3)" << endl;
    cin >> x1 >> y1;
    linesegment c(x1 ,y1);
    
    cout << "enter the value of first co-ordinates (x4,y4)" << endl;
    cin >> x1 >> y1;
    linesegment d(x1 ,y1);
    linesegment obj;
    obj.isparallel(a , b , c ,d );
    
    return 0;
    
  	
}
