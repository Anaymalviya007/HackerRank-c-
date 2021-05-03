/*Input Format

Input will contain four integers -  , one per line.

Output Format

Return the greatest of the four integers.
PS: I/O will be automatically handled.

Sample Input

3
4
6
5
Sample Output

6*/
#include<iostream>
using namespace std;
int main()
{   
    float N1,N2,N3,N4;
    cin >> N1>>N2>>N3>>N4;
    if (N1 >= N2 && N1 >= N3 && N1>=N4)
        cout<< N1;
    if(N2 >= N1 && N2 >= N3 && N2>=N4)
        cout<< N2;
     if(N3 >= N1 && N3 >= N2 && N3>=N4)
        cout<< N3; 
     if(N4 >= N1 && N4 >= N2 && N4>=N3)
        cout<< N4;   
    return 0;
}
