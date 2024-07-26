#include<iostream>

using namespace std;
int main()
{
    int the_sort[] {3,5,1,788,23,33,455,666,13,22,123};
    int number=sizeof(the_sort)/sizeof(the_sort[0]);
    cout<<number<<endl;
    for(int i=0;i<number;i++){
        for(int j=0;j<number-i;j++){
            if(the_sort[j]>the_sort[j+1]){
                int temp =the_sort[j];
                the_sort[j]=the_sort[j+1];
                the_sort[j+1]=temp;
            }
        }
    }
    for (int i = 0; i < number; i++)
    {
        cout<<the_sort[i]<<"  ";
    }
    

    system("pause");
    return 0;
}