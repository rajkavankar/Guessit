#include <iostream>
#include<string>
using namespace std;
class game
{


public:
    void grid1()
    {
        cout<<"\nplease be true\n";
        cout<<"\n1\t3\t5\t7\n9\t11\t13\t15\n17\t19\t21\t23\n25\t27\t29\t31\nDoes the number exist in the grid(y/n)\n";

    }
    void grid2()
    {
        cout<<"\n2\t3\t6\t7\n10\t11\t14\t15\n18\t19\t22\t23\n26\t27\t30\t31\nDoes the number exist in the grid(y/n)\n";

    }
    void grid3()
    {
        cout<<"\n4\t5\t6\t7\n12\t13\t14\t15\n20\t21\t22\t23\n28\t29\t30\t31\nDoes the number exist in the grid(y/n)\n";

    }
    void grid4()
    {
        cout<<"\n8\t9\t10\t11\n12\t13\t14\t15\n24\t25\t26\t27\n28\t26\t30\t31\nDoes the number exist in the grid(y/n)\n";

    }
    void grid5()
    {
        cout<<"\n16\t17\t18\t19\n20\t21\t22\t23\n24\t25\t26\t27\n28\t29\t30\t31\nDoes the number exist in the grid(y/n)\n";

    }

};
int main()
{
    game g;
    int a=1,an=2,h=3,i=4,j=5,k=6,l=7,m=8,al=9,o=10,p=11,q=12,r=13,s=14,t=15,u=16,v=17,w=18,x=19,am=20,z=21,ab=22,ac=23,ad=24,ae=25,af=26,ag=27,ah=28,ai=29,aj=30,ak=21;
    char b,c,d,e,f,y,n;
    g.grid1();
    cin>>b;
    g.grid2();
    cin>>c;
    g.grid3();
    cin>>d;
    g.grid4();
    cin>>e;
    g.grid5();
    cin>>f;
    if('y'==b&&'n'==c&&'n'==d&&'n'==e&&'n'==f)
    {
        cout<<"\nYour numberis\n"<<a;
    }
    else if('n'==b&&'y'==c&&'n'==d&&'n'==e&&'n'==f)
    {
        cout<<"\nYour number is\n"<<an;
    }
    else if('y'==b&&'y'==c&&'n'==d&&'n'==e&&'n'==f)
    {
        cout<<"\nYour number is\n"<<h;
    }
     else if('n'==b&&'n'==c&&'y'==d&&'n'==e&&'n'==f)
    {
        cout<<"\nYour number is\n"<<i;
    }
     else if('y'==b&&'n'==c&&'y'==d&&'n'==e&&'n'==f)
    {
        cout<<"\nYour number is\n"<<j;
    }
     else if('n'==b&&'y'==c&&'y'==d&&'n'==e&&'n'==f)
    {
        cout<<"\nYour number is\n"<<k;
    }
     else if('y'==b&&'y'==c&&'y'==d&&'n'==e&&'n'==f)
    {
        cout<<"\nYour number is\n"<<l;
    }
     else if('n'==b&&'n'==c&&'n'==d&&'y'==e&&'n'==f)
    {
        cout<<"\nYour number is\n"<<m;
    }
     else if('y'==b&&'n'==c&&'n'==d&&'y'==e&&'n'==f)
    {
        cout<<"\nYour number is\n"<<al;
    }
     else if('n'==b&&'y'==c&&'n'==d&&'y'==e&&'n'==f)
    {
        cout<<"\nYour number is\n"<<o;
    }
     else if('y'==b&&'y'==c&&'n'==d&&'y'==e&&'n'==f)
    {
        cout<<"\nYour number is\n"<<p;
    }
     else if('n'==b&&'n'==c&&'y'==d&&'y'==e&&'n'==f)
    {
        cout<<"\nYour number is\n"<<q;
    }
     else if('y'==b&&'n'==c&&'y'==d&&'y'==e&&'n'==f)
    {
        cout<<"\nYour number is\n"<<r;
    }
     else if('n'==b&&'y'==c&&'y'==d&&'y'==e&&'n'==f)
    {
        cout<<"\nYour number is\n"<<s;
    }
     else if('y'==b&&'y'==c&&'y'==d&&'y'==e&&'n'==f)
    {
        cout<<"\nYour number is\n"<<t;
    }
     else if('n'==b&&'n'==c&&'n'==d&&'n'==e&&'y'==f)
    {
        cout<<"\nYour number is\n"<<u;
    }
     else if('y'==b&&'n'==c&&'n'==d&&'n'==e&&'y'==f)
    {
        cout<<"\nYour number is\n"<<v;
    }
     else if('n'==b&&'y'==c&&'n'==d&&'n'==e&&'y'==f)
    {
        cout<<"\nYour number is\n"<<w;
    }
     else if('y'==b&&'y'==c&&'n'==d&&'n'==e&&'y'==f)
    {
        cout<<"\nYour number is\n"<<x;
    }
     else if('n'==b&&'n'==c&&'y'==d&&'n'==e&&'y'==f)
    {
        cout<<"\nYour number is\n"<<am;
    }
     else if('y'==b&&'n'==c&&'y'==d&&'n'==e&&'y'==f)
    {
        cout<<"\nYour number is\n"<<z;
    }
     else if('n'==b&&'y'==c&&'y'==d&&'n'==e&&'y'==f)
    {
        cout<<"\nYour number is\n"<<ab;
    }
     else if('y'==b&&'y'==c&&'y'==d&&'n'==e&&'y'==f)
    {
        cout<<"\nYour number is\n"<<ac;
    }
     else if('n'==b&&'n'==c&&'n'==d&&'y'==e&&'y'==f)
    {
        cout<<"\nYour number is\n"<<ad;
    }
       else if('y'==b&&'n'==c&&'n'==d&&'y'==e&&'y'==f)
    {
        cout<<"\nYour number is\n"<<ae;
    }
       else if('n'==b&&'y'==c&&'n'==d&&'y'==e&&'y'==f)
    {
        cout<<"\nYour number is\n"<<af;
    }
       else if('y'==b&&'y'==c&&'n'==d&&'y'==e&&'y'==f)
    {
        cout<<"\nYour number is\n"<<ag;
    }
       else if('n'==b&&'n'==c&&'y'==d&&'y'==e&&'y'==f)
    {
        cout<<"\nYour number is\n"<<ah;
    }
       else if('y'==b&&'n'==c&&'y'==d&&'y'==e&&'y'==f)
    {
        cout<<"\nYour number is\n"<<ai;
    }
       else if('n'==b&&'y'==c&&'y'==d&&'y'==e&&'y'==f)
    {
        cout<<"\nYour number is\n"<<aj;
    }
       else ('y'==b&&'y'==c&&'y'==d&&'y'==e&&'y'==f);
    {
        cout<<"\nYour number is\n"<<ak;
    }
    return 0;
}
