#include<iostream>
using namespace std;
int main()
{
    const int pen{10};
    const int marker{20};
    const int eraser=89;
    const int rectangle{40};
    const int ellipse{60};
    int tool=eraser;
    switch(tool)
    {
        case pen:{
        cout<<"active tool is pen"<<endl;
        }
        break;
        case marker:{
        cout<<"active tool is pen"<<endl;
        }
        break;
      case eraser:
      case rectangle:
      case ellipse:
           cout<<"hii";

       break;



    }

}
