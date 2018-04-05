#include<iostream>
#include<cstdlib>
using namespace std;
class p
{   protected:
        int a[10];
    public:
       void data(int arr[])
        {
            for(int i=0; i<10; i++)
            {
                a[i] = arr[i];
            }
            Isort();
        }
        virtual void Isort()
        {
            int holePosition, value;
            for(int i=0; i<10; i++)
            {
                holePosition = i;
                value = a[i];
                while(holePosition>0 && a[holePosition-1]>value)
                {
                    a[holePosition] = a[holePosition-1];
                    holePosition = holePosition-1;
                }
                a[holePosition] = value;
            }
            cout<<endl;
            for(int i=0; i<10; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }

};
class q : public p
{
    public:
        void sort_it()
        {
            int hole, val;
            for(int i=0; i<10; i++)
            {
                hole = i;
                val = a[i];
                while(hole>0 && a[hole-1]<val)
                {
                    a[hole] = a[hole-1];
                    hole = hole-1;
                }
                a[hole] = val;
            }
            cout<<endl;
            for(int i=0; i<10; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
};
int main()
{
    q obj;
    int a[10];
    for(int i=0; i<10; i++)
    {
        a[i] = rand()%100;
        //cin>>a[i];
        //cout<<a[i];
    }
    obj.data(a);
    obj.sort_it();
}
